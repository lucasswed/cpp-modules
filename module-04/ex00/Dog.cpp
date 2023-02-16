/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:34:31 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/16 18:53:32 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal() {
	this->_type = "Dog";
	std::cout << "Dog constructor called!" << std::endl;
}

Dog::Dog(Dog const& src) : Animal(src) {
	*this = src;
	std::cout << "Dog copy constructor called!" << std::endl;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called!" << std::endl;
}

Dog&	Dog::operator=(Dog const& rhs) {
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "BARK!" << std::endl;
}

std::string	Dog::get_type(void) const {
	return (this->_type);
}