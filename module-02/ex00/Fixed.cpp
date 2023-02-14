/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:43:16 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/07 18:07:56 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : _fp_num(0) {
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& src) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;

	return;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl; 
}

Fixed&	Fixed::operator=(Fixed const& rhs) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fp_num = rhs.getRawBits();

	return (*this);
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fp_num);
}

void	Fixed::setRawBits(int const raw) {
	this->_fp_num = raw;
}