/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:53:43 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/22 16:42:52 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal() {
	this->_type = "Cat";
	this->brain = new Brain;
	// std::cout << "Cat constructor called!" << std::endl;
}

Cat::Cat(Cat const& src) : Animal(src) {
	this->_type = "Cat";
	this->brain = new Brain;
	*this = src;
	// std::cout << "Cat copy constructor called!" << std::endl;
}

Cat::~Cat(void) {
	delete this->brain;
	// std::cout << "Cat destructor called!" << std::endl;
}

Cat&	Cat::operator=(Cat const& rhs) {
	if (this != &rhs)
	{
		this->_type = rhs._type;
		*(this->brain) = *(rhs.brain);
	}
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "MIAU!" << std::endl;
}

std::string	Cat::get_type(void) const {
	return (this->_type);
}

std::string&	Cat::get_idea(int index) const {
	return (this->brain->ideas[index]);
}

void			Cat::set_idea(int index, std::string const& new_thought) {
	this->brain->ideas[index] = new_thought;
}
