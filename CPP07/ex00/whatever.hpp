/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:03:35 by creyt             #+#    #+#             */
/*   Updated: 2023/04/25 14:02:54 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <iomanip>

template<typename T>

void	swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
const T &min(const T &a, const T &b)
{
	return ((a <= b) ? a : b); // le min entre a et b si oui on renvoie a sinon on renvoie b.
}

template<typename T>
const T &max(const T &a, const T &b)
{
	return ((a >= b) ? a : b);
}

#endif
