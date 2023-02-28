/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 09:25:46 by creyt             #+#    #+#             */
/*   Updated: 2023/02/24 11:21:12 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

class Fixed
{
	public:

		Fixed();
		Fixed(Fixed const& c);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();

		Fixed & operator=(Fixed const& r);
		int		getRawBits() const;
		void	setRawBits( int const raw );
		int		toInt(void) const;
		float	toFloat(void) const;

		int operator>(const Fixed& other) const;
		int operator<(const Fixed& other) const ;
		int operator>=(const Fixed& other);
		int operator<=(const Fixed& other);
		int operator==(const Fixed& other);
		int operator!=(const Fixed& other);


		Fixed& operator++();
		Fixed operator++(int);

		Fixed& operator--();
		Fixed operator--(int);

		Fixed operator+(const Fixed& value) const;
		Fixed operator-(const Fixed& value) const;
		Fixed operator*(const Fixed& value) const;
		Fixed operator/(const Fixed& value) const;

		static Fixed & min(Fixed & a, Fixed & b );
		static Fixed & max(Fixed & a, Fixed & b );
		static const Fixed & min(const Fixed & a, const Fixed & b );
		static const Fixed & max(const Fixed & a, const Fixed & b );

	private:

		int	_value;
		static int const _nb_bits;
};


std::ostream& operator<<( std::ostream & o, Fixed const & i );

#endif
