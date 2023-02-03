/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:55:00 by creyt             #+#    #+#             */
/*   Updated: 2023/02/03 13:11:55 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie{
	public:
			Zombie(void);
			~Zombie(void);
			void	setName(std::string name);
			void	announce(void);
	private:
			std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
