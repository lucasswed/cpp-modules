/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:13:03 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/17 15:17:42 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void) {
}

Intern::Intern(Intern const& src) {
	*this = src;
}

Intern::~Intern(void) {
}

Intern&	Intern::operator=(Intern const& rhs) {
	(void)rhs;
	return (*this);
}

AForm*	Intern::makeForm(std::string const& form_name, std::string const& target) {
	enum {
		shrubbery,
		robotomy,
		presidential
	};
	std::string forms[3] = {"shrubbery request", "robotomy request", "presidential pardon"};
	int	form_index = -1;
	while (++form_index < 3)
		if (forms[form_index] == form_name)
			break;
	AForm* to_ret; 
	switch (form_index)
	{
		case shrubbery:
			to_ret = new ShrubberyCreationForm(target);
			break;
		case robotomy:
			to_ret = new RobotomyRequestForm(target);
			break;
		case presidential:
			to_ret = new PresidentialPardonForm(target);
			break;
		default:
			throw WrongFormNameException();
	}
	std::cout << "Intern creates " << *to_ret << std::endl;
	return (to_ret);
}

const char*	Intern::WrongFormNameException::what() const throw() {
	return ("Form name passed as argument does not exist!");
}