/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 09:30:02 by creyt             #+#    #+#             */
/*   Updated: 2023/02/24 10:17:23 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
	//std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &c)
{
	*this = c;
	//std::cout << "Copy constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int value)
{
	this->_value = value << this->_nb_bits;
	//std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(const float value)
{
	this->_value = roundf(value * (1 << this->_nb_bits));
	//std::cout << "Float constructor called" << std::endl;
	return;
}

int		Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits( int const raw )
{
	this->_value = raw;
	return ;
}

Fixed & Fixed::operator=( Fixed const & rhs )
{
	//std::cout << "Copy Assignement called" << std::endl;
	if ( this != &rhs )
		this->_value = rhs.getRawBits();
	return *this;
}

int	Fixed::toInt(void) const
{

	return (this->_value >> this->_nb_bits);
}

float	Fixed::toFloat(void) const
{

	return ((float)this->_value / ( 1 << this->_nb_bits));
}

int	Fixed::operator>(const Fixed& value) const
{
	return this->_value > value._value;
}

int	Fixed::operator<(const Fixed& value) const
{
	return this->_value < value._value;
}

int	Fixed::operator>=(const Fixed& value)
{
	return this->_value >= value._value;
}
int	Fixed::operator<=(const Fixed& value)
{
	return this->_value <= value._value;
}

int	Fixed::operator==(const Fixed& value)
{
	return this->_value == value._value;
}

int	Fixed::operator!=(const Fixed& value)
{
	return this->_value != value._value;
}

Fixed	Fixed::operator+(const Fixed &value) const
{
	Fixed	result(this->toFloat() + value.toFloat());
	return (result);
}

Fixed	Fixed::operator-(const Fixed &value) const
{
	Fixed	result(this->toFloat() - value.toFloat());
	return (result);
}

Fixed	Fixed::operator*(const Fixed &value) const
{
	Fixed	result(this->toFloat() * value.toFloat());
	return (result);
}

Fixed	Fixed::operator/(const Fixed &value) const
{
	Fixed	result(this->toFloat() / value.toFloat());
	return (result);
}


Fixed&	Fixed::operator++()
{
	this->_value += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed copy(*this);
	++(*this);
	return copy;
}

Fixed& Fixed::operator--()
{
	this->_value -= 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed copy(*this);
	--(*this);
	return copy;
}


const Fixed & Fixed::min(const Fixed & a, const Fixed & b)
{
	return a < b ? a : b;
}

const Fixed & Fixed::max(const Fixed & a, const Fixed & b)
{
	return a > b ? a : b;
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	return a < b ? a : b;
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	return a > b ? a : b;
}


int const	Fixed::_nb_bits = 8;

std::ostream& operator <<(std::ostream& out, const Fixed& nb)
{
	out << nb.toFloat();
	return (out);
}
