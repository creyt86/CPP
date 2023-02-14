/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test ptr_ref1.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:03:02 by creyt             #+#    #+#             */
/*   Updated: 2023/02/07 13:08:49 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// une reference est pointeur qui est constant et toujours deference

#include <iostream>

int	main(void)
{
	int	number = 42;

	int* nbPtr = &number;
	int& nbRef = number;

	std::cout << number << " " << *nbPtr << " " << nbRef << std::endl;

	*nbPtr = 21;
	std::cout << number << std::endl;
	nbRef = 84;
	std::cout << number << std::endl;

	return (0);
}
