/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:35:56 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/04/04 17:48:46 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <time.h>

void	identify(Base& p);
void	identify(Base* p);

Base*	generate(void) {
	Base* ret;
	int	option;
	static unsigned int	count = time(0);
	
	std::srand(count++);
	option = std::rand() % 3;
	switch (option)
	{
		case 0:
			std::cout << "generating class A" << std::endl;
			ret = new A();
			break;
		case 1:
			std::cout << "generating class B" << std::endl;
			ret = new B();
			break;
		default:
			std::cout << "generating class C" << std::endl;
			ret = new C();
			break;
	}
	return (ret);
}


int main(void) {
	Base *test = generate();
	Base *test2 = generate();
	Base *test3 = generate();

	identify(test);
	identify(test2);
	identify(test3);
	identify(*test);
	identify(*test2);
	identify(*test3);
	return (0);
}