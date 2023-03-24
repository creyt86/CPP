/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:52:02 by creyt             #+#    #+#             */
/*   Updated: 2023/02/14 14:10:50 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

# define NBLVLS 4

class	Harl
{
	public :
				Harl(void);
				~Harl(void);
				void	complain(std::string level);

	private :
				void	debug(void);
				void	info(void);
				void	warning(void);
				void	error(void);
				void	(Harl::*_function[NBLVLS])(void);
				std::string	_level[NBLVLS];
};

#endif
