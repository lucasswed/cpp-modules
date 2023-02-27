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

	Point	a(1, 1);
	Point	b(1, 5);
	Point	c(5, 3);
	Point	point(2.0f, 2.0f); //belong

	if (bsp(a, b, c, point) == true)
		std::cout << "The point belongs to the triangle" << std::endl;
	else
		std::cout << "The point is OUT!" << std::endl;
	Point	mpoint(3.0f, 2.0f); //dont belong, its part of the line

	if (bsp(a, b, c, mpoint) == true)
		std::cout << "The point belongs to the triangle" << std::endl;
	else
		std::cout << "The point is OUT!" << std::endl;
	Point	d(3.0f, 3.0f); //belong
	d = point;
	if (bsp(a, b, c, d) == true)
		std::cout << "The point belongs to the triangle" << std::endl;
	else
		std::cout << "The point is OUT!" << std::endl;
	Point	newPoint(-157.5f, -200.5f); //dont belong
	if (bsp(a, b, c, newPoint) == true)
		std::cout << "The point belongs to the triangle" << std::endl;
	else
		std::cout << "The point is OUT!" << std::endl;
	return 0;
}
