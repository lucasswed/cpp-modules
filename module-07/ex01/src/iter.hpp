/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 14:25:03 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/04/15 22:22:53 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <cstring>
# include <string>
# include <cmath>

template <typename T>
void	iter(T *addr, size_t length, void (*f)(T const&)) {
	for (size_t i = 0; i < length; i++)
		f(addr[i]);
}

#endif