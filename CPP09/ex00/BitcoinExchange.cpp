/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:44:58 by creyt             #+#    #+#             */
/*   Updated: 2023/05/02 14:33:40 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	_maxDaysPerMonth[1] = 31;
	_maxDaysPerMonth[2] = 29;
	_maxDaysPerMonth[3] = 31;
	_maxDaysPerMonth[4] = 30;
	_maxDaysPerMonth[5] = 31;
	_maxDaysPerMonth[6] = 30;
	_maxDaysPerMonth[7] = 31;
	_maxDaysPerMonth[8] = 31;
	_maxDaysPerMonth[9] = 30;
	_maxDaysPerMonth[10] = 31;
	_maxDaysPerMonth[11] = 30;
	_maxDaysPerMonth[12] = 31;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &cpy)
{
	*this = cpy;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const& rhs)
{
	if (this != &rhs)
	{
		_value = rhs._value;
		_exchangeRates = rhs._exchangeRates;
	}
	return(*this);
}

BitcoinExchange::~BitcoinExchange()
{

}

bool	BitcoinExchange::getDataBaseValue(std::string DBFile)
{
	std::ifstream	file(DBFile);
	std::string		line;
	bool			first = true;
	bool			titleOK = false;
	bool			dateOK = false;
	std::string		dateDB;

	if (file.is_open())
	{
		while(file.good())
		{
			line.clear();
			std::getline(file, line);
			if (file.eof())
			{
				file.close();
				return (true);
			}
			if (first)
			{
				titleOK = checkTitle(line, DBFile);
				if (!titleOK)
					throw BtcException("Format invalid");
				first = false;
			}
			else
				dateOK = checkDBValue(line);
			if (dateOK && titleOK)
			{
				dateDB = line.substr(0, 10);
				_exchangeRates[dateDB] = _value;
			}
		}
	}
	return (false);
}

bool	BitcoinExchange::getInputValue(std::string inputFile)
{
	std::ifstream	file(inputFile);
	std::string		line;
	bool			dateOK = false;
	bool			titleOK = false;
	bool			first = true;
	std::string		dateInput;

	if (file.is_open())
	{
		while(file.good())
		{
			line.clear();
			std::getline(file, line);
			if (file.eof())
			{
				file.close();
				return (true);
			}
			if (first)
			{
				titleOK = checkTitle(line, inputFile);
				if (!titleOK)
					throw BtcException("File Format invalid");
				first = false;
			}
			else
			{
				dateOK = checkInputValue(line);
			}
			if (dateOK && titleOK)
			{
				dateInput = line.substr(0, 10);
				std::map<std::string, float>::iterator	it = _exchangeRates.lower_bound(dateInput);

				if ((*it).first > dateInput || (it) == _exchangeRates.end())
				{
					if ((it) != _exchangeRates.begin())
					{
						it--;
						std::cout	<< dateInput << " ==> "
									<< std::setw(10) << std::left << _value << " = "
									<< std::setw(15) << std::right << ((*it).second * _value)
									<< std::setw(15) << " (based on " << (*it).first << ")"
									<< std::endl;
					}
					else
						std::cout << "Error : date too early" << std::endl;
				}
				else
					std::cout	<< dateInput << " ==> "
								<< std::setw(10) << std::left << _value << " = "
								<< std::setw(15) << std::right << ((*it).second * _value)
								<< std::endl;
			}
		}
	}
	return (false);
}

bool	BitcoinExchange::checkDBValue(std::string line)
{
	size_t	separator = line.find(",");

	if (separator == std::string::npos || line.size() < 12)
	{
		std::cout << "Error in the data base  ==> " << line << std::endl;
		return (false);
	}

	int	year = atoi(line.substr(0, 4).c_str());
	int	month = atoi(line.substr(5, 2).c_str());
	int	day = atoi(line.substr(8, 2).c_str());

	_value = atof(line.substr(11).c_str());

	if (line[4] == '-' && line[7] == '-')
	{
		if (year < 1000 || year > 3000)
			return (false);

		for (std::map<int, int>::iterator it=_maxDaysPerMonth.begin(); it !=_maxDaysPerMonth.end(); it++)
		{
			if (month == (*it).first)
			{
				if (day <= (*it).second)
					return (true);
			}
		}
		std::cout <<  "Error whith the date in the data base => " << year << "-" << month << "-" << day << "]" << std::endl;
	}
	return (false);
}

bool	BitcoinExchange::checkInputValue(std::string line)
{
	size_t	separator = line.find("|");

	if (separator == std::string::npos || line.size() < 14)
	{
		std::cout << "Error in the input file ==> " << line << std::endl;
		return (false);
	}

	int year = atoi(line.substr(0, 4).c_str());
	int month = atoi(line.substr(5,2).c_str());
	int	day = atoi(line.substr(8, 2).c_str());

	if(!isdigit(line[13]))
	{
		if (line[13] == '-')
			std::cout << "Error int the input file : not a positive value" << std::endl;
		else
			std::cout << "Error in the input file : value not valid" << std::endl;
		return (false);
	}

	_value = atof(line.substr(13).c_str());

	if (_value > 1000)
	{
		std::cout << "Error in the input file : value too large" << std::endl;
		return (false);
	}

	if (line[4] == '-' && line[7] == '-')
	{
		if (year < 1000 || year > 3000)
			return (false);

		for (std::map<int, int>::iterator it = _maxDaysPerMonth.begin(); it != _maxDaysPerMonth.end(); it++)
		{
			if (month == (*it).first)
			{
				if (day <= (*it).second)
					return (true);
			}
		}
		std::cout << "Error in the input file : date notre valid " << year << "-" <<  month << "-" << day << std::endl;
	}
	return (false);
}

bool	BitcoinExchange::checkTitle(std::string line, std::string fileName)
{
	if (fileName != DB_FILE)
	{
		if (!line.find(IN_HEADER))
			return (true);
	}
	else if (!line.find(DB_HEADER))
		return (true);
	return (false);
}

