/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:01:27 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/01/31 18:00:07 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	main(void) {
	PhoneBook phonebook;
	std::string	user_input;
	
	std::getline(std::cin, user_input);
	while (user_input != "EXIT")
	{
		if (user_input == "ADD")
			phonebook.add();
		else if (user_input == "SEARCH")
			phonebook.search();
		else {
			std::cin >> user_input;
		}
	}
	

	return (0);
}