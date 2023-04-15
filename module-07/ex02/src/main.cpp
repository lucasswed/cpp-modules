/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:11:47 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/04/15 18:13:26 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Person.hpp"
#include <cstring>
#include <iostream>

void	printClass(Person& someone) {
	std::cout << "name: " << someone.get_name() << " age: " << someone.get_age() << " job: " << someone.get_job() << std::endl;
}

int main(void) {
	{
		std::cout << "With Ints" << std::endl;
		Array<int> a(3);
		for (int i = 0; i < 3; ++i) {
			a[i] = i;
		}
		for (int i = 0; i < 3; ++i) {	
			std::cout << a[i] << std::endl;
		}
		std::cout << "Size: " << a.size() << std::endl;
	}
	{
		std::cout << "With Chars" << std::endl;
		Array<char> a(3);
		for (int i = 0; i < 3; ++i) {
			a[i] = 'a' + i;
		}
		for (int i = 0; i < 3; ++i) {
			std::cout << a[i] << std::endl;
		}
		std::cout << "Size: " << a.size() << std::endl;
	}
	{
		std::cout << "With Classes" << std::endl;
		Array<Person> a(3);
		std::string names[3] = {"John", "Paul", "Richard"};
		std::string jobs[3] = {"Programmer", "Dj", "Gardener"};
		for (int i = 0; i < 3; ++i) {
			a[i] = Person();
			a[i].set_name(names[i]);
			a[i].set_job(jobs[i]);
			a[i].set_age(i);
		}
		for (int i = 0; i < 3; ++i) {
			printClass(a[i]);
		}
	}
	return (0);
}