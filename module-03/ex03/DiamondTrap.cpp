/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:39:37 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/16 14:34:14 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void) {
	std::cout << "DiamondTrap default constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& src) : ScavTrap(src), FragTrap(src) {
	std::cout << "DiamondTrap copy contructor called!" << std::endl;
	*this = src;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name) {
	std::cout << "Constructor of DiamondTrap " << name << " called!" << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called!" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const& rhs) {
	if (this != &rhs)
	{
		this->_hit_pts = rhs._hit_pts;
		this->_energy_pts = rhs._energy_pts;
		this->_attack_dmg = rhs._attack_dmg;
	}
	return (*this);
}

void	DiamondTrap::attack(std::string const& target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) const {
	std::cout << "My DiamondTrap name is " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}