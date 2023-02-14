/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:22:47 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/02 19:09:54 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {
	return;
}

Contact::~Contact(void) {
	return;
}

int Contact::nb_of_contacts = 0;

std::string	Contact::get_fname(void) const {
	return (this->_first_name);
}

std::string	Contact::get_lname(void) const {
	return (this->_last_name);
}

std::string	Contact::get_nickname(void) const {
	return (this->_nickname);
}

std::string	Contact::get_phonenb(void) const {
	return (this->_phone_number);
}

std::string	Contact::get_dark_secret(void) const {
	return (this->_dark_secret);
}

void	Contact::add(void) {
	std::cout << "Write the contact first name: ";
	std::getline(std::cin >> std::ws, this->_first_name);
	if (std::cin.eof() == 1)
		return;
	std::cout << "Write the contact last name: ";
	std::getline(std::cin >> std::ws, this->_last_name);
	if (std::cin.eof() == 1)
		return;
	std::cout << "Write the contact nickname: ";
	std::getline(std::cin >> std::ws, this->_nickname);
	if (std::cin.eof() == 1)
		return;
	std::cout << "Write the contact phone number: ";
	std::getline(std::cin >> std::ws, this->_phone_number);
	if (std::cin.eof() == 1)
		return;
	std::cout << "Write the contact darkest secret: ";
	std::getline(std::cin >> std::ws, this->_dark_secret);
	if (std::cin.eof() == 1)
		return;
	Contact::nb_of_contacts++;
}
