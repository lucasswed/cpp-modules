/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:06:09 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/21 15:11:16 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {
}

ScalarConverter::ScalarConverter(ScalarConverter const& src) {
	*this = src;
}

ScalarConverter::~ScalarConverter(void) {
}

ScalarConverter&	ScalarConverter::operator=(ScalarConverter const& rhs) {
	(void)rhs;
	return (*this);
}

void		ScalarConverter::converter(std::string const& to_convert) {
	
	
}