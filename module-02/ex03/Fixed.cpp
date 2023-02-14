/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:43:16 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/08 17:09:13 by lucas-ma         ###   ########.fr       */
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
	return (Fixed (this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const& rhs) const {
	return (Fixed (this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const& rhs) const {
	return (Fixed (this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const& rhs) const {
	return (Fixed (this->toFloat() / rhs.toFloat()));
}

Fixed&	Fixed::operator++(void) {
	this->_fp_num++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	temp(*this);
	this->_fp_num++;
	return temp;
}

Fixed&	Fixed::operator--(void) {
	this->_fp_num--;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	temp(*this);
	this->_fp_num--;
	return temp;
}

bool	Fixed::operator==(Fixed const& rhs) const {
	if (this->toFloat() == rhs.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const& rhs) const {
	if (this->toFloat() != rhs.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>(Fixed const& rhs) const {
	if (this->toFloat() > rhs.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const& rhs) const {
	if (this->toFloat() < rhs.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const& rhs) const {
	if (this->toFloat() >= rhs.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const& rhs) const {
	if (this->toFloat() <= rhs.toFloat())
		return (true);
	return (false);
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

Fixed&	Fixed::min(Fixed& num1, Fixed& num2) {
	if (num1 < num2)
		return (num1);
	return (num2);
}

Fixed&	Fixed::min(Fixed const& num1, Fixed const& num2) {
	if (num1 < num2)
		return ((Fixed&)num1);
	return ((Fixed&)num2);
}

Fixed&	Fixed::max(Fixed& num1, Fixed& num2) {
	if (num1 > num2)
		return (num1);
	return (num2);
}

Fixed&	Fixed::max(Fixed const& num1, Fixed const& num2) {
	Fixed	ret;
	if (num1 > num2)
		return ((Fixed&)num1);
	return ((Fixed&)num2);
}

std::ostream&	operator<<(std::ostream& o, Fixed const& i) {
	o << i.toFloat();

	return (o);
}
