/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ptr_ref2.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:03:02 by creyt             #+#    #+#             */
/*   Updated: 2023/02/07 13:21:17 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// une reference est pointeur qui est constant et toujours deference

#include <iostream>
#include <string>

void	byPtr(std::string* str)
{
	*str += " and ponies";
}

void	byConstPtr(std::string const * str)
{
	std::cout << *str << std::endl;
}

void	byRef(std::string& str)
{
	str += " and ponies";
}

void	byCponstRef(std::string const & str)
{
	std::cout << str << std :: endl;
}

int	main(void)
{
	std::string str = "I like butterflies";

	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);

	str = "I like otters";
	std::cout << str << std::endl;
	byRef(str);
	byCponstRef(str);

	return (0);
}
