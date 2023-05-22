/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:36:42 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/05/22 12:42:23 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	fillMapContainer(std::ifstream& data, std::map<std::string, float> &container) {
	std::string						line;
	std::string						key;
	std::string						temp;
	float							value;

	while (true) {
		std::getline(data, line);
		if (line.empty())
			break;
		key = line.substr(0, line.find(','));
		temp = line.substr(line.find(','));
		value = strtof(temp.c_str(), NULL);
		container[key] = value;
	}
}