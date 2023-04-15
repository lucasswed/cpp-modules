/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 15:39:37 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/04/15 22:30:02 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Person.hpp"
#include "iter.hpp"
#include <iomanip>

/**
 * @brief	Function to turn the character passed as parameter to upperCase
 * 			using the toupper function, created to test my iter template.
 * 
 * @param c	Character to be passed to upperCase. It is a reference to change the
 * 			character in the memory and not just on the function scope.
 */
void	toUpperCase(char const& c) {
	std::cout << static_cast<char>(toupper(c));
}

void	pow2(int const&i) {
	std::cout << std::setw(2) << static_cast<int>(pow(i, 2)) << " - ";
}

void	printClass(Person const& someone) {
	std::cout << "name: " << someone.get_name() << " age: " << someone.get_age() << " job: " << someone.get_job() << std::endl;
}

int	main(void) {
	{
		char array[9] = {'a', 'b', 'c', 'd', 'g', 'j', 't', 'u', 'p'};

		for (int i = 0; i < 9; ++i)
			std::cout << array[i];
		std::cout << std::endl;
		iter<char>(array, 9, toUpperCase);
		std::cout << std::endl;
	}
	{
		int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		for (int i = 0; i < 10; i++) 
			std::cout << std::setw(2) << array[i] << " - ";
		std::cout << std::endl;
		iter<int>(array, 10, pow2);
		std::cout << std::endl;
	}
	{
		Person	array[3];
		std::string names[3] = {"John", "Paul", "Richard"};
		std::string jobs[3] = {"Programmer", "Dj", "Gardener"};
		for (int i = 0; i < 3; ++i) {
			array[i] = Person();
			array[i].set_name(names[i]);
			array[i].set_job(jobs[i]);
			array[i].set_age(i);
		}
		iter<Person>(array, 3, printClass);
	}
}