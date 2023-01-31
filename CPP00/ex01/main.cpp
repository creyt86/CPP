/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 10:03:06 by creyt             #+#    #+#             */
/*   Updated: 2023/01/31 11:26:07 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string cmd;

	std::cout << START << std::endl;
	std::cout << COMMANDS << std::endl;

	std::cout << "\nEnter the command : ";
	while (std::getline(std::cin, cmd))
	{
		if (cmd == "ADD")
			phonebook.AddContact();
		else if (cmd == "SEARCH")
			phonebook.PrintContact();
		else if (cmd == "EXIT")
			return (0);
		else
			std::cout << "\n-----------------\nCommand not valid. Please try again\n";
		std::cout << COMMANDS;
		std::cout << "\nEnter the command : ";
	}
}
