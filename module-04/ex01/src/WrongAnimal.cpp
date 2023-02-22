/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:05:07 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/16 18:53:02 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void) {
	std::cout << "WrongAnimal constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& src) {
	std::cout << "WrongAnimal copy constructor called!" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called!" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& rhs) {
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "*Incomprehensible and wrong noise*" << std::endl;
}

std::string	WrongAnimal::get_type(void) const {
	return (this->_type);
}