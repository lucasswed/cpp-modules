/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:29:20 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/10 17:00:10 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {
}

Bureaucrat::Bureaucrat(std::string const& name, int const& grade) : _name(name) {
	if (grade < 1)
	{
		throw GradeTooHighException();
		
	}
	else if (grade > 150)
	{
		throw GradeTooLowException();
	}
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const& src) : _name(src._name) {
	*this = src;
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat&		Bureaucrat::operator=(Bureaucrat const& rhs) {
	if (this != &rhs)
		this->_grade = rhs._grade;
	return (*this);
}

std::string const&	Bureaucrat::get_name(void) const {
	return (this->_name);
}

size_t				Bureaucrat::get_grade(void) const {
	return (this->_grade);
}

void				Bureaucrat::increment_grade(void) {
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
	else
		this->_grade--;
}

void				Bureaucrat::decrement_grade(void) {
	if (this->_grade + 1 > 150)
		throw GradeTooLowException();
	else
		this->_grade++;
}

void				Bureaucrat::sign_form(Form const& form) {
	if (form.get_is_signed() == true)
		std::cout << this->_name << " coudn't sign " << form.get_name() << " because its already signed!" << std::endl;
	else if (this->_grade >= form.get_req_grade_to_sign())
		std::cout << this->_name << " coudn't sign " << form.get_name() << " because his grade its too low!" << std::endl;
	else
		std::cout << this->_name << " sign " << form.get_name() << std::endl;
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& src) {
	o << src.get_name() << ", bureaucrat grade " << src.get_grade();
	return (o);
}

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade too high exception!");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low exception!");
}