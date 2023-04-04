/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:42:43 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/04/04 17:27:11 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void	identify(Base* p) {
	A *a = dynamic_cast<A*>(p);
	if (a != NULL) {
		std::cout << "A" << std::endl;
		return ;
	}
	B *b = dynamic_cast<B*>(p);
	if (b != NULL) {
		std::cout << "B" << std::endl;
		return ;
	}
	C *c = dynamic_cast<C*>(p);
	if (c != NULL) {
		std::cout << "C" << std::endl;
		return ;
	}
}

void	identify(Base& p) {
	try {
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch(std::exception const& bc) {
		
	}
	try {
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch(std::exception const& bc) {
		
	}
	try {
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch(std::exception const& bc) {
		
	}
}