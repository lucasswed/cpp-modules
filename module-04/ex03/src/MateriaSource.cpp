/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:05:49 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/15 16:32:52 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource(void) {
	for (size_t i = 0; i < 4; i++)
		this->learned_materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& src) {
	for (size_t i = 0; i < 4; i++)
		this->learned_materias[i] = NULL;
	*this = src;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const& rhs) {
	for (size_t i = 0; i < 4; i++)
	{
		if (this->learned_materias[i] != NULL)
			delete this->learned_materias[i];
		this->learned_materias[i] = rhs.learned_materias[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource(void) {
	for (size_t i = 0; i < 4; i++)
	{
		if (this->learned_materias[i] != NULL)
			delete this->learned_materias[i];
	}
}

void	MateriaSource::learnMateria(AMateria *m) {
	for (size_t i = 0; i < 4 && m != NULL; i++)
	{
		if (this->learned_materias[i] == NULL)
		{
			this->learned_materias[i] = m;
			std::cout << "New materia recipe learned: " << m->getType() << std::endl;
			return ;
		}
		if (i == 3)
		{
			std::cout << "No slots available for learning materia" << std::endl;
			delete m;
		}
	}
	if (m == NULL)
		std::cout << "Invalid materia cannot be learned" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const& type) {
	for (size_t i = 0; i < 4; i++)
	{
		if (this->learned_materias[i] && this->learned_materias[i]->getType() == type)
			return (this->learned_materias[i]->clone());
	}
	std::cout << "This type does not exist / was not learned" << std::endl;
	return (NULL);
}