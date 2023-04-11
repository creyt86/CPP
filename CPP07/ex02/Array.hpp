/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:34:15 by creyt             #+#    #+#             */
/*   Updated: 2023/04/11 10:03:14 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <iomanip>
#include <string>

template<typename T>
class Array {

private:
	T 				*_tab;
	unsigned int	_nbr;

public:
	Array() : _nbr(0)
	{
		_tab = new T[_nbr]; // on cree un tableau de T vide (n)
	}

	Array( unsigned int nbr ) : _nbr(nbr)
	{
		_tab = new T[_nbr];
	}

	Array( const Array &src) : _nbr(src._nbr)
	{
		_tab = NULL;
		*this = src;
	}

	~Array() {
		delete [] _tab;
	}

	Array &operator=( const Array &rhs ) {
		if (this != &rhs) {
			delete [] _tab;
			_nbr = rhs.size();
			_tab = new T[_nbr];
			for (unsigned int i = 0; i < rhs.size(); i++) {
				_tab[i] = rhs._tab[i];
			}
		}
		return *this;
	}

	T &operator[]( unsigned int i )
	{
		if ( i >= _nbr ) {
			throw std::out_of_range("Index out of range");
		}
		return ( _tab[i] );
	}

	unsigned int	size() const
	{
		return ( _nbr );
	}


};

#endif
