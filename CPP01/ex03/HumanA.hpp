/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:05:03 by creyt             #+#    #+#             */
/*   Updated: 2023/02/09 14:07:40 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanA
{
	public :
				HumanA(std::string name, Weapon &type);
				~HumanA(void);
				void	attack(void);
				void	setWeapon(Weapon &weapon);
	private :
				std::string	_name;
				Weapon &_weapon;
};

#endif
