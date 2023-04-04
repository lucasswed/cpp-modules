/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:02:45 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/04/04 12:18:51 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>

int	main(void) {
	{
		Data num;
		Data *test;

		std::cout << num.get_raw() << std::endl;
		test = Serializer::deserialize(Serializer::serialize(&num));
		std::cout << test->get_raw() << std::endl;
	}
	{
		Data num2(24);
		Data *test2;

		std::cout << num2.get_raw() << std::endl;
		test2 = Serializer::deserialize(Serializer::serialize(&num2));
		std::cout << test2->get_raw() << std::endl;
	}
	{
		Data num3;
		Data *test3;

		num3.set_raw(5);
		std::cout << num3.get_raw() << std::endl;
		test3 = Serializer::deserialize(Serializer::serialize(&num3));
		std::cout << test3->get_raw() << std::endl;
	}
}