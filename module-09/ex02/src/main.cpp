/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:36:22 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/06/05 12:46:43 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static bool  check_args(char **args) {
  std::string error_msg;

  if (!is_all_numbers(args))
    error_msg = "Error! There is at least an argument that is not a number!";
  else if (exist_overflow(args))
    error_msg = "Error! There is at least an argument bigger or smaller than an integer!";
  else if (exist_doubles(args))
    error_msg = "Error! Exists duplicates on the args";
  else if (is_sorted(args))
    error_msg = "The numbers are already sorted!";
  if (error_msg.empty())
    return (true);
  std::cout << error_msg << std::endl;
  return (false);
}

int main(int ac, char **av) {
  if (ac < 3) {
    std::cout << "Wrong number of arguments!" << std::endl;
    return (1);
  }
  
  if (!check_args(av))
    return (1);
}