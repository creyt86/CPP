/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 08:31:57 by creyt             #+#    #+#             */
/*   Updated: 2023/04/25 10:03:24 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
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
			template <typename InputIterator>
			void addNumber(InputIterator begin, InputIterator end);
			int		shortestSpan();
			int		longestSpan();
			class SpanException : public std::exception
			{
				public:
					SpanException(const char* msg) : _msg(msg) {}
					const char* what() const throw()
					{
						return _msg;
					}

				private:
					const char* _msg; // sert a renvoyer un msg d'erreur si l'exception de passe pas
			};
	private :
			unsigned int	_n;
			std::vector<int> _nums; // container de vector

};


#endif


// shortest doit trouver les deux chiffres qui ont le plus petit ecart
// entre eux. Dans l'exemple donne, on voit que 9 et 11, la difference donne 2.
// longest trouve le plus grand ecart entre deux chiffres du tableau. La c'est 17 et 3 qui donnent 14
