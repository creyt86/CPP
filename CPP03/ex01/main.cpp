/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:18:19 by creyt             #+#    #+#             */
/*   Updated: 2023/03/14 13:06:25 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	ct1("Micheline");
	ScavTrap	st2("Roberte");

	ct1.attack("Roberte");
	st2.takeDamage(4);
	st2.beRepaired(3);
	st2.takeDamage(6);
	st2.guardGate();

}

