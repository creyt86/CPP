/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:54:39 by creyt             #+#    #+#             */
/*   Updated: 2023/02/03 13:10:10 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zombies;
	int	nZombies;
	std::string	name;

	std::cout << "\n Zombie, what's your name ?";
	std::cin >> name;
	std::cout << "How many zombies do you want to create ?";
	std::cin >> nZombies;
	zombies = zombieHorde(nZombies, name);

	delete [] zombies;
	return (0);
}
