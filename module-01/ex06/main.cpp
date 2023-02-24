/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:06:49 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/07 14:29:01 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <stdlib.h>
#include <iostream>
#include <string>

int	main(int ac, char **av) {

	if (ac != 2)
	{
		std::cout << "Error in arguments!" << std::endl;
		std::cout << "Correct usage: ./harlFilter <one of the four levels>" << std::endl;
		return (EXIT_FAILURE);
	}
	Harl harl;
	std::string level(av[1]);
	int	lev;
	
	lev = 4;
	for (int i = 0; i < 4; i++)
	{
		if (level == harl.init[i].name)
		{
			lev = i;
			break;
		}
	}
	switch (lev)
	{
		case 0:
			harl.complain(harl.init[lev].name);
		case 1:
			harl.complain(harl.init[lev].name);
		case 2:
			harl.complain(harl.init[lev].name);
		case 3:
			harl.complain(harl.init[lev].name);
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return 0;
}