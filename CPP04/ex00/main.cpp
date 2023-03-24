/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:15:11 by creyt             #+#    #+#             */
/*   Updated: 2023/03/14 15:30:47 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << std::endl;
		std::cout << "*** test with Animal ***" << std::endl;
		std::cout << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete i;
		delete j;
	}

	{
		std::cout << std::endl;
		std::cout << "*** test with Wrong Animal ***" << std::endl;
		std::cout << std::endl;
		const WrongAnimal *k = new WrongAnimal();
		const WrongAnimal *l = new WrongCat();
		std::cout << k->getType() << " " << std::endl;
		std::cout << l->getType() << " " << std::endl;
		k->makeSound();
		l->makeSound();

		delete k;
		delete l;
	}

	{
		std::cout << std::endl;
		std::cout << "*** another test ***" << std::endl;
		std::cout << std::endl;
		const WrongAnimal *m = new WrongAnimal();
		const WrongCat *n = new WrongCat();
		std::cout << m->getType() << " " << std::endl;
		std::cout << n->getType() << " " << std::endl;
		m->makeSound();
		n->makeSound();

		delete m;
		delete n;
	}


	return 0;
}
