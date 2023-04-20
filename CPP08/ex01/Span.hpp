/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 08:31:57 by creyt             #+#    #+#             */
/*   Updated: 2023/04/20 13:08:16 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <list>

class	Span
{
	public :
			Span();
			Span(unsigned int N);
			Span(Span const &cpy);
			Span &operator=(Span const &rhs);
			~Span();

			void	addNumber(int value);
			void	shortestSpan();
			void	longestSpan();
	private :
			unsigned int	_n;
};


#endif


// shortest doit trouver les deux chiffres qui ont le plus petit ecart
// entre eux. Dans l'exemple donne, on voit que 9 et 11, la difference donne 2.
// longest trouve le plus grand ecart entre deux chiffres du tableau. La c'est 17 et 3 qui donnent 14
