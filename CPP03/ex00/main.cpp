/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:48:16 by creyt             #+#    #+#             */
/*   Updated: 2023/03/06 15:42:56 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	jane("Jane");
	ClapTrap	sophie("Sophie");

	jane.attack("Sophie");
	sophie.takeDamage(4);
	sophie.beRepaired(3);
	sophie.takeDamage(6);
	sophie.attack("Jane");
	return 0;
}
