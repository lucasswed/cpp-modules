/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:38:10 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/14 17:10:24 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(std::string const& target) : AForm("PresidentialPardonForm", 25, 5) {
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src) : AForm(src) {
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const& rhs) {
	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

std::string		PresidentialPardonForm::get_target(void) const {
	return (this->_target);
}

void			PresidentialPardonForm::set_target(std::string const& new_target) {
	if (!new_target.empty())
		this->_target = new_target;
}

void			PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	if (this->get_is_signed() == true && this->get_req_grade_to_exec() > executor.get_grade())
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	else
	{
		if (this->get_is_signed())
			throw PresidentialBureaucratGradeException();
		else
			throw PresidentialFormSignException();
	}
}

const char*		PresidentialPardonForm::PresidentialBureaucratGradeException::what() const throw() {
	return ("Error! Bureaucrat's grade is too low to execute the PresidentialPardonForm!");
}

const char*		PresidentialPardonForm::PresidentialFormSignException::what() const throw() {
	return ("Error! PresidentialPardonForm form isn't sign when bureaucrat attempt to execute it!");
}