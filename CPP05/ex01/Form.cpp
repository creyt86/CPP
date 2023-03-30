/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:27:27 by creyt             #+#    #+#             */
/*   Updated: 2023/03/30 10:36:05 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Approved"), _signed(false), _signGrade(150), _execGrade(150)
{
	std::cout << "The pile of forms to be filled is just here !" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (_signGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
	else if (_signGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &cpy) : _name(cpy.getName()), _signed(cpy.getSign()), _signGrade(cpy.getSignGrade()), _execGrade(cpy.getExecGrade())
{
	std::cout << "Copy of the forms in progress" << std::endl;
	*this = cpy;
}

Form &Form::operator=(Form const &rhs)
{
	if (this != &rhs)
		this->_signed = rhs._signed;
// pas de copies possible avec des const il faut donc initialiser les valeurs dans le cpy
	return *this;
}

Form::~Form()
{
	std::cout << "The forms have all been filled out." << std::endl;
}

std::string Form::getName() const
{
	return _name;
}

bool	Form::getSign() const {
	return _signed;
}

int	Form::getSignGrade() const {
	return _signGrade;
}

int	Form::getExecGrade() const {
	return _execGrade;
}

const char*	   Form::GradeTooHighException::what()  const throw()
{
	return "Grade too high !";
}

const char*	   Form::GradeTooLowException::what()  const throw()
{
	return "Grade too low !";
}

void	Form::beSigned(Bureaucrat &obj)
{
	try
	{
		if (obj.getGrade() > this->getSignGrade())
			throw Form::GradeTooLowException();
		else
			this->_signed = true;
	}
	catch (std::exception &except)
	{
		std::cout << except.what() << std::endl;
	}

}

std::ostream	&operator<<(std::ostream &out, const Form &obj)
{
	std::string	isItSigned;
	if (obj.getSign() == true)
		isItSigned = "Yes";
	else
		isItSigned = "No";
	out << "Form " << obj.getName() << std::endl
		<< "Sign grade " << obj.getSignGrade() << std::endl
		<< "Exec grade " << obj.getExecGrade() << std::endl
		<< "Is the form signed ? " << isItSigned << std::endl;
	return out;
}
