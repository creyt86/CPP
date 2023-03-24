/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:35:18 by creyt             #+#    #+#             */
/*   Updated: 2023/03/14 14:39:43 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

# define NB_IDEAS 100

class Brain
{
	public :
			Brain();
			Brain(Brain const &cpy);
			Brain &operator=(Brain const &rhs);
			~Brain();

			std::string ideas[NB_IDEAS];
};

#endif
