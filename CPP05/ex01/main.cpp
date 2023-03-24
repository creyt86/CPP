/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:43:39 by creyt             #+#    #+#             */
/*   Updated: 2023/03/21 15:09:05 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	std::cout << " " << std::endl;
	std::cout << "***** BASICS TESTS *****" << std::endl;
	std::cout << " " << std::endl;

	std::cout << "Construction of valid grade Bureaucrats : " << std::endl;
	try {
		Bureaucrat Micheline("Micheline", 34);
		Bureaucrat Claudine("Claudine", 82);
		std::cout << Micheline;
		std::cout << Claudine;
	}
	catch (Bureaucrat::GradeTooLowException &tooLow) {
		std::cout << tooLow.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &tooHigh)
	{
		std::cout << tooHigh.what() << std::endl;
	}
	std::cout << "--------------------------------------------" << std::endl;

	std::cout << "Construction of limite grade Bureaucrats : " << std::endl;
	try {
		Bureaucrat Michel("MichMich", 150);
		Bureaucrat Robert("Robert", 1);
		std::cout << Michel;
		std::cout << Robert;
	}
	catch (Bureaucrat::GradeTooLowException &tooLow) {
		std::cout << tooLow.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &tooHigh)
	{
		std::cout << tooHigh.what() << std::endl;
	}
	std::cout << "--------------------------------------------" << std::endl;

	std::cout << "Construction of unvalid grade Bureaucrats : " << std::endl;
	try {
		Bureaucrat Cunegonde("Cunegonde", 0); // too high
		Bureaucrat Pimprenelle("Pimprenelle", 151); // to low
		std::cout << Cunegonde;
		std::cout << Pimprenelle;
	}
	catch (Bureaucrat::GradeTooLowException &tooLow) {
		std::cout << tooLow.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &tooHigh)
	{
		std::cout << tooHigh.what() << std::endl;
	}
	std::cout << "--------------------------------------------" << std::endl;
std::cout << " " << std::endl;
	std::cout << "***** MORE TESTS *****" << std::endl;
	std::cout << " " << std::endl;

	std::cout << "Increase or decrease grades of Bureaucrats : \n" << std::endl;
	try {
		Bureaucrat Micheline("Micheline", 34);
		Bureaucrat Robert("Robert", 1);
		Bureaucrat TooHigh("Sky", -20);
		Bureaucrat TooLow("Abyss", 250);
		std::cout << Micheline;
		std::cout << Robert;
		std::cout << Robert.getName() << " ";
		Robert.increaseGrade();
		Micheline.decreaseGrade();
		std::cout << Micheline;
		std::cout << TooHigh.getName() << " ";
		std::cout << TooHigh;
		TooHigh.increaseGrade();
		std::cout << TooLow.getName() << " ";
		std::cout << TooLow;
		TooLow.decreaseGrade();
		std::cout << "\n" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &tooLow) {
		std::cout << tooLow.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &tooHigh)
	{
		std::cout << tooHigh.what() << std::endl;
	}
	std::cout << "--------------------------------------------" << std::endl;
}

