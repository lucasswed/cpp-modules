/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:31:04 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/06 17:06:16 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl(void) {
	this->init[0].name = "DEBUG";
	this->init[0].func = &Harl::debug;
	this->init[1].name = "INFO";
	this->init[1].func = &Harl::info;
	this->init[2].name = "WARNING";
	this->init[2].func = &Harl::warning;
	this->init[3].name = "ERROR";
	this->init[3].func = &Harl::error;
}

Harl::~Harl(void) {
}

void	Harl::debug(void) const {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) const {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void) const {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) const {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) {
	for (int i = 0; i < 4; i++)
	{
		if (level == this->init[i].name)
			(this->*init[i].func)();
	}
}