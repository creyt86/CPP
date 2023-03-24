/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:15:11 by creyt             #+#    #+#             */
/*   Updated: 2023/03/16 11:45:02 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"
#include "Brain.hpp"

#define N 4
#define ID 7

int main()
{
    std::cout << "*** SUBJECTS'S TESTS ***" << std::endl;

	const Animal* j = new Dog(); 
	const Animal* i = new Cat();

	delete j;//should not create a leak 
	delete i;

	std::cout << " " << std::endl;

	/* Other tests */
    std::cout << "*** ARRAY TESTS ***" << std::endl;
	std::cout << " " << std::endl;
	
	Animal	*animals[N];

	std::cout << "Creation of " << N / 2 << "  dogs" << std::endl << std::endl;

	for (int i = 0; i < N / 2; i++)
		animals[i] = new Dog();

	std::cout << std::endl << "Creation of " << N / 2 << " cats" << std::endl << std::endl;

	for (int i = N / 2; i < N; i++)
		animals[i] = new Cat();

	std::cout << std::endl << "All the called animal make its sound : " << std::endl << std::endl;

	for (int i = 0; i < N; i++)
	{
		std::cout << animals[i]->getType() << " Position in array : " << i << " ";
		animals[i]->makeSound();
	}

	std::cout << std::endl << "It's time to call back all the animals" << std::endl << std::endl;

	for (int i = 0; i < N; i++)
		delete animals[i];
	
	std::cout << " " << std::endl;
	

}
