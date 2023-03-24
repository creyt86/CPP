/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 09:24:46 by creyt             #+#    #+#             */
/*   Updated: 2023/03/14 15:26:11 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << this->type << " arrives quietly " << std::endl;
}

Cat::Cat(Cat const &cpy)
{
	*this = cpy;
	std::cout << "Copy constructor called" << std::endl;
}

Cat & Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	std::cout << "Copy assignment called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat saw a mouse and left !" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miaow miaow 🐱 " << std::endl;
}
