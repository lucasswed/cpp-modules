/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 16:14:47 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/04/06 16:34:03 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T & a, T & b) {
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T	min(T const& a, T const& b) {
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T	max(T const& a, T const& b) {
	if (a > b)
		return (a);
	else
		return (b);
}

#endif