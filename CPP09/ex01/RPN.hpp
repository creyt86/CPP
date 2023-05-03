/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:40:23 by creyt             #+#    #+#             */
/*   Updated: 2023/05/03 10:53:55 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <string>

class RPN
{
	private:
				std::stack<int> _stack;
				int	_number;
				int	_operator;
				int	_countNumber;
				int	_countOperator;

	public:
			RPN();
			RPN(RPN const &cpy);
			RPN &operator=(RPN const &rhs);
			~RPN();

			void	readString(char c);

	class RpnException : public std::exception
	{
			public:
				RpnException(const char* msg) : _msg(msg) {}
				const char* what() const throw()
				{
					return _msg;
				}

			private:
				const char* _msg;
	};
};

#endif
