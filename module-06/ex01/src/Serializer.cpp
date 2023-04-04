/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:36:34 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/04/04 11:55:24 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

Serializer::Serializer(void) {
}

Serializer::Serializer(Serializer const& src) {
	*this = src;
}

Serializer::~Serializer(void) {
}

Serializer&	Serializer::operator=(Serializer const& rhs) {
	(void)rhs;
	return (*this);
}

uintptr_t	Serializer::serialize(Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}