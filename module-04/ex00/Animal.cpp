/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:50:16 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/16 18:48:57 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) {
	std::cout << "Animal constructor called!" << std::endl;
}

Animal::Animal(Animal const& src) {
	std::cout << "Animal copy constructor called!" << std::endl;
	*this = src;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called!" << std::endl;
}

Animal&	Animal::operator=(Animal const& rhs) {
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	Animal::makeSound(void) const {
	std::cout << "*Incomprehensible noise*" << std::endl;
}

std::string	Animal::get_type(void) const {
	return (this->_type);
}