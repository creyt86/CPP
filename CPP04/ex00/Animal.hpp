/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:03:59 by creyt             #+#    #+#             */
/*   Updated: 2023/03/14 11:20:48 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
			Animal();
			Animal(Animal const &cpy);
			Animal &operator=(Animal const &rhs);
			virtual ~Animal();

			std::string	getType() const;
			virtual void	makeSound() const;

	protected:
			std::string	type;
};

#endif
