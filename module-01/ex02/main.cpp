/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:12:03 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/03 15:44:36 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string* str_ptr = &str;
	std::string& str_ref = str;

	std::cout << "The memory address of the string variable " << &str << std::endl;
	std::cout << "The memory address held by string pointer " << str_ptr << std::endl;
	std::cout << "The memory address held by string reference " << &str_ref << std::endl;
	std::cout << "The value of the string variable " << str << std::endl;
	std::cout << "The value pointed to by string pointer " << *str_ptr << std::endl;
	std::cout << "The value pointed to by string reference " << str_ref << std::endl;
	return (0);
}