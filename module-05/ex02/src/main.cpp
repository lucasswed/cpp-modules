/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:14:28 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/15 13:43:35 by lucas-ma         ###   ########.fr       */
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
		Bureaucrat rafa("rafa", 140);
		Bureaucrat pedro("pedro", 60);
		Bureaucrat filipe("filipe", 10);
		Bureaucrat dario("dario", 1);
		ShrubberyCreationForm max("max");
		RobotomyRequestForm junior("junior");
		PresidentialPardonForm mike("mike");
		

		std::cout << max << std::endl << std::endl;
		max.be_signed(rafa);
		rafa.execute_form(max);
		pedro.execute_form(max);

		std::cout << std::endl << junior << std::endl << std::endl;
		junior.be_signed(pedro);
		pedro.execute_form(junior);
		filipe.execute_form(junior);

		std::cout << std::endl << mike << std::endl << std::endl;
		mike.be_signed(filipe);
		filipe.execute_form(mike);
		dario.execute_form(mike);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}