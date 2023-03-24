/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:08:01 by creyt             #+#    #+#             */
/*   Updated: 2023/03/15 14:46:16 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
			Cat();
			Cat(Cat const &cpy);
			Cat &operator=(Cat const &rhs);
			~Cat();

			void 		makeSound() const;
			void		setIdea(std::string idea, int i) const;
			std::string getIdea(int i) const;


	private:
			Brain*	_brain;
};

#endif
