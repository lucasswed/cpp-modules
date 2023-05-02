/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:39:51 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/05/02 18:20:37 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <set>
#include <cstdlib>
#include <time.h>
#include "Span.hpp"

int main(void) {
	try {
		Span a(10);
		std::set<int> b;

		std::srand(time(0));
		for (int i = 0; i < 10; i++)
			b.insert(std::rand() % 1000);

		a.addNumbersRange(b.begin(), b.end());

		a.showContent();
		std::cout << std::endl;
		
		std::cout << "shortest span: " << a.shortestSpan() << std::endl;
		std::cout << "longest span: " << a.longestSpan() << std::endl;
	}
	catch(std::exception const& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "---------------------" << std::endl;
	try {
		{
			Span a(5);

			a.addNumber(6);
			a.addNumber(3);
			a.addNumber(17);
			a.addNumber(9);
			a.addNumber(11);

			a.showContent();
			std::cout << std::endl;

			std::cout << "shortest span: " << a.shortestSpan() << std::endl;
			std::cout << "longest span: " << a.longestSpan() << std::endl;
		}
		
	}
	catch(std::exception const& e) {
		std::cerr << e.what() << std::endl;
	}
}