/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:08:43 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/05/12 13:46:32 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <exception>

template <typename T>
typename T::iterator	easyfind(T & container, int const& int_to_find) {
	typename T::iterator occurence = find(container.begin(), container.end(), int_to_find);
	if (occurence != container.end())
		return (occurence);
	throw std::out_of_range("Integer not found!");
}

#endif