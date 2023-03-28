/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:06:09 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/28 12:56:45 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "convertions.hpp"
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

void		ScalarConverter::converter(std::string const& input) {
	int scalar_type;

	scalar_type = find_scalar_type(input);
	switch (scalar_type)
	{
		case character:
			char_convert(input);
			break;
		case integer:
			int_convert(input);
			break;
		case float_number:
			float_convert(input);
			break;
		case double_number:
			double_convert(input);
			break;
	default:
		std::cout << "Wrong usage! Converter just accept char/int/float/double!" << std::endl;
		break;
	}
}