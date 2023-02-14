/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:00:30 by creyt             #+#    #+#             */
/*   Updated: 2023/02/09 09:29:47 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor PhoneBook called" << std::endl;
	this->_Nbcontact = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor PhoneBook called" << std::endl;
}

void	PhoneBook::AddContact(void)
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
	std::cout << "Your darkest secret : ";
	std::getline(std::cin, data);
	this->contact[this->_Nbcontact % 8].setDarkestSecret(data);
	std::cout << std::endl;
	this->_Nbcontact += 1;
	return ;
}

void	PhoneBook::PrintInfo(int nbr)
{
	std::cout << "First Name \t: " << this->contact[nbr].getFirstName() << std::endl;
	std::cout << "Last Name \t: " << this->contact[nbr].getLastName() << std::endl;
	std::cout << "Nickname \t: " << this->contact[nbr].getNickName() << std::endl;
	std::cout << "Phone number \t: " << this->contact[nbr].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret \t: " << this->contact[nbr].getDarkestSecret() << std::endl << std::endl;
}

void	PhoneBook::PrintContact()
{
	std::string	data;
	std::string	selected;
	int	nbr;

	std::cout << std::endl << S_COL << S_VOID << S_IN << S_VOID << S_COL;
	for (int i=0; i < std::min(this->_Nbcontact, 8); i++)
	{
		std::cout << "|         " << i << "|";
		data = this->contact[i].getFirstName();
		if (data.size() > 10)
		{
			data = data.insert(9, ".");
			data = data.substr(0, 10);
		}
		else
			std::cout << std::setw(10);
		std::cout << data;
		std::cout << "|";
		data = this->contact[i].getLastName();
		if (data.size() > 10)
		{
			data = data.insert(9, ".");
			data = data.substr(0, 10);
		}
		else
			std::cout << std::setw(10);
		std::cout << data;
		std::cout << "|";
		data = this->contact[i].getNickName();
		if (data.size() > 10)
		{
			data = data.insert(9, ".");
			data = data.substr(0, 10);
		}
		else
			std::cout << std::setw(10);
		std::cout << data;
		std::cout << "|" << std::endl;
		std::cout << S_SEP;
	}
	std::cout << "\nEnter the index of the researched contact : " ;
	std::getline(std::cin, selected);
	nbr = std::atoi(selected.c_str());
	while (nbr < 0 || nbr > std::min(this->_Nbcontact - 1, 8))
	{
		std::cout << "Not a valid number" << std::endl;
		std::cout << "Enter the index of the researched contact : " ;
		std::getline(std::cin, selected);
		nbr = std::atoi(selected.c_str());
	}
	std::cout << "Number selected : " << nbr << std::endl << std::endl;
	this->PrintInfo(nbr);
}

