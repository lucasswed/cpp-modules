/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:36:56 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/15 15:17:33 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include <iostream>


int	main(void) {

	IMateriaSource* oldsrc = new MateriaSource();
	AMateria* test = NULL;
	oldsrc->learnMateria(test);
	oldsrc->learnMateria(new Ice());
	oldsrc->learnMateria(new Cure());
	oldsrc->learnMateria(new Ice());
	oldsrc->learnMateria(new Cure());
	oldsrc->learnMateria(new Cure());

	IMateriaSource* src = new MateriaSource(*(MateriaSource*)oldsrc);

	ICharacter* me = new Character("me");
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("rainbow power");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	ICharacter* charles = new Character(*(Character*)me);
	std::cout << "slot 0" << std::endl;
	charles->use(0, *bob);
	std::cout << "slot 1" << std::endl;
	charles->use(1, *bob);
	std::cout << "slot 2" << std::endl;
	charles->use(2, *bob);
	std::cout << "slot 3" << std::endl;
	charles->use(3, *bob);
	std::cout << "slot 4?" << std::endl;
	charles->use(4, *bob);

	delete bob;
	delete charles;
	delete me;
	delete src;
	delete oldsrc;
	return 0;
}

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
	
// 	ICharacter* me = new Character("me");

// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	ICharacter* bob = new Character("bob");

// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	delete bob;
// 	delete me;
// 	delete src;

// 	return 0;
// }