/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:31:54 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/06 12:32:41 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(void) {
}

AMateria::AMateria(AMateria const& src) {
	*this = src;
}

AMateria::AMateria(std::string const& type) : _type(type) {	
}

AMateria::~AMateria(void) {
}

AMateria&	AMateria::operator=(AMateria const& rhs) {
	(void)rhs;
	return (*this);
}

std::string	const&	AMateria::getType(void) const {
	return (this->_type);
}
