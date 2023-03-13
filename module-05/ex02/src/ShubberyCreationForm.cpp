/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShubberyCreationForm.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:52:31 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/13 17:04:40 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <random>

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137) {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src) : AForm(src) {
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rhs) {
	if (this != &rhs)
		this->set_is_signed(rhs.get_is_signed());
	return (*this);
}

void		ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
	std::ifstream input_file;
	std::ofstream output_file;
	std::string	  temp;
	std::string file_name = this->_target + "_shrubbery";
	int	option = std::rand() % 4;

	output_file = std::ofstream(file_name.c_str());
	
	if (!output_file.is_open())
		throw ShrubberyFileException();
	switch (option)
	{
		case 0:
			input_file = std::ifstream("tree.txt");
			if (!input_file.is_open())
				throw ShrubberyFileException();
			break;
		case 1:
			input_file = std::ifstream("tree1.txt");
			if (!input_file.is_open())
				throw ShrubberyFileException();
			break;
		case 2:
			input_file = std::ifstream("tree2.txt");
			if (!input_file.is_open())
				throw ShrubberyFileException();
			break;
		default :
			input_file = std::ifstream("tree3.txt");
			if (!input_file.is_open())
				throw ShrubberyFileException();
			break;
	}
	std::getline(std::cin, temp, '\0');
	output_file.write(temp.c_str(), temp.length());
}

const char* ShrubberyCreationForm::ShrubberyFileException::what() const throw() {
	return ("Error while creating, writing or reading from the input file or the output file!");
}