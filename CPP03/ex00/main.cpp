/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:48:16 by creyt             #+#    #+#             */
/*   Updated: 2023/02/24 15:51:32 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	jane("Jane");
	ClapTrap	sophie("Sophie");

	jane.attack("Sophie");
	sophie.takeDamage(1);
	sophie.beRepaired(3);
	return 0;
}
