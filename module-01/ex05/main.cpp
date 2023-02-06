/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:06:49 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/06 17:10:20 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int	main(void) {

	Harl	newHarl;

	newHarl.complain("DEBUG");
	newHarl.complain("INFO");
	newHarl.complain("ERROR");
	newHarl.complain("WARNING");
	newHarl.complain("STUPID");
	newHarl.complain("");
	return 0;
}