/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 09:15:03 by creyt             #+#    #+#             */
/*   Updated: 2023/04/04 09:54:33 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

Base* generate(void)
{
	std::srand(time(NULL)); // initialise le generateur de nombres aleatoires
	int	value = (std::rand() %3 + 1); // modulo 3 pour les 3 classes + 1 pour commencer a 1 et non a 0

	switch(value)
	{
		case 1:
				return new A;
				break;
		case 2:
				return new B;
				break;
		case 3:
				return new C;
				break;
		default:
				break;
	}
	return (0);
}

void	identify(Base* p)
{
	A*	a = dynamic_cast<A*>(p); // particularite de se faire a l'execution et non la compilation
	B*	b = dynamic_cast<B*>(p);
	C*	c = dynamic_cast<C*>(p);

	if (a != NULL)
		std::cout << "This type is A" << std::endl;
	else if (b != NULL)
		std::cout << "This type is B" << std::endl;
	else if (c != NULL)
		std::cout << "This type is C" << std::endl;
	else
		std::cout << "Oh it's a mistake !" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Conversion OK - The ref is A" << std::endl;
		return ;
	}
	catch(const std::bad_cast& bc){}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "Conversion OK - The ref is B" << std::endl;
		return ;
	}
	catch(const std::bad_cast& bc){}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "Conversion OK - The ref is C" << std::endl;
		return ;
	}
	catch(const std::bad_cast& bc){}
	std::cout << "Conversion is not OK" << std::endl;
}

int	main()
{
	Base*	p;

	p = generate();
	identify(p);
	identify(*p);
	delete p;
	return (0);
}
