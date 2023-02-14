/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:42:37 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/14 20:57:54 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(void) : ClapTrap() {
	std::cout << "ScavTrap default contructor called!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& src) : ClapTrap(src) {
	std::cout << "ScavTrap copy contructor called!" << std::endl;
	*this = src;
}

ScavTrap::ScavTrap(std::string const& name) : ClapTrap(name) {
	this->_hit_pts = 100;
	this->_energy_pts = 50;
	this->_attack_dmg = 20;
	std::cout << "Constructor of ScavTrap " << name << " called!" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called!" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const& rhs) {
	if (this != &rhs)
	{
		this->_hit_pts = rhs._hit_pts;
		this->_energy_pts = rhs._energy_pts;
		this->_attack_dmg = rhs._attack_dmg;
	}
	return (*this);
}

void	ScavTrap::guardGate(void) {
	if (this->_hit_pts > 0 && this->_energy_pts > 0)
	{
		this->_energy_pts--;
		std::cout << "ScavTrap " << this->_name << " is in Gatekeeper mode!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is unable to move, Gatekeeper mode unavailable!" << std::endl;
}

void	ScavTrap::attack(std::string const& target) {
	if (this->_energy_pts > 0)
	{
		this->_energy_pts--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_dmg << " points of damage, much more than ClapTrap!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " tried to attack " << target << " but cannot move!" << std::endl;
}