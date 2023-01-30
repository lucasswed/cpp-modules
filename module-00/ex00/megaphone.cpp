/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:06:31 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/01/30 18:28:55 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av) {
	if (ac > 1)
	{
		std::string str;
		for (int i = 1; i < ac; i++)
		{
			str = av[i];
			for (size_t j = 0; j < str.size(); j++)
				str[j] = toupper(str[j]);
			std::cout << str;
		}
		std::cout << std::endl;
		return (0);
	}
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}


