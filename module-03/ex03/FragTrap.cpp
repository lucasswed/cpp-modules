/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:42:37 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/16 14:20:31 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap(void) : ClapTrap() {
	std::cout << "FragTrap default contructor called!" << std::endl;
	this->_hit_pts = 100;
	this->_attack_dmg = 30;
}

FragTrap::FragTrap(FragTrap const& src) : ClapTrap(src) {
	std::cout << "FragTrap copy contructor called!" << std::endl;
	*this = src;
}

FragTrap::FragTrap(std::string const& name) : ClapTrap(name) {
	this->_hit_pts = 100;
	this->_energy_pts = 100;
	this->_attack_dmg = 30;
	std::cout << "Constructor of FragTrap " << name << " called!" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called!" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const& rhs) {
	if (this != &rhs)
	{
		this->_hit_pts = rhs._hit_pts;
		this->_energy_pts = rhs._energy_pts;
		this->_attack_dmg = rhs._attack_dmg;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void) {
	if (this->_hit_pts > 0 && this->_energy_pts > 0)
	{
		this->_energy_pts--;
		std::cout << "FragTrap " << this->_name << " says: \"Awesome work guys, HIGH FIVE!\"" << std::endl;
	}
	else
		std::cout << "FragTrap " << this->_name << " cannot move, no high fives for anyone!" << std::endl;
}

void	FragTrap::attack(std::string const& target) {
	if (this->_energy_pts > 0)
	{
		this->_energy_pts--;
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_dmg << " points of damage, much more than regular ClapTrap!" << std::endl;
	}
	else
		std::cout << "FragTrap " << this->_name << " tried to attack " << target << " but cannot move!" << std::endl;
}