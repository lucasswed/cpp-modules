/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:26:27 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/05/02 17:28:06 by lucas-ma         ###   ########.fr       */
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
		std::vector<int>::iterator pos = easyfind(vector_container, 1);
		std::cout << "found: " << *pos << std::endl;

		deque_container.assign(vector_container.begin(), vector_container.end());
		std::deque<int>::iterator pos2 = easyfind(deque_container, 2);
		std::cout << "Found: " << *pos2 << std::endl;

		list_container.assign(vector_container.begin(), vector_container.end());
		std::list<int>::iterator pos3 = easyfind(list_container, 3);
		std::cout << "Found: " << *pos3  << std::endl;
	}
	catch (std::exception const& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}