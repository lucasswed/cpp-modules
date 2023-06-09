/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_containers.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 09:02:02 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/06/09 15:53:12 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void   fill_v_container(std::vector<int>& container, char **args) {
  for (int i = 1; args[i]; i++)
    container.push_back(std::atoi(args[i]));
}

void  fill_l_container(std::list<int>& container, char **args) {
  for (int i = 1; args[i]; i++)
    container.push_back(std::atoi(args[i]));
}
