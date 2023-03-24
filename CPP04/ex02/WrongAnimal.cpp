/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:35:50 by creyt             #+#    #+#             */
/*   Updated: 2023/03/14 15:27:25 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "Wrong Animal";
	std::cout << "Wrong Animal is trying to reach you" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &cpy)
{
	*this = cpy;
	std::cout << "Copy constructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &rhs)
{
	if (this != &rhs)
		type = rhs.type;
	std::cout << "Copy assignment called" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal returns in its world" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Meuh ?? Ouaf ?? Miaou ?? 🐮 🐶 🐱" << std::endl;
}
