/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:46:10 by creyt             #+#    #+#             */
/*   Updated: 2023/03/14 15:26:26 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "Dog wants to play with you !" << std::endl;
}

Dog::Dog(Dog const &cpy)
{
	*this = cpy;
	std::cout << "Copy constructor called" << std::endl;
}

Dog & Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
		type = rhs.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog saw a ball and left !" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Wouaf wouaf 🐶 " << std::endl;
}
