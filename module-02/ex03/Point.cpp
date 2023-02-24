/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:19:38 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/08 17:41:58 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0) {
}

Point::Point(Point const& src) {
	*this = src;

	return;
}

Point::Point(float const& x1, float const& y1) : x(x1), y(y1) {
}

Point::~Point(void) {
}

Fixed	Point::get_x(void) const {
	return (this->x);
}

Fixed	Point::get_y(void) const {
	return (this->y);
}

Point&	Point::operator=(Point const& rhs) {
	(void)rhs;
	return (*this);
}