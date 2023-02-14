/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:06:00 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/03 15:00:48 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << "constructing " << this->_name << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "destructing " << this->_name << std::endl;
}

void	Zombie::announce(void) {
	std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie*	Zombie::newZombie(std::string name) {
	Zombie *zombie = new Zombie(name);

	return (zombie);
}

void	Zombie::randomChump(std::string name) {
	Zombie zombie(name);

	zombie.announce();
}