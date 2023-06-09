/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:36:43 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/06/09 11:26:35 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {
}

PmergeMe::PmergeMe(PmergeMe const& src) {
  if (this != &src)
    *this = src;
}

PmergeMe::PmergeMe(char **args) {
  this->time_to_fill_v = fill_v_container(this->v_container, args);
  this->time_to_fill_l = fill_l_container(this->l_container, args);
  std::cout << "Before: ";
  this->print_vector_container(this->v_container);
  std::cout << "time to proccess vector: " << (float)time_to_fill_v/CLOCKS_PER_SEC * 1000 << "ms" << std::endl;
  std::cout << "time to proccess list: " << (float)time_to_fill_l/CLOCKS_PER_SEC * 1000 << "ms" << std::endl;
  // this->time_to_sort_v = this->sort_v_container();
  // this->time_to_sort_l = this->sort_l_container();
}

PmergeMe::~PmergeMe(void) {
}

void            PmergeMe::print_vector_container(std::vector<int> c) const {
  for (std::vector<int>::iterator i = c.begin(); i != c.end(); i++)
    std::cout << *i << " ";
  std::cout << std::endl;
}

PmergeMe&       PmergeMe::operator=()
