/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:10:39 by creyt             #+#    #+#             */
/*   Updated: 2023/04/04 14:29:29 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void	*ft_print(T const &array)
{
	std::cout << array << std::endl;
}

int	main()
{
	std::cout << "INT TEST" << std::endl;
	int	intArray[5] = {1, 4, 8, 10, 15};
	iter(intArray, 5, ft_print);

	std::cout << "FLOAT TEST" << std::endl;
	float	floatArray[2] = {4.2, 3.0};
	iter(floatArray, 2, ft_print);

	std::cout << "CHAR TEST" << std::endl;
	char	charArray[4] = {'c', 'o', 'o', 'l'};
	iter(charArray, 4, ft_print);

	std::cout << "STRING TEST" << std::endl;
	std::string	stringArray[3] = {"Hello", "my", "friends"};
	iter(stringArray, 3, ft_print);

	return (0);
}
