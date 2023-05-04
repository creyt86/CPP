/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:24:22 by creyt             #+#    #+#             */
/*   Updated: 2023/05/04 11:55:58 by creyt            ###   ########.fr       */
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
		_number = rhs._number;
		_countNumber = rhs._countNumber;
		_countOperator = rhs._countOperator;
	}
	return (*this);
}

RPN::~RPN(){}

int		RPN::getCountNumbers() const
{
	return (_countNumber);
}

int		RPN::getCountOperators() const
{
	return (_countOperator);
}

void	RPN::operation(char c)
{
	if (isdigit(c))
	{
		_stack.push(c - '0');
		_countNumber++; // pour voir si ce qu'on donne comme arguments soit un polonais ou pas. donc comparer les countNumbers et les countOperator
	}
	else if (c == '+' || c == '-' || c == '/' || c == '*')
	{
		if (_countNumber < 2)
			throw RpnException("Error, it is not like a polish problem");
		_countOperator++;
		_number = _stack.top();
		if (_stack.size() < 2)
			throw RpnException("Error, impossible operation");
		_stack.pop();
		if (c == '+')
			_number = _stack.top() + _number;
		if (c == '-')
			_number = _stack.top() - _number;
		if (c == '*')
			_number = _stack.top() * _number;
		if (c == '/')
		{
			if (_number == 0)
				throw RpnException("A division with 0 doesn't work");
			_number = _stack.top() / _number;
		}
		_stack.pop();
		_stack.push(_number);
	}
	else
		throw RpnException("Please only numbers between 0 and 9 or operators +-/*");
}

void RPN::printResult()
{
	if (_stack.size() != 1)
		throw RpnException("Error, impossible operation");
	if (_countNumber == _countOperator + 1)
		std::cout << _number << std::endl;
}



// gestion d'erreurs :	seulement 2 arguments,
//						controler que les deux premiers chars soient des chiffres - isspace
//						les chiffres doivent etre plus petits que 10 - isdigit
//						gerer les 4 caracteres -  */+-
//						division par 0 a gerer
// 						il y a un chiffre de plus que d'operateur
// argv[1] converti en string et iterer dessus -> dans le main ?
