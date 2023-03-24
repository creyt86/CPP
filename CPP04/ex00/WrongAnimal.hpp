/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:33:38 by creyt             #+#    #+#             */
/*   Updated: 2023/03/14 15:12:07 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	public:
			WrongAnimal();
			WrongAnimal(WrongAnimal const &cpy);
			WrongAnimal &operator=(WrongAnimal const &rhs);
			~WrongAnimal();

			std::string	getType() const;
			void	makeSound() const;

	protected:
			std::string	type;
};

#endif
