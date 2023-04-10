/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 14:25:03 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/04/10 16:47:14 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>

template <typename T>
void	iter(T *addr, std::size_t size, void (*f)(T element)) {
	for (size_t i = 0; i < size; i++) {
		addr[i] = f(addr[i]);
	}
}

#endif