/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:18:22 by creyt             #+#    #+#             */
/*   Updated: 2023/05/11 15:19:09 by creyt            ###   ########.fr       */
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
