/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:10:40 by creyt             #+#    #+#             */
/*   Updated: 2023/05/09 15:48:33 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &cpy)
{
	*this = cpy;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &rhs)
{
	if (this != &rhs)
	{
		_list = rhs._list;
		_sortedList = rhs._sortedList;
		_vector = rhs._vector;
		_sortedVector = rhs._sortedVector;
	}
	return (*this);
}

PmergeMe::~PmergeMe(){}

int	PmergeMe::getNumberArgc(int _numberArgc)
{
	return (_numberArgc);
}

void	PmergeMe::setNumberArgc(int nbArgc)
{
	nbArgc = _numberArgc;
}

void	PmergeMe::pushAndPairInVector(int num, char **argv)
{
	for (int i = 1; i < num + 1; i++)

	{
		_vector.push_back(std::make_pair(atoi(argv[i]), atoi(argv[i + 1])));
	}
	for (std::vector< std::pair<int, int> >::iterator it = _vector.begin(); it != _vector.end(); it++)
		std::cout << (*it).first << " " << (*it).second << std::endl; // sert a imprimer les iterateurs de mon conteneur vector
}


