/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:53:36 by creyt             #+#    #+#             */
/*   Updated: 2023/05/04 11:19:17 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	try
	{
		RPN rpn;

		if (argc != 2)
			throw RPN::RpnException("Bad arguments");
		std::string	str(argv[1]);

		for(unsigned long i = 0; i < str.size(); i++)
		{
			if (isspace(str[i]))
			{
				continue;
			}

			else
				rpn.operation(str[i]);
		}
		if (rpn.getCountOperators() != (rpn.getCountNumbers() - 1))
			throw RPN::RpnException("Error, impossible operation");
		rpn.printResult();

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

