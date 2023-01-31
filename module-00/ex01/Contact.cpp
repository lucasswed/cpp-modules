/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:22:47 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/01/31 19:00:21 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {

	std::cout << "Contructor called!" << std::endl;
	std::cout << "Write the contact first name: ";
	std::getline(std::cin, this->first_name);
	std::cout << "Write the contact last name: ";
	std::getline(std::cin, this->last_name);
	std::cout << "Write the contact nickname: ";
	std::getline(std::cin, this->nickname);
	std::cout << "Write the contact phone number: ";
	std::getline(std::cin, this->phone_number);
	std::cout << "Write the contact darkest secret: ";
	std::getline(std::cin, this->dark_secret);
	Contact::nb_of_instances++;
	return;
}

Contact::~Contact(void) {

	std::cout << "Distructor called!" << std::endl;
	return;
}