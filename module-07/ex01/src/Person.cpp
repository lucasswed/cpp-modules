/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:16:14 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/04/14 12:32:19 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Person.hpp"

Person::Person(void) {
}

Person::Person(Person const& src) {
	*this = src;
}

Person::~Person(void) {
}

Person&			Person::operator=(Person const& rhs) {
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_job = rhs._job;
		this->_age = rhs._age;
	}
	return (*this);
}

std::string	const&	Person::get_name(void) const {
	return (this->_name);
}

std::string	const&	Person::get_job(void) const {
	if (this->_job.empty())
		std::cout << "Por favor preencha o nome primeiro!" << std::endl;
	return (this->_job);
}

int	const&			Person::get_age(void) const {
	
	return (this->_age);
}

void			Person::set_name(std::string const& new_name) {
	if (new_name.empty() == false)
		this->_name = new_name;
}

void			Person::set_job(std::string const& new_job) {
	if (new_job.empty() == false)
		this->_job = new_job;
}

void			Person::set_age(int const& new_age) {
	if (new_age > 0 && new_age < 100)
		this->_age = new_age;
}