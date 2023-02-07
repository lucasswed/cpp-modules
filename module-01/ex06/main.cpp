/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:06:49 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/07 14:06:26 by lucas-ma         ###   ########.fr       */
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
	
	return 0;
}