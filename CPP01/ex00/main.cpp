/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:22:15 by creyt             #+#    #+#             */
/*   Updated: 2023/01/31 15:39:11 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*one;
	Zombie	*two;

	one = newZombie("Chuck");
	two = newZombie("Norris");
	delete(one);
	randomChump("Alfred");
	delete(two);
	return(0);
}
