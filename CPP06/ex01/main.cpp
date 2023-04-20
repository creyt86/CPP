/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:49:54 by creyt             #+#    #+#             */
/*   Updated: 2023/04/20 10:01:44 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main()
{
	Data	original;

	original.c = 'c';
	original.i = 1;
	original.f = 4.2;

	uintptr_t serial = serialize(&original);
	Data *deserial = deserialize(serial);

	std::cout << "Data's base : " << " c = " << original.c << " i = " << original.i << " f = " << original.f << std::endl;

	std::cout << "Deserialized Data " << " c = " << deserial->c << " i = " << deserial->i << " f = " << deserial->f << std::endl;

	std::cout << "Original address i\t: " << &original.i << std::endl;
    std::cout << "Deserialized address i\t: " << &deserial->i << std::endl;
	return 0;
}
