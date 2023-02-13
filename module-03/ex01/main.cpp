/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:57:53 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/13 15:00:26 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void) {

	ClapTrap	soldier("Soldier");
	ClapTrap	general("General");

	soldier.takeDamage(4);
	general = soldier;
	general.clapTrapStat();
	general.takeDamage(5);
	general.clapTrapStat();
	general.beRepaired(12);
	general.clapTrapStat();
	general.takeDamage(4);
	general.clapTrapStat();
	general.attack("Soldier");
	general.clapTrapStat();
	for(size_t i = 0; i < 10; i++)
	{
		general.attack("Soldier");
		general.clapTrapStat();
	}
	soldier.takeDamage(20);
	soldier.clapTrapStat();
	soldier.takeDamage(20);
	soldier.clapTrapStat();
	soldier.beRepaired(10);
	soldier.clapTrapStat();
	return 0;
}
