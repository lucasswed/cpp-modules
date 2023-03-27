/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_scalar_type.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:57:05 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/27 16:46:08 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convertions.hpp"

static bool	all_digit(std::string const& input) {
	for (size_t i = 0; i < input.length(); i++) {
		if (!isdigit(input[i]))
			return (false);
	}
	return (true);
}

static bool	is_float(std::string const& input) {
	int	dot = 0;
	int	minus = 0;
	int	plus = 0;
	int	f = 0;
	for (size_t i = 0; i < input.length(); i++) {
		if (input[i] == '.')
			dot++;
		if (input[i] == '-')
			minus++;
		if (input[i] == '+')
			plus++;
		if (input[i] == 'f')
			f++;
	}
	if (dot != 1 || minus > 1 || plus > 1 || f != 1)
		return (false);
	size_t	dot_index = input.find('.');
	std::string temp = input.substr(0, dot_index);
	if (all_digit(temp) == true)
	{
		temp = input.substr(dot_index, input.length() - dot_index - 2);
		if (all_digit(temp) == true)
			return (true);
	}
	return (false);
}

int find_scalar_type(std::string const& input) {
	if (!isdigit(input[0]) && strlen(input.c_str()) == 1)
		return (character);
	else if (all_digit(input) == true || ((input[0] == '-' || input[0] == '+') && all_digit(input.substr(1, input.length() - 1))))
		return (integer);
	else if (is_float(input) == true || input == "nanf" || input == "+inff" || input == "-inff")
		return (float_number);
	return (-1);
}
