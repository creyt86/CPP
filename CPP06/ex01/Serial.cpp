/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serial.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:57:26 by creyt             #+#    #+#             */
/*   Updated: 2023/04/03 10:48:32 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serial.hpp"

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}
