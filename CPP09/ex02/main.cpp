/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:17:54 by creyt             #+#    #+#             */
/*   Updated: 2023/05/09 15:50:20 by creyt            ###   ########.fr       */
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
            throw PmergeMe::PmException("not a postive number");
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
        throw PmergeMe::PmException("Not a number");
    }
    // Retourner le résultat avec le signe approprié
    return result * sign;
}

int	main(int argc, char **argv)
{
	PmergeMe pme;
	std::vector<int> victor;
	int	num = 0;

	try
	{
		if (argc < 2)
			throw PmergeMe::PmException("Bad arguments");

		for (int i = 1; i < argc; i++)
		{
		//	num = pme.safeAtoi(argv[i]);
		}
		if (num != 0)
		{
			std::cout << "Before : ";
			for (int i = 1; i < argc; i++)
				std::cout << argv[i] << " ";
		}
            pme.pushAndPairInVector(argc, argv);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
