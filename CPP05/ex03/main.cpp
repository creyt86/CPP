/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:43:39 by creyt             #+#    #+#             */
/*   Updated: 2023/03/30 11:04:44 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int	main(void)
{
	std::cout << " " << std::endl;
	std::cout << "***** FORM TESTS *****" << std::endl;
	std::cout << " " << std::endl;

	std::cout << "Shrubbery Form Creation : \n" << std::endl;

	Intern	poorIntern;
	AForm	*form;

	std::cout << "A form is created by an Intern" << std::endl;

	form = poorIntern.makeForm("Shrubbery Creation", "trees");

	Bureaucrat		anIntern("Nobody", 1);

	std::cout << anIntern;
	std::cout << "You have the permission to sign and execute the forms." << std::endl;

	anIntern.signForm(*form);
	anIntern.executeForm(*form);

	delete form;

	std::cout << "--------------------------------------------" << std::endl;

	std::cout << " " << std::endl;
	std::cout << "Robotomy Request Form Creation : \n" << std::endl;

	form = poorIntern.makeForm("Robotomy Request", "CL4PTP");

	std::cout << anIntern << " ";
	std::cout << "You have the permission to sign and execute the forms." << std::endl;

	anIntern.signForm(*form);
	anIntern.executeForm(*form);

	delete form;

	std::cout << "--------------------------------------------" << std::endl;

	std::cout << " " << std::endl;
	std::cout << "Presidential Pardon Form Creation : \n" << std::endl;

	form = poorIntern.makeForm("Presidential Pardon", "Tim Cook");

	std::cout << anIntern << " ";
	std::cout << "You have the permission to sign and execute the forms." << std::endl;

	anIntern.signForm(*form);
	anIntern.executeForm(*form);

	delete form;

	std::cout << "--------------------------------------------" << std::endl;

	std::cout << " " << std::endl;
	std::cout << "Invalid Form Creation : \n" << std::endl;

	form = poorIntern.makeForm("Wrong Form Name", "failed");

	{
		std::cout << "--------------------------------------------" << std::endl;

		std::cout << " " << std::endl;
		std::cout << "Robotomy Request Form Subject Creation : \n" << std::endl;

		Bureaucrat	NoName("Nobody", 1);
		Intern	someRandomIntern;
		AForm*	rrf;

		rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");

		NoName.signForm(*rrf);
		NoName.executeForm(*rrf);
	}
	return 0;
}
