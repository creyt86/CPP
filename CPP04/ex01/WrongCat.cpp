/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:46:12 by creyt             #+#    #+#             */
/*   Updated: 2023/03/14 15:26:50 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "Wrong Cat";
	std::cout << "WrongCat is trying to reach you" << std::endl;
}

WrongCat::WrongCat(WrongCat const &cpy)
{
	*this = cpy;
	std::cout << "Copy constructor called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const &rhs)
{
	if (this != &rhs)
		type = rhs.type;
	std::cout << "Copy assignment called" << std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong Cat returns in its world" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Wiaw wiaw 👽" << std::endl;
}
