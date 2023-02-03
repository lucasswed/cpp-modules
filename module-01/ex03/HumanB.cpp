/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:16:09 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/03 17:20:22 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB (std::string name) {
	this->_name = name;
	this->_has_weapon = false;
}

HumanB::~HumanB(void) {
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
	this->_has_weapon = true;
}

void	HumanB::attack(void) {
	if (this->_has_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->get_type() << std::endl;
}