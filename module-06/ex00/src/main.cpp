/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:35:14 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/27 16:44:35 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(void) {
	
	std::string input("0.5f");
	ScalarConverter::converter(input);
	// int	c = 0;
	// std::stringstream temp;

	// if (isdigit(to_convert[0]))
	// {
	// 	temp << to_convert;
	// 	temp >> c;
	// }
	// std::cout << c << std::endl;
	return (0);
}