/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:35:20 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/06 16:24:06 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <stdlib.h>

void	replace_token_in_line(std::string& line, std::string& token, std::string& sub)
{
	while (line.find(token) != std::string::npos)
	{
		std::string temp;
		
		temp = line.substr(line.find(token) + token.size());
		line = line.substr(0, line.find(token));
		line.append(sub);
		line.append(temp);
	}
}

void	fill_replace_file(std::ifstream& my_file, std::ofstream& replace_file, std::string& str1, std::string& str2)
{
	std::string line;

	std::getline(my_file, line, '\0');
	if (line.find(str1) != std::string::npos && str1.empty() == false)
		replace_token_in_line(line, str1, str2);
	replace_file.write(line.c_str(), line.size());	
}

int create_replacing_file(std::ifstream& my_file, char **av)
{
	std::string str1;
	std::string str2;
	std::string name_rp_file;
	std::ofstream replace_file;

	str1 = av[2];
	str2 = av[3];
	name_rp_file = av[1];
	name_rp_file += std::string(".replace");
	replace_file.open(name_rp_file);
	if (replace_file.is_open())
		fill_replace_file(my_file, replace_file, str1, str2);
	else
	{
		std::cout << "Error creating the file" << std::endl;
		return (EXIT_FAILURE);
	}
	return (1);
}

int main(int ac, char **av) {

	if (ac != 4)
	{
		std::cout << "Error in arguments!" << std::endl;
		std::cout << "Correct usage: ./replace <filename> <string1> <string2>" << std::endl;
		return (EXIT_FAILURE);
	}

	std::ifstream my_file;
	
	my_file.open(av[1]);
	if (my_file.is_open())
		create_replacing_file(my_file, av);
	else
	{
		std::cout << "Error opening the file" << std::endl;
		return (EXIT_FAILURE);
	}
}