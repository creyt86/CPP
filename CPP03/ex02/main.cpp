/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:18:54 by creyt             #+#    #+#             */
/*   Updated: 2023/03/07 15:13:09 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	ClapTrap	ct1("Alberta");
	FragTrap	ft2("Bouboule");

	ct1.attack("Bouboule");
	ft2.takeDamage(4);
	ft2.beRepaired(3);
	ft2.takeDamage(6);
	ft2.highFivesGuys();
}
