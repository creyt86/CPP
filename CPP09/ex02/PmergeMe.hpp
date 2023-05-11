/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:50:15 by creyt             #+#    #+#             */
/*   Updated: 2023/05/11 13:56:00 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <list>
# include <ctime>
# include <stdlib.h>

#define ERR "\e[31mError : \e[0m"
#define RES "\033[32mRESULT : \e[0m"
#define JOKER -1

class PmergeMe {
	private:
		unsigned long int	_countArgNumber;
		std::vector<int> _vect;
		std::vector<std::pair<int, int> > _pairs;
		std::vector<int> _sortVect;
		std::list<int> _list;
		std::list<int> _sortList;

	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe& cpy);
		PmergeMe& operator=(const PmergeMe& rhs);

		int		getArgNumber();
		void	setArgNumber(int argNum);
		//int		getArgNumber(const std::string& number) const;
		void	swapPairsVector();
		// void	jokerProcess();
		void	upFirstOfPairsVector();
		void	evenOddNumArgVect(int argc, char **argv); //impaires
		void	sortNumberAlgo();
		int		timeToProcessRange();
		void	printResultVector();

		void	evenOddNumArgList(int argc, char **argv);

		/* UTILS */
		int safeAtoi(const char* str);

		class PMException : public std::exception {
			public:
				PMException(const char* msg) : _msg(msg) {}
				const char* what() const throw() {
					return _msg;
				}

			private:
				const char* _msg;
		};
};


#endif
