/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:04:54 by creyt             #+#    #+#             */
/*   Updated: 2023/03/24 14:14:10 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("The Robotomy Request Form", 72, 45), _target("DefaultTarget")
{
	//std::cout << " Constructor RRF called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	//std::cout << " Destructor RRF called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("The Robotomy Request Form", 72, 45), _target(target)
{
	//std::cout << " Constructor string RRF called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy) : AForm(cpy)
{
	(*this) = cpy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
		_target = rhs._target;
	}
	return (*this);
}


void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (getSign())
	{
		if (executor.getGrade() <= getGradeExec())
		{
			std::cout << "BRRRRRRRRR BZZZZZIIIIIIIII" << std::endl;
			if (std::rand() % 2)
			{
				std::cout << _target
						  << " robotomy process works, unfortunatly ClapTrap is back."<< std::endl;
			}
			else
			{
				std::cout << "Robotomy process failed, please try again" << std::endl;
			}
		}
		else
		{
			throw AForm::GradeTooLowException();
		}
	}
	else
	{
		throw AForm::SignException();
	}
}
