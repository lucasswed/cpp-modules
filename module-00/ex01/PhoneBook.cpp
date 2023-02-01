/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:58:57 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/01 16:52:16 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
	std::cout << "Constructor called!" << std::endl;

	return;
}

PhoneBook::~PhoneBook(void){
	std::cout << "Distructor called!" << std::endl;
	return;
}

void	PhoneBook::add(void) {
	Contact contact;

	contact.add();
	this->contact[(Contact::nb_of_instances % 8) - 1] = contact;
	return;
}

void	PhoneBook::search(void) const {
	// if (Contact::nb_of_instances >= 8)
	// 	for (int i = 0; i < 8; i++)
	// 	{
	// 		std::cout this->contact[0].get
	// 	}
		std::cout << std::setw(10) << "0123";
		std::cout << "|" << std::endl;
		std::cout << std::setw(10) << "0123456789";
		std::cout << "|" << std::endl;
		std::cout << std::setw(10) << "0123456789abcd";
		std::cout << "|" << std::endl;
	return;
}

void	PhoneBook::fprint(std::string str) const {
	if (st)
}