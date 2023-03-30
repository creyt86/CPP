/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:08:55 by creyt             #+#    #+#             */
/*   Updated: 2023/03/30 10:32:48 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Bureau is open, bureaucrat takes his coffee" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	try
	{
		if (getGrade() < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (getGrade() > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureau is close, bureaucrat turns back home" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy) {
	std::cout << "Bureaucrat makes a copy at the copy machine" << std::endl;
	*this = cpy;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
	if (this != &rhs) {
		//_name = rhs._name;
		_grade = rhs.getGrade();
	}
	std::cout << "Bureaucrat is assign to a task" << std::endl;
	return *this;
}

std::string	Bureaucrat::getName() const {
	return _name;
}

int	Bureaucrat::getGrade() const {
	return _grade;
}

void	Bureaucrat::increaseGrade() {
	try
	{
		if (getGrade() < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (getGrade() == 1)
			std::cout << "\033[33mWatch out, you cannot go higher\e[0m" << std::endl;
		else {
			_grade -= 1;
			std::cout << getName() << " your grade has been increased, you are now " << getGrade() << " grade !\n" << std::endl;

		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	Bureaucrat::decreaseGrade() {
	try
	{
		if (getGrade() > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (getGrade() == 150)
			std::cout << "\033[33mWatch out, you cannot go lower\e[0m" << std::endl;
		else {
			_grade += 1;
			std::cout << getName() << " your grade has been decreased, you are now " << getGrade() << " grade !\n" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return (HIGH);
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
	return (LOW);
}

std::ostream	&operator <<(std::ostream &out, const Bureaucrat &obj)
{
	if (obj.getGrade() <= 100 && obj.getGrade() > 0) {
		out << "\e[32mWelcome " << obj.getName() << " you are " << obj.getGrade() << " grade !\e[0m" << std::endl;
	}
	else if (obj.getGrade() > 100  && obj.getGrade() <= 150) {
		out << "\033[35mWelcome " << obj.getName() << " you are " << obj.getGrade() << " grade...\e[0m" << std::endl;
	}
	return (out);
}

void Bureaucrat::signForm(Form &obj) {
	if (_grade <= obj.getSignGrade() && _grade > 0) {
		obj.beSigned((*this));
		std::cout << _name << " signed " << obj.getName() << std::endl;
	}
	else {
		std::cout << _name << " couldn't sign " << obj.getName() << " because grade is to low." << std::endl;
	}
}
