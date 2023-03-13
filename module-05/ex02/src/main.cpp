/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:14:28 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/11 17:41:25 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	try
	{
		Bureaucrat dario("dario", 1);
		Bureaucrat rafa("rafa", 6);
		Form		b53("b53", 6, 7);
		Form		b52(b53);

		std::cout << dario << std::endl;
		std::cout << rafa << std::endl;
		std::cout << b53 << std::endl << std::endl;

		b53.be_signed(dario);
		std::cout << b53 << std::endl;
		b53.be_signed(dario);
		std::cout << std::endl << b52 << std::endl;
		b52.be_signed(rafa);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}