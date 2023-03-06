/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 08:46:19 by creyt             #+#    #+#             */
/*   Updated: 2023/03/06 09:31:18 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cpy)
{
	*this = cpy;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	this->_value = value << this->_nb_bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float value)
{
	this->_value = roundf(value * (1 << this->_nb_bits));
	std::cout << "Float constructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawbits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
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

int	Fixed::toInt(void) const
{
	return(this->_value >> this->_nb_bits);
}

float	Fixed::toFloat(void) const
{
	return((float) this->_value / (1 << this->_nb_bits));
}

std::ostream& operator <<(std::ostream& out, const Fixed& nb)
{
	out << nb.toFloat();
	return (out);
}

