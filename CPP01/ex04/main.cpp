/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:01:25 by creyt             #+#    #+#             */
/*   Updated: 2023/02/14 11:21:29 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

std::string		replace(std::string line, std::string s1, std::string s2)
{
	int	pos = line.find(s1);
	while (pos != (int)std::string::npos)
	{
		line.erase(pos, s1.size());
		line.insert(pos, s2);
		pos = line.find(s1, (pos + s1.size()));
	}
	return (line);
}

int	main(int argc, char **argv)
{
	std::ifstream	file(argv[1]);
	std::string		line;

	std::string		oldFileName;
	std::string		newFileName;

	if (argc != 4)
	{
		std::cout << std::endl << "Error: Wrong number of arguments\nUsage : ./ft_sed file1 s1 s2" << std::endl;
		return 1;
	}
	oldFileName = argv[1];
	newFileName = oldFileName + ".replace";
	std::ofstream	newFile(newFileName);
	if (!newFile)
		std::cout << "Error: Opening file impossible" << std::endl;
	else
	{
		while (getline(file, line))
		{
			line = replace(line, argv[2], argv[3]);
			newFile << line;
			newFile << std::endl;
		}
	}
	/*
	if (newFileName.is_open())
	{
		while(getline(file, line))
		{
			line = replace(line, argv[2], argv[3]);
			newFile << line;
			newFile << std::endl;
		}
	}
	else
	{
		std::cout << "Error: Opening file impossible" << std::endl;
	}
	*/
}
