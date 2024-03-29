/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:35:14 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/28 11:41:27 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

int main(int ac, char **av) {
	
	if (ac != 2)
	{
		std::cout << "Error! Correct usage: ./convert (argument)" << std::endl;
		return (1);
	}
	ScalarConverter::converter(av[1]);
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