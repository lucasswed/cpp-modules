/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:09:23 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/14 20:08:04 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) : _hit_pts(10), _energy_pts(10), _attack_dmg(0) {
	std::cout << "ClapTrap default constructor called!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src) {
	std::cout << "ClapTrap copy constructor called!" << std::endl;
	*this = src;
}

ClapTrap::ClapTrap(std::string const& name) : _name(name), _hit_pts(10), _energy_pts(10), _attack_dmg(0) {
	std::cout << "Constructor of ClapTrap " << name << " called!" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor called!" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& rhs) {
	if (this != &rhs)
	{
		this->_hit_pts = rhs._hit_pts;
		this->_energy_pts = rhs._energy_pts;
		this->_attack_dmg = rhs._attack_dmg;
	}
	return (*this);
}

void	ClapTrap::attack(std::string const& target) {
	if (this->_energy_pts > 0)
	{
		this->_energy_pts--;
		std::cout << this->_name << " attacks " << target << ", causing " << this->_attack_dmg << " points of damage!" << std::endl;
	}
	else
		std::cout << this->_name << " tried to attack " << target << " but cannot move!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	if (this->_hit_pts == 0)
		std::cout << this->_name << " is already dead!" << std::endl;
	else
	{
		this->_hit_pts -= amount;
		std::cout << this->_name << " was hit, loosing " << amount << " health points!" << std::endl;
		if (this->_hit_pts <= 0)
		{
			std::cout <<  this->_name << " is dead!" << std::endl;
			this->_hit_pts = 0;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energy_pts > 0 && this->_hit_pts > 0)
	{
		this->_energy_pts--;
		this->_hit_pts += amount;
		std::cout << this->_name << " repairs " << amount << " hit points!" << std::endl;
	}
	else
	{
		if (this->_hit_pts > 0)
			std::cout << this->_name << " tried to repair itself but cannot move!" << std::endl;
		std::cout << this->_name << " tried to repair itself but is already dead!" << std::endl;
	}
}

void	ClapTrap::clapTrapStat(void) {
	std::cout << std::endl << this->_name << " status:" << std::endl;
	std::cout<< "Health: " << this->_hit_pts << std::endl;
	std::cout<< "Energy: " << this->_energy_pts << std::endl << std::endl;
}