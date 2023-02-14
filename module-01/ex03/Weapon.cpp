/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:54:36 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/07 12:30:12 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
}

Weapon::~Weapon(void) {
}

std::string const& Weapon::get_type(void) {
	return (this->_type);
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}