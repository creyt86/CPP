/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:49:54 by creyt             #+#    #+#             */
/*   Updated: 2023/04/17 16:12:49 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main()
{
	Data	d = {'c', 1, 4.2};

	uintptr_t serial = serialize(&d);
	Data *deserial = deserialize(serial);

	std::cout << "Data's base : " << " c = " << d.c << " i = " << d.i << " f = " << d.f << std::endl;

	std::cout << "Deserialized Data " << " c = " << deserial->c << " i = " << deserial->i << " f = " << deserial->f << std::endl;

	std::cout << "Original address i\t: " << &d.i << std::endl;
    std::cout << "Deserialized address i\t: " << &deserial->i << std::endl;
	return 0;
}
