/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:10:34 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/06 12:38:33 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : ICharacter(), _name("lucas"){
	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(std::string const& name) : ICharacter(), _name(name) {
	for (size_t i = 0; i < 4; i++)
		this->inventory[i]= NULL;
}

Character::Character(Character const& src) : ICharacter(src) {
	*this = src;
}

Character::~Character(void) {
	for (size_t i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete inventory[i];
	}
}

Character&	Character::operator=(Character const& rhs) {
	if (this != &rhs)
		for (size_t i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete inventory[i];
			inventory[i] = rhs.inventory[i]->clone();
		}
	return (*this);
}

std::string	const&	Character::getName(void) const {
	return (this->_name);
}

void	Character::equip(AMateria* m) {
	for (size_t i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx >= 4)
		return ;
	else
		if (this->inventory[idx] != NULL)
			this->inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= 4)
		return ;
	else
		if (this->inventory[idx] != NULL)
			this->inventory[idx]->use(target);
}