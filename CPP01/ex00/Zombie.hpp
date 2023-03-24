/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:23:28 by creyt             #+#    #+#             */
/*   Updated: 2023/01/31 15:15:10 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {

	public :
			Zombie( void );
			~Zombie( void );

			void	setName(std::string name);
			void	announce( void);

	private :
		std::string	_name;
};

			Zombie*	newZombie(std::string name);
			void randomChump( std::string name );
#endif
