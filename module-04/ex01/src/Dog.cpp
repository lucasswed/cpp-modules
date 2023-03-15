/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:34:31 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/15 15:05:01 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal() {
	this->_type = "Dog";
	this->brain = new Brain;
	std::cout << "Dog constructor called!" << std::endl;
}

Dog::Dog(Dog const& src) : Animal(src) {
	this->_type = "Dog";
	this->brain = new Brain;
	*this = src;
	std::cout << "Dog copy constructor called!" << std::endl;
}

Dog::~Dog(void) {
	delete this->brain;
	std::cout << "Dog destructor called!" << std::endl;
}

Dog&	Dog::operator=(Dog const& rhs) {
	if (this != &rhs)
	{
		this->_type = rhs._type;
		*(this->brain) = *(rhs.brain);
	}
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "BARK!" << std::endl;
}

std::string	Dog::get_type(void) const {
	return (this->_type);
}

std::string&	Dog::get_idea(int index) const {
	return (this->brain->ideas[index]);
}

void			Dog::set_idea(int index, std::string const& new_thought) {
	this->brain->ideas[index] = new_thought;
}
