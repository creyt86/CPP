/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 10:19:37 by creyt             #+#    #+#             */
/*   Updated: 2023/03/07 12:57:08 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class	ClapTrap{

	public:
			ClapTrap();
			ClapTrap(std::string theName);
			ClapTrap(ClapTrap const& cpy);
			ClapTrap& operator=(ClapTrap const& rhs);
			~ClapTrap(void);

			void	attack(const std::string& target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);

	private:
			std::string	_name;
			int			_hitPoints;
			int			_nrjPoints;
			int			_attackDamage;
};

#endif
