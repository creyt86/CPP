/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:43:39 by creyt             #+#    #+#             */
/*   Updated: 2023/03/24 13:06:30 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int	main(void) {
	std::cout << " " << std::endl;
	std::cout << "***** BASICS TESTS *****" << std::endl;
	std::cout << " " << std::endl;

	std::cout << "Construction of valid grade Bureaucrats : " << std::endl;
	try {
		Bureaucrat Philomena("Philo", 34);
		//Bureaucrat Paula("Popo", 82);
		AForm okAForm("OK", 150, 150);
		std::cout << Philomena;
		//std::cout << Paula;
		Philomena.signForm(okAForm);
		std::cout << okAForm;
	}
	catch (AForm::GradeTooLowException &tooLow) {
		std::cout << tooLow.what() << std::endl;
	}
	catch (AForm::GradeTooHighException &tooHigh)
	{
		std::cout << tooHigh.what() << std::endl;
	}
	std::cout << "--------------------------------------------" << std::endl;

	std::cout << "Construction of limite grade Bureaucrats : " << std::endl;
	try {
		Bureaucrat Roger("Roger", 150);
		//Bureaucrat David("DD", 1);
		std::cout << Roger;
		//std::cout << David;
		AForm okAForm("OK", 150, 150);
		Roger.signForm(okAForm);
		std::cout << okAForm;
	}
	catch (AForm::GradeTooLowException &tooLow) {
		std::cout << tooLow.what() << std::endl;
	}
	catch (AForm::GradeTooHighException &tooHigh)
	{
		std::cout << tooHigh.what() << std::endl;
	}
	std::cout << "--------------------------------------------" << std::endl;

	std::cout << "Construction of unvalid grade Bureaucrats : " << std::endl;
	try {
		Bureaucrat Sunny("Sunny", 0); // too high
		Bureaucrat Dante("Dante", 151); // to low
		AForm notOkAForm("notOK", 150, 150);
		std::cout << Sunny;
		std::cout << Dante;
		std::cout << " \n";
		Sunny.signForm(notOkAForm);
		Dante.signForm(notOkAForm);
		std::cout << notOkAForm;
	}
	catch (AForm::GradeTooLowException &tooLow) {
		std::cout << tooLow.what() << std::endl;
	}
	catch (AForm::GradeTooHighException &tooHigh)
	{
		std::cout << tooHigh.what() << std::endl;
	}
	std::cout << "--------------------------------------------" << std::endl;

	std::cout << "Increase or decrease grades of Bureaucrats : \n" << std::endl;
	try {
		Bureaucrat Sunny("Sunny", 0); // too high
		std::cout << "Goodbye " << Sunny.getName() << " you were " << Sunny.getGrade() << " grade ! It's too high...\n" << std::endl;
		std::cout << "Trying to call back " << Sunny.getName() << " but he's " << Sunny.getGrade() << " ";
		std::cout << Sunny;
		Bureaucrat Philomena("Philo", 34);
		Bureaucrat David("DD", 1);
		Sunny.decreaseGrade();
		Philomena.increaseGrade();
		Philomena.decreaseGrade();
		std::cout << David.getName() << " ";
		David.increaseGrade();
	}
	catch (AForm::GradeTooLowException &tooLow) {
		std::cout << tooLow.what() << std::endl;
	}
	catch (AForm::GradeTooHighException &tooHigh)
	{
		std::cout << tooHigh.what() << std::endl;
	}
	std::cout << "--------------------------------------------" << std::endl;

	std::cout << " " << std::endl;
	std::cout << "***** MORE TESTS *****" << std::endl;
	std::cout << " " << std::endl;

	std::cout << "Increase or decrease grades of Bureaucrats : \n" << std::endl;
	try {
		Bureaucrat Philomena("Philo", 34);
		Bureaucrat David("DD", 1);
		Bureaucrat TooHigh("Sky", -20);
		Bureaucrat TooLow("Abyss", 250);
		std::cout << Philomena;
		std::cout << David;
		std::cout << David.getName() << " ";
		David.increaseGrade();
		Philomena.decreaseGrade();
		std::cout << Philomena;
		std::cout << TooHigh.getName() << " ";
		std::cout << TooHigh;
		TooHigh.increaseGrade();
		std::cout << TooLow.getName() << " ";
		std::cout << TooLow;
		TooLow.decreaseGrade();
		std::cout << " \n";
		AForm isAForm("isAForm", 150, 150);
		TooLow.signForm(isAForm);
		std::cout << isAForm;
		std::cout << "\n";
		TooHigh.signForm(isAForm);
		std::cout << isAForm;
		std::cout << " \n";
		Philomena.signForm(isAForm);
		std::cout << isAForm;
		std::cout << " \n";
		David.signForm(isAForm);
		std::cout << isAForm;
		std::cout << "\n" << std::endl;
	}
	catch (AForm::GradeTooLowException &tooLow) {
		std::cout << tooLow.what() << std::endl;
	}
	catch (AForm::GradeTooHighException &tooHigh)
	{
		std::cout << tooHigh.what() << std::endl;
	}
	std::cout << "--------------------------------------------" << std::endl;

	std::cout << "Increase or decrease grades of Bureaucrats Wrong Form: \n" << std::endl;
	try {

		Bureaucrat Philomena("Philo", 34);
		Bureaucrat David("DD", 1);
		Bureaucrat TooHigh("Sky", -20);
		Bureaucrat TooLow("Abyss", 250);
		std::cout << Philomena;
		std::cout << David;
		std::cout << David.getName() << " ";
		David.increaseGrade();
		Philomena.decreaseGrade();
		std::cout << Philomena;
		std::cout << TooHigh.getName() << " ";
		std::cout << TooHigh;
		TooHigh.increaseGrade();
		std::cout << TooLow.getName() << " ";
		std::cout << TooLow;
		TooLow.decreaseGrade();
		std::cout << " \n";
		AForm THEAForm("THEAForm", 152, 1250);
		TooLow.signForm(THEAForm);
		std::cout << THEAForm;
		std::cout << "\n";
		TooHigh.signForm(THEAForm);
		std::cout << THEAForm;
		std::cout << " \n";
		Philomena.signForm(THEAForm);
		std::cout << THEAForm;
		std::cout << " \n";
		David.signForm(THEAForm);
		std::cout << THEAForm;
		std::cout << "\n" << std::endl;
	}
	catch (AForm::GradeTooLowException &tooLow) {
		std::cout << tooLow.what() << std::endl;
	}
	catch (AForm::GradeTooHighException &tooHigh)
	{
		std::cout << tooHigh.what() << std::endl;
	}
	std::cout << "--------------------------------------------" << std::endl;
}
