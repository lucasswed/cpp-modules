/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:13:27 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/08 17:36:39 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
	private:
		Fixed const	x;
		Fixed const	y;

	public:
		Point(void);
		Point(Point const& src);
		Point(float const& x, float const& y);
		~Point(void);
		Point&	operator=(Point const& rhs);
		Fixed	get_x(void) const;
		Fixed	get_y(void) const;
};

#endif