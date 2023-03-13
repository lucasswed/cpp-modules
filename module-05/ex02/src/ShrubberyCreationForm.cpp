/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:52:31 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/13 17:25:43 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <cstdlib>

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

	(void)executor;
	output_file.open(file_name);
	file_name.clear();
	if (!output_file.is_open())
		throw ShrubberyFileException();
	switch (option)
	{
		case 0:
			file_name = "tree.txt";
			break;
		case 1:
			file_name = "tree1.txt";
			break;
		case 2:
			file_name = "tree2.txt";
			break;
		default :
			file_name = "tree3.txt";
			break;
	}
	input_file.open(file_name);
	if (!input_file.is_open())
		throw ShrubberyFileException();
	std::getline(std::cin, temp, '\0');
	output_file.write(temp.c_str(), temp.length());
}

const char* ShrubberyCreationForm::ShrubberyFileException::what() const throw() {
	return ("Error while creating, writing or reading from the input file or the output file!");
}