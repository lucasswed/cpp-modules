/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float_convert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:42:32 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/28 18:36:33 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convertions.hpp"

void	float_convert(std::string const& input) {

	if (input == "nanf" || input == "+inff" || input == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		if (input == "nanf") {
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nan" << std::endl;
		}
		else if (input == "-inff") {
			std::cout << "float: -inff" << std::endl;
			std::cout << "double: -inf" << std::endl;
		}
		else {
			std::cout << "float: +inff" << std::endl;
			std::cout << "double: +inf" << std::endl;
		}
		return ;
	}
	double	temp = strtod(input.c_str(), NULL);
	float	num;

	if (temp < std::numeric_limits<float>::min() || temp > std::numeric_limits<float>::max())
	{
		std::cout << "Float Overflow! Impossible to convert." << std::endl;
		return ;
	}
	num = strtof(input.c_str(), NULL);
	std::cout << "char: ";
	if (num < 0 || num > 255)
		std::cout << "impossible" << std::endl;
	else if (isprint(num))
		std::cout << static_cast<char>(num) << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: ";
	if (num < -2147483648 || num > 2147483647)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(num) << std::endl;
	if (input.find(".0f")) {
		std::cout << "float: " << std::fixed << std::setprecision(1) << num << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(num) << std::endl;
	}
	else {
		std::cout << "float: " << num << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(num) << std::endl;
	}
}