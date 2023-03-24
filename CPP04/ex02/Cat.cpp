/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 09:24:46 by creyt             #+#    #+#             */
/*   Updated: 2023/03/16 11:47:49 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	_brain = new Brain;
	std::cout << this->type << " arrives quietly " << std::endl;
}

Cat::Cat(Cat const &cpy)
{
	*this = cpy;
	_brain = NULL;
	std::cout << "Copy constructor called" << std::endl;
}

Cat & Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
		Animal::operator=(rhs);
		if (_brain)
			delete _brain;
		_brain = new Brain;
		_brain->operator=(*rhs._brain); // copie profonde == duplique le contenu pointé pas seulement le pointeur 
	}
	std::cout << "Copy assignment called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat saw a mouse and left !" << std::endl;
	delete _brain;
}

void	Cat::makeSound() const
{
	std::cout << "Miaow miaow 🐱 " << std::endl;
}

void	Cat::setIdea(std::string idea, int i) const
{
	if (i < 0 || i > NB_IDEAS)
	{
		std::cout << "Not an available entry" << std::endl;
		return;
	}
	_brain->ideas[i] = idea;
	std::cout << "Cat idea number" << i << std::endl;
}

std::string Cat::getIdea(int i) const 
{
	if (i < 0 || i > NB_IDEAS)
		return ("Not an available entry");
	return (_brain->ideas[i]);
}