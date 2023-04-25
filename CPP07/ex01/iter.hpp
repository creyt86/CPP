/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:49:05 by creyt             #+#    #+#             */
/*   Updated: 2023/04/25 14:05:14 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>
# include <cmath>
# include <fstream>

template<typename T>
void	iter(T *array, int sizeArray, void (*ft_print)(T const &array))
{
	for(int i = 0; i < sizeArray; i++)
		ft_print(array[i]);
}

#endif
