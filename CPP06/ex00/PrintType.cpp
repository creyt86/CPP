/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 08:58:18 by creyt             #+#    #+#             */
/*   Updated: 2023/04/03 09:14:21 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

bool	isPrintable(char c)
{
	if (126 >= c && c >= 32)
		return (true);
	return (false);
}

void	printInChar(char c)
{
	std::cout << "char: ";
	if (!isPrintable(c))
		std::cout << "Non displayable";
	else
		std::cout << "'" << c << "'";
	std::cout << std::endl;
}

void	printInInt(int i)
{
	std::cout << "int: ";
	std::cout << i;
	std::cout << std::endl;
}

void	printInFloat(float f, int i)
{
	if (i == 0)
		i = 1;
	std::cout << "float: ";
	std::cout << std::fixed << std::setprecision(i) << f;
	std::cout << "f" << std::endl;
}

void printInDouble(double d, int i)
{
	if (i == 0)
		i = 1;
	std::cout << "double: ";
	std::cout << std::fixed << std::setprecision(i) << d;
	std::cout << std::endl;
}
