/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:10:34 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/15 16:33:40 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(void) : ICharacter(), _name("lucas"){
	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(std::string const& name) : _name(name) {
	for (size_t i = 0; i < 4; i++)
		this->inventory[i]= NULL;
}

Character::Character(Character const& src) {
	for (size_t i = 0; i < 4; i++)
		this->inventory[i]= NULL;
	*this = src;
}

Character::~Character(void) {
	for (size_t i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
			delete inventory[i];
	}
}

Character&	Character::operator=(Character const& rhs) {
	if (this != &rhs)
		for (size_t i = 0; i < 4; i++)
		{
			if (this->inventory[i] != NULL)
				delete inventory[i];
			inventory[i] = rhs.inventory[i]->clone();
		}
	return (*this);
}

std::string	const&	Character::getName(void) const {
	return (this->_name);
}

void	Character::equip(AMateria* m) {
	if (m == 0)
	{
		std::cout << "Cannot equip non-exitent materia!" << std::endl;
		return ;
	}	
	for (size_t i = 0; i < 4 && m != NULL; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return ;
		}
	}
	std::cout << "Inventory full!" << std::endl;
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
	{
		std::cout << "Invalid index to unequip materia" << std::endl;
		return ;
	}
	else if (this->inventory[idx] != NULL)
		this->inventory[idx] = NULL;
	else
		std::cout << "Empty slot!" << std::endl;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3)
	{
		std::cout << "Invalid index for use() function" << std::endl;
		return ;
	}
	else if (this->inventory[idx] != NULL)
		this->inventory[idx]->use(target);
}