/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:10:09 by creyt             #+#    #+#             */
/*   Updated: 2023/03/07 12:57:19 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	
}

ClapTrap::ClapTrap(std::string theName)
{
	this->_name = theName;
	this->_hitPoints = 10;
	this->_nrjPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap : " << this->_name << " is alive" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& cpy)
{
	*this = cpy;
	std::cout << "Copy constructeur called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_nrjPoints = rhs._nrjPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	std::cout << "Copy assignement called" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap : " << this->_name << " is dead" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0 || this->_nrjPoints <= 0)
	{
		std::cout << "ClapTrap : " << this->_name << " is down, cannot attack anymore " << std::endl;
		return ;
	}
	_nrjPoints -= 1;
	std::cout << "ClapTrap : " << this->_name << " attacks " << target << " for " << this->_attackDamage << " damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap : " << this->_name << " takes " << amount << " damage !" << std::endl;
	this->_hitPoints -= amount;
	std::cout << "ClapTrap : " << this->_name << " is now at " << this->_hitPoints << " health points !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_nrjPoints <= 0 || this->_hitPoints <= 0 )
	{
		std::cout << "ClapTrap : " << this->_name << " is dead !" << std::endl;
		return ;
	}
	this->_nrjPoints -= 1;
	std::cout << "ClapTrap : " << this->_name << " repairing " << amount << " health points !" << std::endl;
	this->_hitPoints += amount;
	std::cout << "ClapTrap : " << this->_name << " is now at " << this->_hitPoints  << " health points !" << std::endl;
}
