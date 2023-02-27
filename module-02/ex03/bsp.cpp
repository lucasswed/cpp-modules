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

bool	is_point_valid(Point const& p1, Point const& p2, Point const& p3, Point const& point) {
	//y = mx + b
	//mx + b - y = 0
	Fixed	m;
	Fixed	b;

	if ((p1.get_x() - p2.get_x()) != 0)
		m = ((p1.get_y() - p2.get_y()) / (p1.get_x() - p2.get_x()));
	else
		if (point.get_x() == p1.get_x())
			return (false);
	b = ((m * p1.get_x()) - p1.get_y()) * -1;
	if ((m * point.get_x()) + b - point.get_y() == 0)
		return (false);
	else if (((m * point.get_x()) + b - point.get_y() > 0) && ((m * p3.get_x()) + b - p3.get_y() > 0))
		return (true);
	else if (((m * point.get_x()) + b - point.get_y() < 0) && ((m * p3.get_x()) + b - p3.get_y() < 0))
		return (true);
	return (false);
}

bool	bsp(Point const& a, Point const& b, Point const& c, Point const& point) {
	// ab ac bc
	if (!is_point_valid(a, b, c, point))
		return (false);
	if (!is_point_valid(a, c, b, point))
		return (false);
	if (!is_point_valid(b, c, a, point))
		return (false);
	return (true);
}
