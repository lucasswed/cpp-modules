/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:31:34 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/08 17:02:38 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool bsp(Point const& a, Point const& b, Point const& c, Point const& point);

int	main(void) {
	Point	a(0.0f, 0.0f);
	Point	b(4.0f, 0.0f);
	Point	c(2.0f, 3.0f);
	Point	point(1.0f, 1.0f);

	if (bsp(a, b, c, point) == true)
		std::cout << "The point belongs to the triangle" << std::endl;
	else
		std::cout << "The point is OUT!" << std::endl;
	Point	d(2.0f, 1.0f);
	if (bsp(a, b, c, d) == true)
		std::cout << "The point belongs to the triangle" << std::endl;
	else
		std::cout << "The point is OUT!" << std::endl;
	Point	newPoint(0.0f, 2.0f);
	if (bsp(a, b, c, newPoint) == true)
		std::cout << "The point belongs to the triangle" << std::endl;
	else
		std::cout << "The point is OUT!" << std::endl;
	Point	nPoint(5.0f, 2.0f);
	if (bsp(a, b, c, nPoint) == true)
		std::cout << "The point belongs to the triangle" << std::endl;
	else
		std::cout << "The point is OUT!" << std::endl;
	return 0;
}
