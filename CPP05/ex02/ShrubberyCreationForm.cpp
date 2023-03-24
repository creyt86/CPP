/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:05:10 by creyt             #+#    #+#             */
/*   Updated: 2023/03/24 14:18:58 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("The Shrubbery Creation Form", 145, 137), _target("DefaultTarget")
{
	//std::cout << " Constructor SCF called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	//std::cout << " Destructor SCF called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("The Shrubbery Creation Form", 145, 137), _target(target)
{
	//std::cout << " Constructor string SCF called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy) : AForm(cpy)
{
	(*this) = cpy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
		_target = rhs._target;
	}
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string trees = "            ,@@@@@@@,\n";
				trees += "    ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
				trees += " ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n";
				trees += ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n";
				trees += "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n";
				trees += "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n";
				trees += "`&%\\ ` /%&'    |.|        \\ '|8'\n";
				trees += "    |o|        | |         | |\n";
				trees += "    |.|        | |         | |\n";
				trees += " \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_";
	if (getSign())
	{
		if (executor.getGrade() <= getGradeExec())
		{
			std::cout << executor.getName() << " executed " << getName() << std::endl;
			std::ofstream out((_target + "_shrubbery").c_str());
			out << trees << std::endl;
			out.close();
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
