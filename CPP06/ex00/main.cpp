/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 08:46:54 by creyt             #+#    #+#             */
/*   Updated: 2023/04/20 11:31:06 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int	main(int argc, char **argv)
{
	Convert	cc;
	if (argc != 2)
	{
		std::cout << "ERROR, just two arguments please" << std::endl;
		return (1);
	}
	else
		cc.conv(argv[1]);
}
