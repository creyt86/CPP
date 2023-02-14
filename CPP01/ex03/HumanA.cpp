/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:46:51 by creyt             #+#    #+#             */
/*   Updated: 2023/02/09 15:02:13 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << "Human A 'Bob' is coming" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "Oh nooooo ! Bob has been killed ! RIP Bob" << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks whith the " << this->_weapon.getType() << std::endl;
}
