/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:18:23 by creyt             #+#    #+#             */
/*   Updated: 2023/04/20 10:39:21 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Convert::Convert()
{
	std::cout << "Convert constructor called" << std::endl;
}

Convert::Convert(Convert const &cpy)
{
	*this = cpy;
	std::cout << "Convert Copy constructor called" << std::endl;
}

Convert &Convert::operator=(Convert const &rhs)
{
	if (this != &rhs)
	{
		_int = rhs._int;
		_char = rhs._char;
		_float = rhs._float;
		_double = rhs._double;
	}
	std::cout << "Convert assignment called" << std::endl;
	return (*this);
}

void	Convert::printConversion(std::string arg, std::string type)
{
	if (type == "char")
	{
		char c = arg[0];
		printInChar(static_cast<char>(c));
		printInInt(static_cast<int>(c));
		printInFloat(static_cast<float>(c), 0);
		printInDouble(static_cast<double>(c), 0);
	}
	else if (type == "int")
	{
		int d = std::atoi(arg.c_str());
		printInChar(static_cast<char>(d));
		printInInt(static_cast<int>(d));
		printInFloat(static_cast<float>(d), 0);
		printInDouble(static_cast<double>(d), 0);
	}
	else if (type == "float")
	{
		int p = isFloat(arg);
		float f = std::atof(arg.c_str());
		printInChar(static_cast<char>(f));
		printInInt(static_cast<int>(f));
		printInFloat(static_cast<float>(f), p);
		printInDouble(static_cast<double>(f), p);
	}
	else if (type == "double")
	{
		int p = isDouble(arg);
		double ld = std::atof(arg.c_str());
		printInChar(static_cast<char>(ld));
		printInInt(static_cast<int>(ld));
		printInFloat(static_cast<float>(ld), p);
		printInDouble(static_cast<double>(ld), p);
	}
	else if (type == "nan" || type == "-inf" || type == "inf" || type == "+inf" ||
			 type == "nanf" || type == "-inff" || type == "inff" || type == "+inff")
	{
		float f;
		if (type == "nan" || type == "nanf")
			f = NAN;
		if (type == "inf" || type == "+inf" || type == "inff" || type == "+inff")
			f = INFINITY;
		if (type == "-inf" || type == "-inff")
			f = -INFINITY;
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		printInFloat(static_cast<float>(f), 0);
		printInDouble(static_cast<double>(f), 0);
	}
	else
	{
		std::cout << "Bad argument" << std::endl;
	}
}


void	Convert::conv(std::string arg)
{
	std::string type;
	type = findType(arg);
	printConversion(arg, type);
}


/* La principale différence entre float et double est leur précision et leur taille de stockage.
Le type float : est stocké sur 4 octets (32 bits) et peut représenter des nombres avec une précision d'environ 6 à 7 chiffres significatifs,
Le type double : est stocké sur 8 octets (64 bits) et peut représenter des nombres avec une précision d'environ 15 à 16 chiffres significatifs.
inff, +inff et nanf sont des constantes littérales en C++ qui représentent respectivement l'infini négatif, l'infini positif et la valeur NaN (Not a Number) pour les nombres à virgule flottante de type float.
*/
