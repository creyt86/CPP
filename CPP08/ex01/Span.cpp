/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:05:37 by creyt             #+#    #+#             */
/*   Updated: 2023/04/17 11:09:52 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	std::cout << "Constructor called" << std::endl;
}

Span::Span(Span const &cpy)
{
	*this = cpy;
	std::cout << "Copy constructor called" << std::endl;
}

Span &Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{

	}
	std::cout << "Copy constructor called" << std::endl;
}


void	addNumber(int nb)
{
	
}
