/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:43:16 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/08 12:33:18 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) : _fp_num(0) {
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& src) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;

	return;
}

Fixed::Fixed(int const& src) {
	this->_fp_num = src << this->_frac_bits;
	std::cout << "Int Constructor called" << std::endl;
}

Fixed::Fixed(float const& src) {
	int	x = roundf(src * pow(2, this->_frac_bits));
	this->_fp_num = x;
	std::cout << "Float Constructor called" << std::endl;
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
	return (this->_fp_num);
}

void	Fixed::setRawBits(int const& raw) {
	this->_fp_num = raw;
}

float	Fixed::toFloat(void) const {
	return  (float)(this->_fp_num / roundf(1 << this->_frac_bits));
}

int		Fixed::toInt(void) const {
	return (this->_fp_num >> this->_frac_bits);
}

std::ostream&	operator<<(std::ostream& o, Fixed const& i) {
	o << i.toFloat();

	return (o);
}