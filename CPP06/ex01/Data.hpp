/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:43:48 by creyt             #+#    #+#             */
/*   Updated: 2023/04/17 16:12:14 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iomanip>
# include <iostream>

class Data
{
	public:
			Data();
			Data(const Data &src);
			Data &operator=(const Data &rhs);
			~Data();

			char	c;
			int		i;
			float	f;
};

uintptr_t	serialize(Data *ptr);
Data*		deserialize(uintptr_t raw);


#endif
