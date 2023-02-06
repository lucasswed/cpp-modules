/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:35:20 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/06 14:10:32 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostre

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <stdlib.h>

int create_replacing_file(std::ifstream my_file, int ac, char **av)
{
	std::string str1;
	std::string str2;
	std::string name_rp_file;
	std::ofstream replace_file;
	size_t		pos_of_dot;

	str1 = av[2];
	str2 = av[3];
	pos_of_dot = name_rp_file.rfind(".");
	name_rp_file = name_rp_file.substr(0, pos_of_dot);
	name_rp_file += std::string("replace");
	(void)my_file;
	(void)ac;
	std::cout << name_rp_file << std::endl;
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
		// std::cout << "file opened!" << std::endl;
		create_replacing_file(my_file, ac, av);
	else
	{
		std::cout << "Error opening the file" << std::endl;
		return (EXIT_FAILURE);
	}
}