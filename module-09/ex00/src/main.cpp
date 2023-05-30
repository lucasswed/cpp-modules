/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:36:38 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/05/30 12:30:59 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Invalid arguments number" << std::endl;
		return (1);
	}

	std::ifstream data(av[1]);
	if (!data.is_open())
	{
		std::cout << "Can't open the " << av[1] << "file" << std::endl;
		return (1);
	}

	std::map<std::string, float> container;
	fillMapContainer(data, container);
	
	return (0);
}