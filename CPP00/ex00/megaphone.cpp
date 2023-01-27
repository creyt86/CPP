/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:28:45 by creyt             #+#    #+#             */
/*   Updated: 2023/01/17 10:44:03 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = -1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (++i < argc)
		{
			j = -1;
			tmp = argv[i];
			while (tmp[++j])
				tmp[j] = std::toupper(tmp[j]);
			std::cout << argv[i];
		}
	}
	std::cout << std::endl;
}
