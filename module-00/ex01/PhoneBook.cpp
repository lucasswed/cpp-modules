/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:58:57 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/01 11:24:01 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
	std::cout << "Constructor called!" << std::endl;
	Contact instance;
	return;
}

PhoneBook::~PhoneBook(void){
	std::cout << "Distructor called!" << std::endl;
	return;
}
