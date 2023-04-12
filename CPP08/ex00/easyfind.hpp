/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:18:19 by creyt             #+#    #+#             */
/*   Updated: 2023/04/12 08:24:56 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <list>

template<typename T>
typename T::iterator	easyfind(T &container, int nb)
{
	typename T::iterator iter;

	iter = std::find(container.begin(), container.end(), nb);
	return (iter);
}



#endif
