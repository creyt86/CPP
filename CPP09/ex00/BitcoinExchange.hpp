/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:47:21 by creyt             #+#    #+#             */
/*   Updated: 2023/05/02 13:03:22 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <fstream> //ifstream::is_open
# include <string>

# define DB_HEADER "date,exchange_rate"
# define IN_HEADER "date | value"
# define DB_FILE "data.csv"

class BitcoinExchange
{
	private:
			std::map<int, int>				_maxDaysPerMonth;
			std::map<std::string, float>	_exchangeRates;
			float	_value;

	public:
			BitcoinExchange();
			~BitcoinExchange();
			BitcoinExchange(const BitcoinExchange &cpy);
			BitcoinExchange &operator=(const BitcoinExchange &rhs);

			bool	checkDBValue(std::string line);
			bool	checkInputValue(std::string line);
			bool	getDataBaseValue(std::string DBFile);
			bool	getInputValue(std::string inputFile);
			bool	checkTitle(std::string line, std::string file);

			class BtcException : public std::exception {
			public:
				BtcException(const char* msg) : _msg(msg) {}
				const char* what() const throw()
				{
					return _msg;
				}

			private:
				const char* _msg;
		};
};


#endif
