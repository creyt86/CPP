/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:49:37 by creyt             #+#    #+#             */
/*   Updated: 2023/03/14 13:10:52 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class	FragTrap: public ClapTrap
{
	public :
				FragTrap();
				FragTrap(std::string theName);
				FragTrap(FragTrap const& cpy);
				FragTrap& operator=(FragTrap const &rhs);
				~FragTrap();

				void highFivesGuys(void);
				void attack(const std::string& target); //remettre car changements

};

#endif
