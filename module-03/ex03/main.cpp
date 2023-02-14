/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:57:53 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/14 19:57:12 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {

	// ClapTrap	soldier("Soldier");
	// ClapTrap	general("General");
	ScavTrap	commander("Commander");

	commander.takeDamage(4);
	commander.clapTrapStat();
	commander.takeDamage(5);
	commander.clapTrapStat();
	commander.beRepaired(12);
	commander.clapTrapStat();
	commander.takeDamage(4);
	commander.clapTrapStat();
	commander.attack("Soldier");
	commander.clapTrapStat();
	for(size_t i = 0; i < 10; i++)
	{
		commander.attack("Soldier");
		commander.clapTrapStat();
	}
	commander.guardGate();
	// soldier.takeDamage(20);
	// soldier.clapTrapStat();
	// soldier.takeDamage(20);
	// soldier.clapTrapStat();
	return 0;
}
