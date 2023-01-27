/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:00:30 by creyt             #+#    #+#             */
/*   Updated: 2023/01/27 09:55:52 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor PhoneBook called" << std::endl;
	this->_Nbcontact = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor PhoneBook called" << std::endl;
}

void	PhoneBook::newContact(void)
{
	std::string	data;

	std::cout << "Please enter some data about the contact :" << std::endl;
	std::cout << "First Name : ";
	std::cin >> data;
	this->contact[this->_Nbcontact % 8].setFirstName(data);
	std::cout << "Last Name : ";
	std::cin >> data;
	this->contact[this->_Nbcontact % 8].setLastName(data);
	std::cout << "Nickname : ";
	std::cin >> data;
	this->contact[this->_Nbcontact % 8].setNickName(data);
	std::cout << "Phone number : ";
	std::cin >> data;
	this->contact[this->_Nbcontact % 8].setPhoneNumber(data);
	std::cin.ignore();
	std::cout << "And the best, the darkest secret : ";
	std::getline(std::cin, data);
	this->contact[this->_Nbcontact % 8].setDarkestSecret(data);
	std::cout << std::endl;
	this->_Nbcontact += 1;
	return ;
}

int	main(void)
{
	PhoneBook	phonebook;
	phonebook.newContact();
}
