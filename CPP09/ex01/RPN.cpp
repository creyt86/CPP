/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:24:22 by creyt             #+#    #+#             */
/*   Updated: 2023/05/02 13:25:57 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

class RPN
{
	private:
		/* data */
	public:
		RPN();
		RPN(RPN const &cpy);
		RPN &operator=(RPN const &rhs);
		~RPN();
};

#endif
