/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:17:54 by creyt             #+#    #+#             */
/*   Updated: 2023/05/09 11:53:59 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{
	PmergeMe pme;
	std::vector<int> victor;

	try
	{
		if (argc < 2)
			throw PmergeMe::PmException("Bad arguments");

		for (int i = 1; i < argc; i++)
		{
			int arg = atol(argv[i]);
			victor.push_back(arg);
			std::cout << arg << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
