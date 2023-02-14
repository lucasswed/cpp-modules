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

bool bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void) {

	Point	a(0.0, 0.0);
	Point	b(2.0, 0.0);
	Point	c(1.0, 2.0);
	Point	point(1.0f, 1.0f);

	if (bsp(a, b, c, point) == true)
		std::cout << "The point belongs to the triangle" << std::endl;
	else
		std::cout << "The point is OUT!" << std::endl;
	Point	d(4.2f, 2.25f);
	d = point;
	if (bsp(a, b, c, d) == true)
		std::cout << "The point belongs to the triangle" << std::endl;
	else
		std::cout << "The point is OUT!" << std::endl;
	Point	newPoint(-157.5f, -200.5f);
	if (bsp(a, b, c, newPoint) == true)
		std::cout << "The point belongs to the triangle" << std::endl;
	else
		std::cout << "The point is OUT!" << std::endl;
	return 0;
}
