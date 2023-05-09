/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:50:15 by creyt             #+#    #+#             */
/*   Updated: 2023/05/09 11:36:11 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
# include <list>

class PmergeMe
{
	private:
			std::vector<int>	_vector;
			std::list<int>	_list;

	public:
			PmergeMe();
			PmergeMe(PmergeMe const &cpy);
			PmergeMe &operator=(PmergeMe const &rhs);
			~PmergeMe();

			void	push_in_vector();
			void	swap_in_vector();

			class	PmException : public std::exception
			{
				public:
						PmException(const char* msg) : _msg(msg) {}
						const char* what() const throw()
						{
							return _msg;
						}

				private:
						const char* _msg;
			};
};



#endif
