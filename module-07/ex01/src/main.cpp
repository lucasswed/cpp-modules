/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 15:39:37 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/04/14 13:40:45 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Person.hpp"
#include "iter.hpp"

/**
 * @brief	Function to turn the character passed as parameter to upperCase
 * 			using the toupper function, created to test my iter template.
 * 
 * @param c	Character to be passed to upperCase. It is a reference to change the
 * 			character in the memory and not just on the function scope.
 */
void	toUpperCase(char &c) {
	c = toupper(c);
}

void	pow2(int &i) {
	i = static_cast<int>(pow(i, 2));
}

void	printClass(Person& someone) {
	std::cout << "name: " << someone.get_name() << " age: " << someone.get_age() << " job: " << someone.get_job() << std::endl;
}

int	main(void) {
	{
		char array[9] = {'a', 'b', 'c', 'd', 'g', 'j', 't', 'u', 'p'};

		for (int i = 0; i <= 9; i++) 
			std::cout << array[i] << std::endl;

		iter<char>(array, strlen(array), toUpperCase);

		for (int i = 0; i < 10; i++) 
			std::cout << array[i] << std::endl;
	}
	{
		int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		for (int i = 0; i <= 10; i++) 
			std::cout << array[i] << std::endl;
		iter<int>(array, 10, pow2);
		for (int i = 0; i < 10; i++) 
			std::cout << array[i] << std::endl;
	}
	{
		Person	array[3];
		std::string temp;
		for (int i = 0; i < 3; i++){
			std::cout << "Choose a name to this person: ";
			std::getline(std::cin >> std::ws, temp);
			array[i].set_name(temp);
			temp.clear();
			std::cout << "Tell me the job for this person: ";
			std::getline(std::cin >> std::ws, temp);
			array[i].set_job(temp);
			temp.clear();
			std::cout << "What's the age of this person? ";
			do {
				std::getline(std::cin >> std::ws, temp);
				for (size_t i = 0; i < temp.size(); i++)
					if (!isdigit(temp[i]))
						temp.clear();
			} while (temp.empty());
			array[i].set_age(atoi(temp.c_str()));
		}
		iter<Person>(array, 3, printClass);
	}
}