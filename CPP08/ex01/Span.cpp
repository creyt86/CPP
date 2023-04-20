/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:05:37 by creyt             #+#    #+#             */
/*   Updated: 2023/04/20 13:18:35 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _n(N)
{}

Span::Span(Span const &cpy)
{
	*this = cpy;
	std::cout << "Copy constructor called" << std::endl;
}

Span &Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		_n = rhs._n;
	}
	std::cout << "Copy constructor called" << std::endl;
	return (*this);
}


void	Span::addNumber(int value)
{

}
