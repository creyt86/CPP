/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:17:54 by creyt             #+#    #+#             */
/*   Updated: 2023/05/11 13:30:17 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int PmergeMe::safeAtoi(const char* str)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    // Ignorer les espaces blancs au début de la chaîne
    while (isspace(str[i])) {
        i++;
    }
    // Gérer les signes + ou -
    if (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-') {
            throw PmergeMe::PMException("not a postive number");
        }
        i++;
    }
    // Vérifier que tous les caractères restants sont des chiffres
    while (isdigit(str[i])) {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    // Si on trouve un caractère non-numérique avant la fin de la chaîne,
    // on retourne 0 pour signaler une erreur.
    if (str[i] != '\0') {
        throw PmergeMe::PMException("Not a number");
    }
    // Retourner le résultat avec le signe approprié
    return result * sign;
}


int main(int argc, char **argv)
{
	PmergeMe pmm;

	if (argc < 2)
	{
		std::cerr << ERR <<  "Some numbers are expected after : " << argv[0] << std::endl;
		return 1;
	}

	std::vector<int> vect;
	// std::vector<std::pair<int, int> > pairs;

		try
		{
			for(int i = 1; i < argc; i++)
			{
				int number = pmm.safeAtoi(argv[i]); //int number = std::stoi(argv[i]); stoi C++11
				vect.push_back(number);
				pmm.setArgNumber(i);
			}
			pmm.evenOddNumArgVect(argc, argv);
		}
		catch (const std::exception& e)
		{
			std::cerr << ERR"Argument \e[31m"  << "\e[0mis not a valid number." << std::endl;//<< argv[i]
			return 1;
		}

	std::cout << "\n" << std::endl;
	std::cout << "nombre d'argument/nombre : " << pmm.getArgNumber() << std::endl;
	std::cout << std::endl;



	std::cout << "Before: " ;
	for (size_t i = 0; i < vect.size(); i++)
		std::cout << vect[i] << " ";
	std::cout << std::endl;

	std::cout << "After: " ;
	// pmm.swapPairsVector();
	pmm.sortNumberAlgo();
	// pmm.printResultVector();

	// std::cout << "After: " << std::endl;
	// std::cout << "Time to process a range of " << pmm.getArgNumber() << "elements with " container << " : " << 0.00031 << " us" << std::endl;
	// std::cout << "Time to process a range of " << pmm.getArgNumber() << "elements with " container << " : " << 0.00031 << " us" << std::endl;
}
