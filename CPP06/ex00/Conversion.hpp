/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 08:43:52 by creyt             #+#    #+#             */
/*   Updated: 2023/04/17 15:49:05 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <iomanip>
# include <cmath>

class	Convert
{
	private:
			int		_int;
			char	_char;
			float	_float;
			double	_double;

	public :
			Convert();
			Convert(Convert const &cpy);
			Convert &operator=(Convert const &rhs);
			~Convert();

			void convert(std::string arg);
			void printConversion(std::string arg, std::string type);
			bool isChar(std::string arg);
			bool isInt(std::string arg);
			int isFloat(std::string arg);
			int isDouble(std::string arg);
			std::string findType(std::string arg);
			bool isPrintable(char c);
			void printInChar(char c);
			void printInInt(int i);
			void printInFloat(float f, int i);
			void printInDouble(double d, int i);
};






#endif
