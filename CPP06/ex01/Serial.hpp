/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serial.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:43:48 by creyt             #+#    #+#             */
/*   Updated: 2023/04/03 09:56:39 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIAL_HPP
# define SERIAL_HPP

# include <iomanip>
# include <iostream>

typedef struct Data
{
	void	*ptr;
};

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);


#endif
