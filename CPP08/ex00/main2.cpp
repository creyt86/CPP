/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 08:23:55 by creyt             #+#    #+#             */
/*   Updated: 2023/04/12 08:23:57 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void vector() {
	std::vector<int> v1;

	v1.push_back(1);
	v1.push_back(17);
	v1.push_back(42);
	v1.push_back(100);
	std::cout << "Vector test" << std::endl;
	try {
		easyfind(v1, 20);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << ": found nothing." << std::endl;
	}
	try {
		easyfind(v1, 42);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << ": found nothing." << std::endl;
	}
}

void list() {
	std::list<int> lst1;

	lst1.push_back(1);
	lst1.push_back(17);
	lst1.push_back(42);
	lst1.push_back(100);
	std::cout << "list test" << std::endl;
	try {
		easyfind(lst1, 20);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << ": found nothing." << std::endl;
	}
	try {
		easyfind(lst1, 42);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << ": found nothing." << std::endl;
	}
}

int main() {
	vector();
	list();
}
