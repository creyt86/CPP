/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:24:22 by creyt             #+#    #+#             */
/*   Updated: 2023/05/03 11:15:19 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() : _countNumber(0), _countOperator(0)
{}

RPN::RPN(RPN const &cpy)
{
	*this = cpy;
}

RPN &RPN::operator=(RPN const &rhs)
{
	if (this != &rhs)
	{
		_stack = rhs._stack;
		_countNumber = rhs._countNumber;
		_countOperator = rhs._countOperator;
	}
	return (*this);
}

RPN::~RPN(){}

void	RPN::readString(char c)
{
	if (isdigit(c))
	{

		_countNumber++; // pour voir si ce qu'on donne comme arguments soit un polonais ou pas. donc comparer les countNumbers et les countOperator
	}
	else if (c == '+' || c == '-' || c == '\'' || c == '*')
	{
		_countOperator++;
	}
	else
		throw RpnException("Numbers must be between 0 and 9 or be an operator");

}



// gestion d'erreurs :	seulement 2 arguments,
//						controler que les deux premiers chars soient des chiffres - isspace
//						les chiffres doivent etre plus petits que 10 - isdigit
//						gerer les 4 caracteres -  */+-
//						division par 0 a gerer
// argv[1] converti en string et iterer dessus -> dans le main ?
