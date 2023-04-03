/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 08:43:52 by creyt             #+#    #+#             */
/*   Updated: 2023/04/03 09:19:52 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <iomanip>
# include <cmath>

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


#endif
