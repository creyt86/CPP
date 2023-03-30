/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:02:28 by creyt             #+#    #+#             */
/*   Updated: 2023/03/30 11:03:01 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::~Intern(void) {}

Intern::Intern(const Intern &cpy)
{
	*this = cpy;
}

Intern		&Intern::operator = (const Intern &rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

AForm*		Intern::makeForm(std::string formName, std::string formTarget)
{
	std::string		Forms[] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
	int				i = 0;

	while (i < 3 && Forms[i].compare(formName) != 0)
		i++;
	switch (i)
	{
		case 0 :
			std::cout << "Intern creates " << formName << std::endl;
			return (new ShrubberyCreationForm(formTarget));
		case 1 :
			std::cout << "Intern creates " << formName << std::endl;
			return (new RobotomyRequestForm(formTarget));
		case 2 :
			std::cout << "Intern creates " << formName << std::endl;
			return (new PresidentialPardonForm(formTarget));
		default :
			std::cout << "An error occured with the form. Please try again" << std::endl;
	}
	return NULL;
}
