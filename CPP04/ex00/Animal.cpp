/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:03:17 by creyt             #+#    #+#             */
/*   Updated: 2023/03/14 15:25:42 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal is alive" << std::endl;
}

Animal::Animal(Animal const &cpy)
{
	*this = cpy;
	std::cout << "Copy constructor called" << std::endl;
}

Animal & Animal::operator=(Animal const &rhs)
{
	if (this != &rhs)
		type = rhs.type;

	std::cout << "Copy assignment called" << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal goes away" << std::endl;
}

std::string	Animal::getType() const
{
	return type;
}

void	Animal::makeSound() const
{
	//std::cout << " Animal dosen't make noise because it hasn't an own sound 🤫 " << std::endl;
}
