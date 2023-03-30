/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:07:34 by creyt             #+#    #+#             */
/*   Updated: 2023/03/30 10:54:55 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("The Presidential Pardon Form", 25, 5), _target("DefaultTarget")
{
	//std::cout << " Constructor PDF called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	//std::cout << " Destructor PDF called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("The Presidential Pardon Form", 25, 5), _target(target)
{
	//std::cout << " Constructor string PDF called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy) : AForm(cpy)
{
	(*this) = cpy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
		_target = rhs._target;
	}
	return (*this);
}


void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (getSign())
	{
		if (executor.getGrade() <= getExecGrade())
		{
			std::cout << _target
					  << " has been forgiven by Zaphod Beeblebrox." << std::endl;
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
