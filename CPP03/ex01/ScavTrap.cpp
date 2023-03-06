/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:00:46 by creyt             #+#    #+#             */
/*   Updated: 2023/03/06 13:37:18 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string theName) : ClapTrap(theName)
{
	this->_name = theName;
	this->_hitPoints = 100;
	this->_nrjPoints = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap : " << this->_name << "is ready" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& cpy) : ClapTrap(cpy)
{
	std::cout << "Copy constructor is called" << std::endl;
	*this = cpy;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "Copy assignement called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_nrjPoints = rhs._nrjPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap : " << this->_name << "is dead" << std::endl;
}


