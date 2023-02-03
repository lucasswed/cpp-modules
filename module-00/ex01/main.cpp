/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:01:27 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/02 19:07:52 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int	main(void) {
	PhoneBook phonebook;
	std::string	user_input;
	
	do {
		std::cout << std::endl << "What do you want to do?" << std::endl;
		std::cout << "|-----------------------------------------";
		std::cout << "------------------------------------------";
		std::cout << "-----------------------------------|" << std::endl;
		std::cout << "| Write \'ADD\' to add a contact (limit 8) | ";
		std::cout << "Write \'SEARCH\' to print the contact list | ";
		std::cout << "Write \'EXIT\' to exit the program |" << std::endl;
		std::cout << "|-----------------------------------------";
		std::cout << "------------------------------------------";
		std::cout << "-----------------------------------|" << std::endl;
		std::cout << "| > ";
		std::getline(std::cin >> std::ws, user_input);
		if (std::cin.eof() == 1)
			return (EXIT_FAILURE);
		if (user_input == "ADD")
			phonebook.add();
		else if (user_input == "SEARCH")
			phonebook.search();
		else if (user_input == "CLEAR")
			system("clear");
	}
	while (user_input != "EXIT");

	return (0);
}