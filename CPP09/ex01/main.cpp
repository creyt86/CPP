/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:53:36 by creyt             #+#    #+#             */
/*   Updated: 2023/05/03 11:13:40 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
//	RPN rpn;
	std::stack<int> stack;
	int	a;
	int	b;
	int result;

	if (argc != 2)
		std::cout << "va chier" << std::endl;
		//throw RPN::RpnException("Bad arguments");
	std::string	str(argv[1]);

	for(unsigned long i = 0; i < str.size(); i++)
	{
		if (isdigit(str[i]))
		{
			stack.push(str[i] - '0'); // mettre un '0' sinon ca ne marche pas avec les valeurs ascii
			std::cout << "chiffre : " << str[i] << std::endl;
		}
		else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
		{
			a = stack.top();
			stack.pop();
			b = stack.top();
			stack.pop();
			if (str[i] == '*')
			{
				result = (a * b);
				std::cout << "result 1: " << result << std::endl;
			}
			else if (str[i] == '-')
			{
				result = (b - a);
			}
			//creer une fonction pour operation si * je fais i * i
			//result = operation(a, b);
			stack.push(result);
			std::cout << "result: " << result << std::endl;
		}
		else if (isspace(str[i]))
		{
			std::cout << "espace : " << str[i] << std::endl;
			continue;
			//tu continues d'avancer dans la chaine
		}
		else
			std::cout << "autre" << str[i] << std::endl;
			//lancer une erreur

	}
	std::cout << "top : " << stack.top() << std::endl;
}


