/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:52:31 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/14 17:23:02 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <cstdlib>
#include <time.h>

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137) {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src) : AForm(src) {
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rhs) {
	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

void		ShrubberyCreationForm::set_target(std::string const& new_target) {
	if (!new_target.empty())
		this->_target = new_target;
}

std::string	ShrubberyCreationForm::get_target(void) const {
	return (this->_target);
}

void		ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
	if (this->get_is_signed() == true && executor.get_grade() < this->get_req_grade_to_exec()) {
		int				option;
		std::string		changeable(this->_target + "_shrubbery"); //The name changeable is because it will work as file name of the output file, then the same but for the input file and then it wil work as my buffer when i read from one file to another
		std::ifstream	input_file;
		std::ofstream	output_file;
	
		//Creating and opening the output file
		output_file.open(changeable.c_str());
		if (!output_file.is_open())
			throw ShrubberyFileException();//If an error occurs during the creation or opening of the file i raise a custom exception with a custom message
		changeable.clear(); //Cleaning my string, since i don't need the value that it's storing and i want to use it again
	
		std::srand(time(0));
		option = std::rand() % 4;//Calculating a random value bettween [0:3] so i choose a different tree when i create my file
		switch (option)
		{
			case 0:
				changeable = "src/tree.txt";
				break;
			case 1:
				changeable = "src/tree1.txt";
				break;
			case 2:
				changeable = "src/tree2.txt";
				break;
			default :
				changeable = "src/tree3.txt";
				break;
		}
	
		//Opening the chosen file where my ascii tree art is
		input_file.open(changeable.c_str());
		if (!input_file.is_open())
			throw ShrubberyFileException();
		changeable.clear();
	
		std::getline(input_file, changeable, '\0');//Reading the input file till the end and put it's content in my already cleaned string
		output_file.write(changeable.c_str(), changeable.size());//Write all the content that's inside my string to my output file
	}
	else {
		if (this->get_is_signed())//Check if is signed:
			throw ShrubberyBureaucratGradeException();//If it is, raise the grade exception cause i already exclude all the other errors and its not correct otherwise the program should not get here
		else
			throw ShrubberyFormNotSignException();//If it isn't, raise the form not signed exception
	}
}

const char* ShrubberyCreationForm::ShrubberyFileException::what() const throw() {
	return ("Error while creating, writing or reading from the input file or the output file!");
}

const char* ShrubberyCreationForm::ShrubberyBureaucratGradeException::what() const throw() {
	return ("Error! Bureaucrat grade is too low to execute the ShrubberyCreationForm form!");
}

const char* ShrubberyCreationForm::ShrubberyFormNotSignException::what() const throw() {
	return ("Error! ShrubberyCreationForm isn't signed when bureaucrat attempt to execute it!");
}