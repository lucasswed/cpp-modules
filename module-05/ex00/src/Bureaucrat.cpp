/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:29:20 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/14 17:27:59 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {
}

Bureaucrat::Bureaucrat(std::string const& name, int const& grade) : _name(name) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
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