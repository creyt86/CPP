/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:00:46 by creyt             #+#    #+#             */
/*   Updated: 2023/03/14 13:06:07 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{

}

ScavTrap::ScavTrap(std::string theName) : ClapTrap(theName)
{
	this->_name = theName;
	this->_hitPoints = 100;
	this->_nrjPoints = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap : " << this->_name << " is ready" << std::endl;
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
	std::cout << "ScavTrap : " << this->_name << " is down" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0 || this->_nrjPoints <= 0)
	{
		std::cout << "ScavTrap : " << this->_name << " is down, cannot attack anymore " << std::endl;
		return ;
	}
	this->_nrjPoints -= 1;
	std::cout << "ScavTrap : " << this->_name << " attacks " << target << " for " << this->_attackDamage << " damage !" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap : " << this->_name << " is now in the Gate Keeper's mode" << std::endl;
}
