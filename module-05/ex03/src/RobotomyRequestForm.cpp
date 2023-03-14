/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:47:49 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/14 17:09:58 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45) {
}

RobotomyRequestForm::RobotomyRequestForm(std::string const& target) : AForm("RobotomyRequestForm", 72, 45) {
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src) : AForm(src) {
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs) {
	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

void			RobotomyRequestForm::set_target(std::string const& new_target) {
	if (!new_target.empty())
		this->_target = new_target;
}

std::string		RobotomyRequestForm::get_target(void) const {
	return (this->_target);
}

void			RobotomyRequestForm::execute(Bureaucrat const& executor) const {
	if (this->get_is_signed() == true && this->get_req_grade_to_exec() > executor.get_grade())
	{
		int	chance;

		std::cout << "* Some drilling noises *" << std::endl;

		std::srand(time(NULL));
		chance = std::rand() % 2;
		if (chance)
			std::cout << this->_target << " has been robotomized successfully!" << std::endl;
		else
			std::cout << "The robotomized failed!" << std::endl;
	}
	else
	{
		if (this->get_is_signed())
			throw RobotomyBureaucratGradeException();
		else
			throw RobotomyFormSignedException();
	}
}

const char*	RobotomyRequestForm::RobotomyBureaucratGradeException::what() const throw() {
	return("Error! Bureaucrat grade is too low to execute the RobotomyRequestForm form!");
}

const char*	RobotomyRequestForm::RobotomyFormSignedException::what() const throw() {
	return ("Error! RobotomyRequestForm isn't signed when bureaucrat attempt to execute it!");
}