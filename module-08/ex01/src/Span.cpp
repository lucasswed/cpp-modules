/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:23:33 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/05/12 14:55:12 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <time.h>

Span::Span(void) {
}

Span::Span(unsigned int const& N) : _size(N) {
}

Span::Span(Span const& src) {
	if (this != &src)
		*this = src;
}

Span::~Span(void) {
}

Span&	Span::operator=(Span const& rhs) {
	if (!this->_array.empty())
		this->_array.clear();
	for (std::multiset<int>::iterator i; i != rhs._array.end(); i++)
		this->_array.insert(*i);
	this->_size = rhs._size;
	return (*this);
}

unsigned int const&	Span::getSize(void) const {
	return (this->_size);
}

void	Span::addNumber(int const& number) {
	if (this->_array.size() == this->_size)
		throw std::length_error("The array is full! Don't add more numbers than the size of the span!");
	this->_array.insert(number);
}

void	Span::showContent(void) const {
	if (this->_array.empty())
		throw std::length_error("The array is empty please, fill the array before call these function!");;
	for (std::multiset<int>::iterator i = this->_array.begin(); i != this->_array.end(); i++)
		std::cout << *i << std::endl;
}

unsigned int	Span::shortestSpan(void) const {

	if (this->_array.empty())
		throw std::length_error("The array is empty please, fill the array before call these function!");

	std::multiset<int>::iterator temp;
	int	span;

	temp = this->_array.begin();
	span = *(++temp) - *(--temp); // second minus the first

	for (std::multiset<int>::iterator i = ++this->_array.begin(); i != this->_array.end(); i++, temp++)
		if (*i - *temp < span) // test if there is some subtraction that is lower than the one on the variable
			span = *i - *temp; // if there is, replace it

	return (span);
}

unsigned int	Span::longestSpan(void) const {

	if (this->_array.empty())
		throw std::length_error("The array is empty please, fill the array before call these function!");;

	std::multiset<int>::iterator smallest;
	std::multiset<int>::iterator biggest;
	int span;

	smallest = std::min_element(this->_array.begin(), this->_array.end());
	biggest = std::max_element(this->_array.begin(), this->_array.end());
	span = *biggest - *smallest;

	return (span);
}
