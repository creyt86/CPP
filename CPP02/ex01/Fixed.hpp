/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 08:44:57 by creyt             #+#    #+#             */
/*   Updated: 2023/02/24 09:11:42 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>

class Fixed
{
	public:
		Fixed(void);
		~Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &b);
		Fixed & operator=( Fixed const &rhs );
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int	_value;
		static const int _nb_bits = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs );


#endif
