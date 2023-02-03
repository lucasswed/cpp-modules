/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:39:39 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/03 14:59:38 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie dario("dario");
	Zombie* beatriz;
	
	beatriz = dario.zombieHorde(10, "beatriz");
	for (int i = 0; i < 10; i++)
		beatriz[i].announce();
	delete [] beatriz;
	return (0);
}