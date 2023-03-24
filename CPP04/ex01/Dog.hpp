/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:08:01 by creyt             #+#    #+#             */
/*   Updated: 2023/03/16 11:33:43 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
			Dog();
			Dog(Dog const &cpy);
			Dog &operator=(Dog const &rhs);
			~Dog();

			void makeSound() const;
			void		setIdea(std::string idea, int i) const;
			std::string getIdea(int i) const;
			
	private:
			Brain*	_brain;
};

#endif
