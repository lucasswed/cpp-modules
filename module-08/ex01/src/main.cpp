/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:39:51 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/05/02 15:52:42 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main(void) {
	try {
		Span a(5);

		a.addNumber(6);
		a.addNumber(3);
		a.addNumber(17);
		a.addNumber(9);
		a.addNumber(11);

		a.showContent();
		std::cout << std::endl;

		std::cout << a.shortestSpan() << std::endl;
		std::cout << a.longestSpan() << std::endl;

	}
	catch(std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	} 
}