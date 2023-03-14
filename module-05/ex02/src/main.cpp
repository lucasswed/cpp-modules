/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:14:28 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/14 17:42:07 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
	try
	{
		Bureaucrat dario("dario", 1);
		Bureaucrat rafa("rafa", 140);
		ShrubberyCreationForm max("max");
		RobotomyRequestForm junior("junior");
		PresidentialPardonForm mike("mike");
		

		std::cout << max << std::endl;
		max.be_signed(rafa);
		rafa.execute_form(max);
		// max.execute(rafa);
		// std::cout << max.get_target() << std::endl;
		// max.set_target("black");
		// std::cout << max.get_target() << std::endl;
		// max.execute(dario);
		// junior.be_signed(dario);
		// junior.execute(dario);
		// mike.be_signed(rafa);
		// mike.execute(dario);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}