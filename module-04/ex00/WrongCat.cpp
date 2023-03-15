/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:15:22 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/15 14:52:07 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void) : WrongAnimal() {
	this->_type = "WrongCat";
	std::cout << "WrongCat constructor called!" << std::endl;
}

WrongCat::WrongCat(WrongCat const& src) : WrongAnimal(src) {
	*this = src;
	std::cout << "WrongCat copy constructor called!" << std::endl;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called!" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const& rhs) {
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	WrongCat::makeSound(void) const {
	std::cout << "BZZZZZZZZ!" << std::endl;
}
