/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:56:31 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/11 17:38:51 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(void) : _req_grade_to_sign(0), _req_grade_to_exec(0) {
}

AForm::AForm(AForm const& src) : _name(src._name),  _req_grade_to_sign(src._req_grade_to_sign), _req_grade_to_exec(src._req_grade_to_exec) {
	*this = src;
}

AForm::AForm(std::string const& name, int to_sign, int to_exec) : _name(name), _req_grade_to_sign(to_sign), _req_grade_to_exec(to_exec) {
	if (to_sign > 150 || to_exec > 150)
		throw GradeTooLowException();
	else if (to_sign <= 0 || to_exec <= 0)
		throw GradeTooHighException();
	_is_signed = false;
}

AForm::~AForm(void) {
}

AForm&	AForm::operator=(AForm const& rhs) {
	if (this != &rhs)
		this->_is_signed = rhs._is_signed;
	return (*this);
}

std::string const&	AForm::get_name(void) const {
	return (this->_name);
}

bool				AForm::get_is_signed(void) const {
	return (this->_is_signed);
}

void				AForm::set_is_signed(bool const& is_signed) {
	this->_is_signed = is_signed;
}

size_t const&		AForm::get_req_grade_to_sign(void) const {
	return (this->_req_grade_to_sign);
}

size_t const&		AForm::get_req_grade_to_exec(void) const {
	return (this->_req_grade_to_exec);
}

void				AForm::be_signed(Bureaucrat const& bureaucrat) {
	if (this->_is_signed == false)
	{
		if (bureaucrat.get_grade() >= this->_req_grade_to_sign)
		{
			bureaucrat.sign_form(*this);
			throw GradeTooLowException();
		}
		else
		{
			bureaucrat.sign_form(*this);
			this->_is_signed = true;
		}
	}
	else
		bureaucrat.sign_form(*this);
}

std::ostream&	operator<<(std::ostream& o, AForm const& src) {
	o << src.get_name() << ", form with required grade to sign " << src.get_req_grade_to_sign() << " and required grade to execute ";
	if (src.get_is_signed())
		o << src.get_req_grade_to_exec() << " is signed!";
	else
		o << src.get_req_grade_to_exec() << " is not signed!";
	return (o);
}

const char* AForm::GradeTooLowException::what() const throw() {
		return ("Grade too low exception!");
}

const char* AForm::GradeTooHighException::what() const throw() {
	return ("Grade too high exceprtion!");
}
