/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:35:20 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/06 12:10:20 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <stdlib.h>

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
		create_replacing_file(my_file, ac, av);
	else
	{
		std::cout << "Error opening the file" << std::endl;
		return (EXIT_FAILURE);
	}
}