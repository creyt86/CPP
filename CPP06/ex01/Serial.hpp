/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serial.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:43:48 by creyt             #+#    #+#             */
/*   Updated: 2023/04/03 10:49:36 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIAL_HPP
# define SERIAL_HPP

# include <iomanip>
# include <iostream>

struct Data
{
	char	c;
	int		i;
	float	f;
};

uintptr_t	serialize(Data *ptr);
Data*		deserialize(uintptr_t raw);


#endif