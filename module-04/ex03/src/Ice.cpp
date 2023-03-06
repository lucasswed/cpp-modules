/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:12:48 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/06 12:34:56 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice(void) : AMateria("ice") {
}

Ice::Ice(Ice const& src) : AMateria(src){
	*this = src;
}

Ice::~Ice(void) {
}

Ice&	Ice::operator=(Ice const& rhs) {
	(void)rhs;
	return (*this);
}

AMateria*	Ice::clone(void) const {
	AMateria* ret = new Ice;

	return (ret);
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}