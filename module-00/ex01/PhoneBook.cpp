/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:58:57 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/14 18:16:18 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <sstream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
	return;
}

PhoneBook::~PhoneBook(void){
	return;
}

void	PhoneBook::add(void) {
	if (Contact::nb_of_contacts >= 8)
		this->contact[Contact::nb_of_contacts % 8].~Contact();
	this->contact[Contact::nb_of_contacts % 8].add();
	return;
}

void	PhoneBook::search(void) const {
	std::string id;

	std::cout << " ___________________________________________" << std::endl;
	std::cout << "|     INDEX|  FIRST N.|   LAST N.|  NICKNAME|" << std::endl;
	std::cout << " -------------------------------------------" << std::endl;
	if (Contact::nb_of_contacts >= 8)
		for (int i = 0; i < 8; i++)
		{
			id.push_back(i + '0');
			std::cout << "|";
			this->fprint(id);
			std::cout << "|";
			this->fprint(this->contact[i].get_fname());
			std::cout << "|";
			this->fprint(this->contact[i].get_lname());
			std::cout << "|";
			this->fprint(this->contact[i].get_nickname());
			std::cout << "|" << std::endl;
			id.clear();
		}
	else
		for (int i = 0; i < Contact::nb_of_contacts; i++)
		{
			id.push_back(i + '0');
			std::cout << "|";
			this->fprint(id);
			std::cout << "|";
			this->fprint(this->contact[i].get_fname());
			std::cout << "|";
			this->fprint(this->contact[i].get_lname());
			std::cout << "|";
			this->fprint(this->contact[i].get_nickname());
			std::cout << "|" << std::endl;
			id.clear();
		}

	if (Contact::nb_of_contacts == 0)
	{
		std::cout << "Empty phonebook, please add contacts first." << std::endl;
		return;
	}
	int	index;
	do {

		std::cout << "Choose an index from the above ones: ";
		std::cin >> std::ws >> id;
		std::istringstream(id) >> index;
		if (isdigit(id[0]) == false || id.size() > 1 || index >= 8 || index < 0 || index >= Contact::nb_of_contacts)
			std::cout << "Non-existent index, please enter a valid index!" << std::endl;
	}
	while (isdigit(id[0]) == false || id.size() > 1 || index >= Contact::nb_of_contacts || index >= 8 || index < 0);
	std::cout << "First name: " << contact[index].get_fname() << std::endl;
	std::cout << "Last name: " << contact[index].get_lname() << std::endl;
	std::cout << "Nickname: " << contact[index].get_nickname() << std::endl;
	std::cout << "Phone number:" << contact[index].get_phonenb() << std::endl;
	std::cout << "Darkest secret:" << contact[index].get_dark_secret() << std::endl;
	return;
}

void	PhoneBook::fprint(std::string str) const {
	if (str.size() <= 10)
		std::cout << std::setw(10) << str;
	else
	{
		str = str.substr(0, 9);
		str.push_back('.');
		std::cout << std::setw(10) << str;
	}
}
