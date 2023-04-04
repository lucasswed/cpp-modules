/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:56:53 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/04/04 12:12:14 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void) : _raw(0) {
}

Data::Data(uintptr_t const& raw) : _raw(raw) {
}

Data::Data(Data const& src) {
	*this = src;
}

Data::~Data(void) {
}

Data&	Data::operator=(Data const& rhs) {
	if (this != &rhs)
		this->_raw = rhs._raw;
	return (*this);
}

uintptr_t	Data::get_raw(void) const {
	return (this->_raw);
}

void		Data::set_raw(uintptr_t const& new_raw) {
	this->_raw = new_raw;
}
