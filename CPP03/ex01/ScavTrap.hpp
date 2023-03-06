/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:00:48 by creyt             #+#    #+#             */
/*   Updated: 2023/03/06 13:27:09 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap :public ClapTrap
{
	public:
			ScavTrap();
			ScavTrap(std::string theName);
			ScavTrap(ScavTrap const& cpy);
			ScavTrap &operator=(ScavTrap const &rhs);
			~ScavTrap();

			void attack(const std::string& target); //remettre car changements
			void guardGate();
};




#endif
