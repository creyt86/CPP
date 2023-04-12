/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 08:31:57 by creyt             #+#    #+#             */
/*   Updated: 2023/04/12 09:07:21 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <list>

class	Span
{
	Span();
	Span(Span const &cpy);
	Span &operator=(Span const &rhs);
	~Span();

	void	addNumber(int nb);
};


#endif
