/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:02:15 by creyt             #+#    #+#             */
/*   Updated: 2023/03/06 12:53:54 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*zombies = new Zombie[N];

	for(int i = 0; i < N; i++)
	{
		zombies[i].setName(name);
		std::cout << "Zombie number " << i + 1 << " is here" << std::endl;
		zombies[i].announce();
	}
	return (zombies);
}
