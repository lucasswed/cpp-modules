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

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	// Calculate barycentric coordinates
	Fixed lambda1(((b.get_y() - c.get_y()) * (point.get_x() - c.get_x()) + (c.get_x() - b.get_x()) * (point.get_y() - c.get_y())) / ((b.get_y() - c.get_y()) * (a.get_x() - c.get_x()) + (c.get_x() - b.get_x()) * (a.get_y() - c.get_y())));
	Fixed lambda2(((c.get_y() - a.get_y()) * (point.get_x() - c.get_x()) + (a.get_x() - c.get_x()) * (point.get_y() - c.get_y())) / ((b.get_y() - c.get_y()) * (a.get_x() - c.get_x()) + (c.get_x() - b.get_x()) * (a.get_y() - c.get_y())));
	Fixed lambda3(1);
	Fixed lambda4(lambda3 - lambda1 - lambda2);
	if (lambda1 >= 0 && lambda2 >= 0 && lambda4 >= 0) { //Check if the point is inside the triangle
		if (lambda1 == 0 || lambda2 == 0 || lambda4 == 0) // Check if the point is on an edge or a vertex
			return (false);
		return (true);
	}
	else
		return (false);
}