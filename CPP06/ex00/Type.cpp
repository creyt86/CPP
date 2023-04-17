/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 08:48:52 by creyt             #+#    #+#             */
/*   Updated: 2023/04/17 15:56:12 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

bool	Convert::isChar(std::string arg)
{
	if (arg.length() == 1)
	{
		if (isPrintable(arg[0]))
			return (true);
	}
	return (false);
}

bool Convert::isInt(std::string arg)
{
	for (size_t i = 0; i < arg.length(); ++i)
	{
		if (std::isdigit(arg[i]))
		{
			continue;
		}
		return (false);
	}
	return (true);
}

int	Convert::isFloat(std::string arg)
{
	int dot = 0;
	int sign = 0;
	int f = 0;
	int p = 0;

	for (size_t i = 0; i < arg.length(); ++i)
	{
		if (arg[i] == '-' || arg[i] == '+')
		{
			sign++;
			continue;
		}
		if (arg[i] == 'f')
		{
			f++;
			continue;
		}
		if (arg[i] == '.')
		{
			dot++;
			continue;
		}
		if (std::isdigit(arg[i]))
		{
			if (dot == 1)
				p++;
			continue;
		}
		return (-1);
	}
	if (f == 1 && dot <= 1 && sign <= 1)
		return (p);
	return (-1);
}

int	Convert::isDouble(std::string arg)
{
	int dot = 0;
	int sign = 0;
	int d = 0;

	for (size_t i = 0; i < arg.length(); ++i)
	{
		if (arg[i] == '-' || arg[i] == '+')
		{
			sign++;
			continue;
		}
		if (arg[i] == '.')
		{
			dot++;
			continue;
		}
		if (std::isdigit(arg[i]))
		{
			if (dot == 1)
				d++;
			continue;
		}
		return (-1);
	}
	if (dot <= 1 && sign <= 1)
		return (d);
	return (-1);
}

std::string Convert::findType(std::string arg)
{
	std::string ret = "(NULL)";
	if (isChar(arg))
		ret = "char";
	if (isInt(arg))
		ret = "int";
	if (isFloat(arg) > 0)
		ret = "float";
	if (isDouble(arg) > 0)
		ret = "double";
	if (arg == "nan" || arg == "-inf" || arg == "inf" ||
		arg == "nanf" || arg == "-inff" || arg == "inff")
		ret = arg;
	return (ret);
}
