/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:27:27 by creyt             #+#    #+#             */
/*   Updated: 2023/03/21 15:18:17 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Defaut"), _gradeSign(150), _gradeExec(150)
{
	std::cout << "The pile of forms to be filled is just here !" << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	std::cout << "The pile of forms to be filled is just here !" << std::endl;
	try
	{
		if (getGradeSign() < 1 || getGradeExec() < 1)
			throw Form::GradeTooHighException();
		else if (getGradeSign() > 150 || getGradeExec() > 150)
			throw Form::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Form::Form(Form const &cpy) : _name(cpy.getName()), _gradeSign(cpy.getGradeSign()), _gradeExec(cpy.getGradeExec())
{
	*this = cpy;
	std::cout << "Copy of the forms in progress" << std::endl;
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

int	Form::getGradeSign() const
{
	return _gradeSign;
}

int	Form::getGradeExec() const
{
	return _gradeExec;
}

bool Form::getSign()const
{
	return _signed;
}

const char*	   Form::GradeTooHighException::what()  const throw()
{
	return "Grade too high !";
}

const char*	   Form::GradeTooLowException::what()  const throw()
{
	return "Grade too low !";
}

void	Form::beSigned(Bureaucrat bureaucrat)
{
	if ( bureaucrat.getGrade() > _gradeSign)
		throw GradeTooLowException();
	
}
