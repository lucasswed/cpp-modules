/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 17:07:17 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/10 17:07:17 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	is_point_valid(Point const& p1, Point const& p2, Point const& p3, Point const& point)
{
	//y = mx + b
	//mx + b - y = 0
	Fixed	m((p1.get_y() - p2.get_y()) / (p1.get_x() - p2.get_x()));
	Fixed	b((m * p1.get_x()) - p1.get_y() * -1);
	if ((m * point.get_x()) + b - point.get_y() == 0)
		return (false);
	else if ((m * point.get_x()) + b - point.get_y() > 0 && (m * p3.get_x()) + b - p3.get_y() > 0)
		return (true);
	else if ((m * point.get_x()) + b - point.get_y() < 0 && (m * p3.get_x()) + b - p3.get_y() < 0)
		return (true);
	return (false);
}

bool	bsp(Point const& a, Point const& b, Point const& c, Point const& point) {
	// ab ac bc
	if (is_point_valid(a, b, c, point) && is_point_valid(a, c, b, point) && is_point_valid(b, c, a, point))
		return (true);
	return (false);
}


// Calculate barycentric coordinates
// 	Fixed lambda1(((b.get_y() - c.get_y()) * (point.get_x() - c.get_x()) + (c.get_x() - b.get_x()) * (point.get_y() - c.get_y())) / ((b.get_y() - c.get_y()) * (a.get_x() - c.get_x()) + (c.get_x() - b.get_x()) * (a.get_y() - c.get_y())));
// Fixed lambda2(((c.get_y() - a.get_y()) * (point.get_x() - c.get_x()) + (a.get_x() - c.get_x()) * (point.get_y() - c.get_y())) / ((b.get_y() - c.get_y()) * (a.get_x() - c.get_x()) + (c.get_x() - b.get_x()) * (a.get_y() - c.get_y())));
// Fixed lambda3(1);
// Fixed lambda4(lambda3 - lambda1 - lambda2);
// if (lambda1 >= 0 && lambda2 >= 0 && lambda4 >= 0) { //Check if the point is inside the triangle
// 	if (lambda1 == 0 || lambda2 == 0 || lambda4 == 0) // Check if the point is on an edge or a vertex
// 		return (false);
// 	return (true);
// }
// else	
// 	return (false);
