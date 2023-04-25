/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:26:27 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/04/25 17:12:19 by lucas-ma         ###   ########.fr       */
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
		// std::list<int> list_container;
		std::deque<int>::iterator pos;

		for (int i = 0; i < 5; i++)
			vector_container.push_back(i);
		// for (std::deque<int>::iterator i = deque_container.begin(); i != deque_container.end(); i++)
			// std::cout << *i << std::endl;
		// easyfind(vector_container, 1);
		// easyfind(deque_container, 2);
		// easyfind(list_container, 3);
	}
	catch (std::exception const& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}