/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:39:39 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/03 14:42:34 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie dario("dario");
	Zombie *rafael;
	
	dario.announce();
	rafael = dario.newZombie("rafael"); 
	rafael->announce();
	delete(rafael);
	return (0);
}