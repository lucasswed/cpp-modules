/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 08:35:24 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/06/05 10:55:34 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.h"

int main(int ac, char **av) {
  if (ac != 2) {
    std::cout << "Wrong number of arguments!" << std::endl;
    return (1);
  }
  post_fix_eval(av[1]);
  return (0);
}