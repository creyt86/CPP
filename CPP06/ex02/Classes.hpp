/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 08:49:43 by creyt             #+#    #+#             */
/*   Updated: 2023/04/04 09:51:17 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_HPP
# define CLASSES_HPP

# include <iostream>
# include <cstdlib>

class Base
{
	public:
			Base();
			virtual ~Base();

			Base	*generate(void);
			void	identify(Base* p);
			void	identify(Base& p);
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

#endif
