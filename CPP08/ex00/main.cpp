/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 07:22:19 by creyt             #+#    #+#             */
/*   Updated: 2023/04/12 08:18:11 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	std::vector<int> list(20); //list tableau
	std::vector<int>::iterator n; // creation d'un iterateur pour vehiculer dans le tableau

	for (int i = 0; i < 20; i++)
		list.push_back(i * 3); // pour avoir des valeurs dans les cases

	n = easyfind(list, 16); // trouver la valeur 16 dans une des cases du tableau
	if (n == list.end())
		std::cout << "The value has not found." << std::endl;
	else
		std::cout << "Occurence: " << *n << std::endl;

	n = easyfind(list, -4);
	if (n == list.end())
		std::cout << "The value has not found." << std::endl;
	else
		std::cout << "Occurence: " << *n << std::endl;

	n = easyfind(list, 32);
	if (n == list.end())
		std::cout << "The value has not found." << std::endl;
	else
		std::cout << "Occurence is: " << *n << std::endl;

	n = easyfind(list, 3);
	if (n == list.end())
		std::cout << "The value has not found." << std::endl;
	else
		std::cout << "Occurence is: " << *n << std::endl;
	return 0;
}

