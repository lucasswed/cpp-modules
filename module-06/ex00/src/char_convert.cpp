/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_convert.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:13:50 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/28 13:13:32 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convertions.hpp"

void	char_convert(std::string const& input) {
	char c = input[0];
	int integer = static_cast<int>(c);
	float float_num = static_cast<float>(c);
	double double_num = static_cast<double>(c);
	std::cout << "char: " << "'" << c << "'" << std::endl;
	std::cout << "int: " << integer << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << float_num << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) <<  double_num << std::endl;
}