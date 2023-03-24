/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:45:03 by creyt             #+#    #+#             */
/*   Updated: 2023/03/14 11:45:48 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
			WrongCat();
			WrongCat(WrongCat const &cpy);
			WrongCat &operator=(WrongCat const &rhs);
			~WrongCat();

			void makeSound() const;
};

#endif
