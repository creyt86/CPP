/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:08:55 by creyt             #+#    #+#             */
/*   Updated: 2023/03/21 11:21:30 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat is ready to work" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat is ready to work" << std::endl;
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

Bureaucrat::Bureaucrat(Bureaucrat const &cpy)
{
	*this = cpy;
	std::cout << "Bureaucrat is using the copy's machine" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
	{
		//this->_name = rhs.getName();
		this->_grade = rhs._grade;
	}
	std::cout << "Bureaucrat is assign to a task" << std::endl;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat finishes his work's day" << std::endl;
}

std::string	Bureaucrat::getName() const
{
	return _name;
}

int	Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::increaseGrade()
{
	try
	{
		if (getGrade() < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (getGrade() == 1)
			std::cout << "Watch out, you cannot go higher" << std::endl;
		else
		{
			_grade -= 1;
			std::cout << getName() << " your grade has been increased, your are now at " << getGrade() << " grade" << std::endl;
		}

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	Bureaucrat::decreaseGrade()
{
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
