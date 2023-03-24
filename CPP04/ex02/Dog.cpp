/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:46:10 by creyt             #+#    #+#             */
/*   Updated: 2023/03/16 11:37:04 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	_brain = new Brain;
	std::cout << "Dog wants to play with you !" << std::endl;
}

Dog::Dog(Dog const &cpy)
{
	*this = cpy;
	_brain = NULL;
	std::cout << "Copy constructor called" << std::endl;
}

Dog & Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
		Animal::operator=(rhs);
		if (_brain)
			delete _brain;
		_brain = new Brain;
		_brain->operator=(*rhs._brain);
	}
	std::cout << "Copy assignment called" << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog saw a ball and left !" << std::endl;
	delete _brain;
}

void	Dog::makeSound() const
{
	std::cout << "Wouaf wouaf 🐶 " << std::endl;
}

void	Dog::setIdea(std::string idea, int i) const
{
	if (i < 0 || i > NB_IDEAS)
	{
		std::cout << "Not an available entry" << std::endl;
		return;
	}
	_brain->ideas[i] = idea;
	std::cout << "Dog idea number" << i << std::endl;
}

std::string Dog::getIdea(int i) const 
{
	if (i < 0 || i > NB_IDEAS)
		return ("Not an available entry");
	return (_brain->ideas[i]);
}