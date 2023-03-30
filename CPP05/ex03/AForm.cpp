/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:27:27 by creyt             #+#    #+#             */
/*   Updated: 2023/03/30 10:44:25 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Approved"), _signed(false), _signGrade(150), _execGrade(150) {
//	std::cout << "AForm constructor called" << std::endl;
}

AForm::~AForm() {
//	std::cout << "AForm destructor called" << std::endl;
}

AForm::AForm(std::string name, int signGrade, int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade) {
	if (_signGrade < 1 || _execGrade < 1)
		throw AForm::GradeTooHighException();
	else if (_signGrade > 150 || _execGrade > 150)
		throw AForm::GradeTooLowException();
	//std::cout << "AForm constructor string called" << std::endl;
}

AForm::AForm(AForm const &cpy) : _name(cpy.getName()), _signed(cpy.getSign()), _signGrade(cpy.getSignGrade()), _execGrade(cpy.getExecGrade()) {
	//std::cout << "AForm cpy constructor string called" << std::endl;
	*this = cpy;
}

AForm &AForm::operator=(AForm const &rhs) {
	if (this != &rhs)
		_signed = rhs._signed;
	return *this;
}

void	AForm::beSigned(Bureaucrat &obj)
{
	try
	{
		if (obj.getGrade() > this->getSignGrade())
			throw AForm::GradeTooLowException();
		else
			this->_signed = true;
	}
	catch (std::exception &except)
	{
		std::cout << except.what() << std::endl;
	}
}

std::string	AForm::getName() const {
	return _name;
}

bool	AForm::getSign() const {
	return _signed;
}

int	AForm::getSignGrade() const {
	return _signGrade;
}

int	AForm::getExecGrade() const {
	return _execGrade;
}

std::ostream	&operator<<(std::ostream &out, const AForm &obj) {
	std::string	isItSigned;
	if (obj.getSign() == true)
		isItSigned = "Yes";
	else
		isItSigned = "No";
	out << "AForm " << obj.getName() << std::endl
		<< "Sign grade " << obj.getSignGrade() << std::endl
		<< "Exec grade " << obj.getExecGrade() << std::endl
		<< "Is the Aform signed ? " << isItSigned << std::endl;
	return out;
}

const char* AForm::GradeTooLowException::what() const throw() {
	return ("Sorry, your grade is to low !");
}

const char* AForm::GradeTooHighException::what() const throw() {
	return ("Seriously ? Your grade is to high !");
}

const char* AForm::SignException::what() const throw() {
	return ("Form isn't signed");
}
