/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:59:01 by creyt             #+#    #+#             */
/*   Updated: 2023/03/14 13:15:06 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{

}

FragTrap::FragTrap(std::string theName) : ClapTrap(theName)
{
	this->_name = theName;
	this->_hitPoints = 100;
	this->_nrjPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap : " << this->_name << " is ready" << std::endl;
}

FragTrap::FragTrap(FragTrap const& cpy)
{
	*this = cpy;
	std::cout << "Copy constructor called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_nrjPoints = rhs._nrjPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	std::cout << "Copy assignement called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap : " << this->_name << " is down" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap : " << this->_name << " says : Hey guys give me fives before I die !" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0 || this->_nrjPoints <= 0)
	{
		std::cout << "FragTrap : " << this->_name << " is down, cannot attack anymore " << std::endl;
		return ;
	}
	this->_nrjPoints -= 1;
	std::cout << "FragTrap : " << this->_name << " attacks " << target << " for " << this->_attackDamage << " damage !" << std::endl;
}

