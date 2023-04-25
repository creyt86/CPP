/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:04:46 by creyt             #+#    #+#             */
/*   Updated: 2023/04/25 10:07:53 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(15);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(321);
	sp.addNumber(52);
	sp.addNumber(42);
	sp.addNumber(1);
	sp.addNumber(0);
	sp.addNumber(10);
	sp.addNumber(33);
	sp.addNumber(21);
	sp.addNumber(5);
	sp.addNumber(15);
	sp.addNumber(25);

		std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
