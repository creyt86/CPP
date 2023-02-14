/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:56:19 by creyt             #+#    #+#             */
/*   Updated: 2023/02/09 15:02:19 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << "Human B 'Jim' is coming" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "Oh nooooo ! Jim has been killed ! RIP Jim" << std::endl;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks whith the " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
