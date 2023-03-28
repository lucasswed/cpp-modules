/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_convert.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:55:09 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/28 18:22:20 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convertions.hpp"

void	double_convert(std::string const& input) {
	if (input == "nan" || input == "+inf" || input == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		if (input == "nan") {
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nan" << std::endl;
		}
		else if (input == "-inf") {
			std::cout << "float: -inff" << std::endl;
			std::cout << "double: -inf" << std::endl;
		}
		else {
			std::cout << "float: +inff" << std::endl;
			std::cout << "double: +inf" << std::endl;
		}
		return ;
	}
	long double temp = strtold(input.c_str(), NULL);
	double		num;

	if (temp > std::numeric_limits<double>::max() || temp < std::numeric_limits<double>::min())
	{
		std::cout << "Double Overflow! Impossible to convert." << std::endl;
		return;
	}
	num = strtod(input.c_str(), NULL);
	std::cout << "char: ";
	if (num < 0 || num > 255)
		std::cout << "impossible" << std::endl;
	else if (isprint(num))
		std::cout << static_cast<char>(num) << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: ";
	if (num > 2147483647 || num < -2147483648)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(num) << std::endl;
	std::cout << "float: ";
	if (num > std::numeric_limits<float>::max() || num < std::numeric_limits<float>::min())
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<float>(num) << "f" << std::endl;
	std::cout << "double: " << num << std::endl;
}