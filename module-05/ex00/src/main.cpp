/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:14:28 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/07 16:55:40 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	try
	{
		Bureaucrat dario("dario", 1);
		Bureaucrat rafa("rafa", 150);
		Bureaucrat pedro("pedro", 5);
		Bureaucrat ricardo("ricardo", 25);

		std::cout << dario << std::endl;
		std::cout << rafa << std::endl;
		std::cout << pedro << std::endl;
		std::cout << ricardo << std::endl;
		// rafa.decrement_grade();
		// dario.increment_grade();
		pedro.increment_grade();
		ricardo.decrement_grade();
		std::cout << std::endl << dario << std::endl;
		std::cout << rafa << std::endl;
		std::cout << pedro << std::endl;
		std::cout << ricardo << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}