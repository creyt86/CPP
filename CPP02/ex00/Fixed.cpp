/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:46:43 by creyt             #+#    #+#             */
/*   Updated: 2023/03/06 09:28:18 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &cpy)
{
	*this = cpy;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &	Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
	{
		this->_value = rhs.getRawBits();
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout	<< "getRawBits member function called" << std::endl;
	return this->_value;
}

void		Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

/*
*this ca represente l'instance/l'objet actuelle et le = cpy c'est pour donner la valeur de cpy a this

dans la classe zombie il y a un int qui vaut 5;

Zombie	a;

Zombie	b;

b operator=(a) / meme chose que b = a
*/

