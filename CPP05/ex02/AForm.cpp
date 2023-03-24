/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:27:27 by creyt             #+#    #+#             */
/*   Updated: 2023/03/24 13:39:20 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Approved"), _signed(false), _gradeSign(150), _gradeExec(150)
{
	std::cout << "The pile of forms to be filled is just here !" << std::endl;
}

AForm::AForm(std::string name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	std::cout << "The pile of forms to be filled is just here !" << std::endl;
	try
	{
		if (getGradeSign() < 1 || getGradeExec() < 1)
			throw AForm::GradeTooHighException();
		else if (getGradeSign() > 150 || getGradeExec() > 150)
			throw AForm::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

AForm::AForm(AForm const &cpy) : _name(cpy.getName()), _gradeSign(cpy.getGradeSign()), _gradeExec(cpy.getGradeExec())
{
	*this = cpy;
	std::cout << "Copy of the forms in progress" << std::endl;
}

AForm &AForm::operator=(AForm const &rhs)
{
	if (this != &rhs)
		this->_signed = rhs._signed;
// pas de copies possible avec des const il faut donc initialiser les valeurs dans le cpy
	return *this;
}

AForm::~AForm()
{
	std::cout << "The forms have all been filled out." << std::endl;
}

std::string AForm::getName() const
{
	return _name;
}

int	AForm::getGradeSign() const
{
	return _gradeSign;
}

int	AForm::getGradeExec() const
{
	return _gradeExec;
}

bool AForm::getSign()const
{
	return _signed;
}

const char*	   AForm::GradeTooHighException::what()  const throw()
{
	return "Grade too high !";
}

const char*	   AForm::GradeTooLowException::what()  const throw()
{
	return "Grade too low !";
}

void	AForm::beSigned(Bureaucrat bureaucrat)
{
	if ( bureaucrat.getGrade() > _gradeSign)
		throw GradeTooLowException();

}

const char* AForm::SignException::what() const throw()
{
	return ("Form isn't signed");
}

std::ostream	&operator<<(std::ostream &out, const AForm &obj)
{
	std::string	isItSigned;
	if (obj.getSign() == true)
		isItSigned = "Yes";
	else
		isItSigned = "No";
	out << "Form " << obj.getName() << std::endl
		<< "Sign grade " << obj.getGradeSign() << std::endl
		<< "Exec grade " << obj.getGradeExec() << std::endl
		<< "Is the form signed ? " << isItSigned << std::endl;
	return out;
}
