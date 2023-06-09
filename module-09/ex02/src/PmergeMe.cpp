/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:36:43 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/06/09 15:53:30 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {
}

PmergeMe::PmergeMe(PmergeMe const& src) {
  *this = src;
}

PmergeMe::~PmergeMe(void) {
}

void            PmergeMe::print_vector(void) const {
  for (std::vector<int>::const_iterator i = this->v_container.begin(); i != this->v_container.end(); i++)
    std::cout << *i << " ";
  std::cout << std::endl;
}

void            PmergeMe::print_list(void) const {
  for (std::list<int>::const_iterator it = this->l_container.begin(); it != this->l_container.end(); it++)
    std::cout << *it << " ";
  std::cout << std::endl;
}

PmergeMe&       PmergeMe::operator=(PmergeMe const& rhs) {
  if (this != &rhs) {
    this->l_container = rhs.l_container;
    this->v_container = rhs.v_container;
  }
  return (*this);
}

std::vector<int>&  PmergeMe::getVector(void) {
  return (this->v_container);
}

std::list<int>&   PmergeMe::getList(void) {
  return (this->l_container);
}
