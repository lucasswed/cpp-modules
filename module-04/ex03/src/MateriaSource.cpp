/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:05:49 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/06 12:35:15 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : IMateriaSource() {
	for (size_t i = 0; i < 4; i++)
		this->learned_materias[i] = NULL;
}

MateriaSource::~MateriaSource(void) {
}

void	MateriaSource::learnMateria(AMateria *m) {
	for (size_t i = 0; i < 4; i++)
		if (this->learned_materias[i] == NULL)
		{
			this->learned_materias[i] = m;
			return ;
		}
}

AMateria*	MateriaSource::createMateria(std::string const& type) {
	for (size_t i = 0; i < 4; i++)
	{
		if (this->learned_materias[i] && this->learned_materias[i]->getType() == type)
			return (this->learned_materias[i]->clone());
	}
	return (NULL);
}