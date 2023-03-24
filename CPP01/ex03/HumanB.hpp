/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:05:00 by creyt             #+#    #+#             */
/*   Updated: 2023/02/09 13:57:15 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanB
{
	public :
				HumanB(std::string name);
				~HumanB(void);
				void	attack(void);
				void	setWeapon(Weapon &weapon);
	private :
				std::string	_name;
				Weapon *_weapon;
};

#endif
