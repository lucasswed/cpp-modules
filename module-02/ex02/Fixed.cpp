/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:43:16 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/08 14:28:58 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) : _fp_num(0) {
}

Fixed::Fixed(Fixed const& src) {
	*this = src;

	return;
}

Fixed::Fixed(int const& src) {
	this->_fp_num = src << this->_frac_bits;
}

Fixed::Fixed(float const& src) {
	int	x = roundf(src * pow(2, this->_frac_bits));
	this->_fp_num = x;
}


Fixed::~Fixed(void) {
}

Fixed&	Fixed::operator=(Fixed const& rhs) {
	if (this != &rhs)
		this->_fp_num = rhs.getRawBits();

	return (*this);
}

Fixed	Fixed::operator+(Fixed const& rhs) const {
	
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