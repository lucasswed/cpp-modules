/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:06:09 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/24 16:34:02 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

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
	int	c;

	if (isdigit(to_convert[0]))
		c = std::stoi(to_convert);
	std::cout << c << std::endl;
}