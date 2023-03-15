/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:24:42 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/15 14:45:15 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "Good cat and animal:" << std::endl << std::endl;
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << std::endl;
	std::cout << meta->get_type() << " is the type of meta variable;" << std::endl;
	std::cout << dog->get_type() << " is the type of dog variable;" << std::endl;
	std::cout << cat->get_type() << " is the type of cat variable;" << std::endl;
	std::cout << std::endl;
	std::cout << cat->get_type() << " says: ";
	cat->makeSound();
	std::cout << dog->get_type() << " says: ";
	dog->makeSound();
	std::cout << meta->get_type() << " says: ";
	meta->makeSound();
	std::cout << std::endl;
	delete meta;
	delete dog;
	delete cat;
	
	std::cout << std::endl << "Wrong cat and animal:" << std::endl << std::endl;
	meta = new Animal();
	dog = new Dog();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << std::endl;
	std::cout << meta->get_type() << " is the type of meta variable;" << std::endl;
	std::cout << dog->get_type() << " is the type of dog variable;" << std::endl;
	std::cout << wrongCat->get_type() << " is the type of wrongCat variable;" << std::endl;
	std::cout << std::endl;
	std::cout << wrongCat->get_type() << " says: ";
	wrongCat->makeSound();
	std::cout << dog->get_type() << " says: ";
	dog->makeSound();
	std::cout << meta->get_type() << " says: ";
	meta->makeSound();
	std::cout << std::endl;
	delete meta;
	delete dog;
	delete wrongCat;

	return 0;
}