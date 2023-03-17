/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:14:28 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/17 15:15:08 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {
	try
	{
		Bureaucrat steve("Steve", 2);
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		if (rrf != NULL)
		{
			rrf->be_signed(steve);
			steve.execute_form(*rrf);
			delete rrf;
		}
		rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
		if (rrf != NULL)
		{
			rrf->be_signed(steve);
			steve.execute_form(*rrf);
			delete rrf;
		}
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		if (rrf != NULL)
		{
			rrf->be_signed(steve);
			steve.execute_form(*rrf);
			delete rrf;
		}
		rrf = someRandomIntern.makeForm("Wrong file", "Bender");
		if (rrf != NULL)
		{
			rrf->be_signed(steve);
			steve.execute_form(*rrf);
			delete rrf;
		}
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}