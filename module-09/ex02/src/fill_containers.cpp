/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_containers.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 09:02:02 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/06/09 09:23:27 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

clock_t   fill_v_container(std::vector<int>& container, char **args) {
  clock_t time;

  time = clock();
  for (int i = 0; args[i]; i++) {
    container.push_back(std::atoi(args[i]));
  }
  time = clock() - time;
  return (time);
}

clock_t  fill_l_container(std::list<int>& container, char **args) {
  clock_t time;

  time = clock();
  for (int i = 0; args[i]; i++) {
    container.push_back(std::atoi(args[i]));
  }
  time = clock() - time;
  return (time);
}
