/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:23:52 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/06 12:46:42 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure(void) : AMateria("cure") {
}

Cure::Cure(Cure const& src) : AMateria(src){
	*this = src;
}

Cure::~Cure(void) {
}

Cure&	Cure::operator=(Cure const& rhs) {
	(void)rhs;
	return (*this);
}

AMateria*	Cure::clone(void) const {
	AMateria* ret = new Cure;

	return (ret);
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}