/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:37:24 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/15 15:05:13 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <fstream>

Brain::Brain(void) {
	std::cout << "Brain default constructor called!" << std::endl;
	std::ifstream file("thougths.txt");
	
	if (file.is_open())
	{
		for (size_t i = 0; i < 100; i++)
			getline(file, this->ideas[i]);
	}
}

Brain::Brain(Brain const& src) {
	std::cout << "Brain copy constructor called!" << std::endl;
	*this = src;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called!" << std::endl;
}

Brain&	Brain::operator=(Brain const& rhs) {
	if (this != &rhs)
		for (size_t i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];
	return (*this);
}