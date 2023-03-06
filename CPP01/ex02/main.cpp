/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:40:11 by creyt             #+#    #+#             */
/*   Updated: 2023/02/28 15:11:04 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";

	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << "String adress : " << &brain << std::endl;
	std::cout << "StringPTR adress : " << stringPTR << std::endl;
	std::cout << "StringREF adress : " << &stringREF << std::endl;

	std::cout << "String value : " << brain << std::endl;
	std::cout << "StringPTR value : " << *stringPTR << std::endl;
	std::cout << "StringREF value : " << stringREF << std::endl;

	return(0);
}
