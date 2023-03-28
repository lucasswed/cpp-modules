/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_convert.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:45:02 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/28 16:57:38 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convertions.hpp"

void	int_convert(std::string const& input) {
	long int	temp = strtol(input.c_str(), NULL, 10);
	float		float_num;
	double		double_num;

	if (temp > 2147483647 || temp < -2147483648)
	{
		std::cout << "Int Overflow please. Impossible to convert." << std::endl;
		return ;
	}
	int	num = atoi(input.c_str());
	std::cout << "char: ";
	if (num < 0 || num > 255)
		std::cout << "impossible" << std::endl;
	else if (isprint(num))
	{
		char c = static_cast<char>(num);
		std::cout << "'" << c << "'" << std::endl;
	}
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: " << num << std::endl;
	float_num = static_cast<float>(num);
	double_num = static_cast<double>(num);
	std::cout << "float: " << std::fixed << std::setprecision(1) << float_num << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) <<  double_num << std::endl;
}