/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:47:18 by creyt             #+#    #+#             */
/*   Updated: 2023/02/09 15:00:19 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class	Weapon
{
	public :
				Weapon(std::string type);
				~Weapon(void);
				std::string	const &getType() const;
				void	setType(std::string);
	private :
				std::string	_type;
};

#endif
