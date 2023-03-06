/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:04:59 by creyt             #+#    #+#             */
/*   Updated: 2023/03/06 09:26:34 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class	Fixed
{
	public :
				Fixed(void); // constructeur par défaut
				Fixed(const Fixed &b); // Constructeur de recopie
				Fixed &operator=(const Fixed &rhs); // Operator d'affectation
				~Fixed(void); // destructeur
				int getRawBits(void) const;
				void setRawBits(int const raw);

	private :
				int					_value;
				static const int	_nbBits = 8;

};

#endif
