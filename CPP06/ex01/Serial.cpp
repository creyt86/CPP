/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serial.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:57:26 by creyt             #+#    #+#             */
/*   Updated: 2023/04/20 09:58:00 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() {}

Data::~Data() {}

Data::Data(const Data &cpy)
{
	*this = cpy;
}

Data &Data::operator=(const Data &rhs)
{
	if (this != &rhs)
	{
		i = rhs.i;
		c = rhs.c;
	}
	return *this;
}

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}
