/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:01:25 by creyt             #+#    #+#             */
/*   Updated: 2023/03/06 14:17:43 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

std::string		replace(std::string line, std::string s1, std::string s2)
{
	size_t	pos = line.find(s1);
	while (pos != std::string::npos)
	{
		line.erase(pos, s1.size());
		line.insert(pos, s2);
		pos = line.find(s1);
	}
	return (line);
}

int	main(int argc, char **argv) {
	if (argc != 4)
	{
		std::cout << ARG_ERR << std::endl;
		return (1);
	}

	std::string fileName(argv[1]);
	std::ifstream fileStream(fileName);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	std::string	newFile = fileName + ".replace";

	if (fileStream.is_open())
	{
		std::ofstream	newfile(newFile);
		while (getline(fileStream, fileName))
		{
			fileName = replace(fileName, s1, s2);
			newfile << fileName << std::endl;
		}
	}
	else
	{
		std::cout << OP_ERR << std::endl;
		return (1);
	}

	std::cout << "sed finish" << std::endl;

	return 0;
}
