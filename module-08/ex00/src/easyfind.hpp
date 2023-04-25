/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:08:43 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/04/25 14:38:11 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <vector>

class NumberNotFound : public std::exception
{
	public:
		virtual const char* what() const throw() {
			return ("Number does not exist in this Container!");
		};
};

template <class T>
void	easyfind(T const& container, int const& int_to_find) {
	if (find(container.begin(), container.end(), int_to_find) == container.end())
		throw NumberNotFound();
	else
		std::cout << "Number exists in Container" << std::endl;
}

#endif