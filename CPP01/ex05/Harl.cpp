/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:00:35 by creyt             #+#    #+#             */
/*   Updated: 2023/02/14 15:03:02 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Welcome to Harl's Complaining Wall" << std::endl;

	this->_level[0] = "DEBUG";
	this->_level[1] = "INFO";
	this->_level[2] = "WARNING";
	this->_level[3] = "ERROR";

	this->_function[0] = &Harl::debug;
	this->_function[1] = &Harl::info;
	this->_function[2] = &Harl::warning;
	this->_function[3] = &Harl::error;
}

Harl::~Harl(void)
{
	std::cout << "Harl finished complaining, thank you for your help" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]\t Wait a minute, it's so long or not.... It's debugging" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]\t Wait again.... Some infos may come... or not ! " << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING] Watch out ! Warning ! Warning !" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR] What a mess ! There are errors everywhere !" << std::endl;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < NBLVLS; i++)
	{
		if (level == _level[i])
		{
			(this->*_function[i])();
			return;
		}
	}
}
