/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:37:30 by creyt             #+#    #+#             */
/*   Updated: 2023/05/02 13:18:49 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	try
	{
		if (argc != 2)
			throw BtcException("Error : Bad arguments");

		BitcoinExchange	btc;
		std::string	file = argv[1];
		std::string	data = DB_FILE;

		if (!btc.getDataBaseValue(data))
			throw BtcException("Error : opening file impossible");
		if (!btc.getInputValue(file))
			throw BtcException("Error : opening file impossible");
	}

	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
