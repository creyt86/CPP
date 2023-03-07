/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:04:52 by creyt             #+#    #+#             */
/*   Updated: 2023/03/06 13:28:52 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
	public:
			ClapTrap();
			ClapTrap(std::string theName);
			ClapTrap(ClapTrap const& cpy);
			ClapTrap &operator=(ClapTrap const &rhs);
			~ClapTrap();

			void attack(std::string const &target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);

	protected:
			std::string	_name;
			int			_hitPoints;
			int			_nrjPoints;
			int			_attackDamage;

};

#endif
