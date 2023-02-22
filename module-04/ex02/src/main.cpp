/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:24:42 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/22 16:45:52 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Animal* farm[10];

	for (size_t i = 0; i < 10; i++)
	{
		if (i < 5)
			farm[i] = new Cat;
		else
			farm[i] = new Dog;
	}
	std::cout << "first element of farm is a " << farm[0]->get_type() << " and last is a " << farm[9]->get_type() << std::endl << std::endl;
	
	// //************** CAT COPY TESTS ********************

		std::cout << ((Cat*)farm[0])->get_idea(0) << std::endl << std::endl;

		Animal	*testCat = new Cat(*(Cat*)farm[0]);

		((Cat*)farm[0])->set_idea(0, "WOLOLOLO I'm a cat!");

		std::cout << ((Cat*)farm[0])->get_idea(0) << std::endl;

		std::cout << ((Cat*)testCat)->get_idea(0) << std::endl;

		delete testCat;
	
	//************** DOG COPY TESTS ********************
	
		std::cout << std::endl << ((Dog*)farm[9])->get_idea(10) << std::endl << std::endl;

		Animal	*testDog = new Dog(*((Dog*)farm[9]));

		((Dog*)farm[9])->set_idea(10, "WEEEEEE I'm a dog!");

		std::cout << ((Dog*)farm[9])->get_idea(10) << std::endl;

		std::cout << ((Dog*)testDog)->get_idea(10) << std::endl;

		delete testDog;
	
		for (size_t i = 0; i < 10; i++)
			delete farm[i];
	
	//************** SUBJECT TESTS *********************

		const Animal* j = new Dog();

		const Animal* i = new Cat();
		
		delete j;

		delete i;

	return 0;
}