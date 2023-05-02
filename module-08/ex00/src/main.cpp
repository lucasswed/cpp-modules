/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:26:27 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/04/26 11:42:14 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include "easyfind.hpp"

int main(void) {
	try {
		std::vector<int> vector_container;
		std::deque<int> deque_container;
		std::list<int> list_container;

		for (int i = 0; i < 5; i++)
			vector_container.push_back(i);
		if (easyfind(vector_container, 1) == vector_container.end())
			std::cout << "found" << std::endl;

		deque_container.assign(vector_container.begin(), vector_container.end());
		if (easyfind(deque_container, 2) == deque_container.end())
			std::cout << "Found" << std::endl;

		list_container.assign(vector_container.begin(), vector_container.end());
		std::list<int>::iterator pos = easyfind(list_container, 3);
		if (pos == list_container.end())
			std::cout << "Found: " << *pos  << std::endl;
	}
	catch (std::exception const& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}