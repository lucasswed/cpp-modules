/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_insertion.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:56:31 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/06/09 16:20:48 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void  insertionSortVector(std::vector<int>& vector) {
  for (size_t i = 1; i < vector.size(); i++) {
    int pivot = vector[i];
    int j = i - 1;

    while (j >= 0 && vector[j] > pivot) {
      vector[j + 1] = vector[j];
      j--;
    } 
    vector[j + 1] = pivot;
  }
}

void  mergeInsertionSortVector(std::vector<int>& vector) {
  if (vector.size() <= 2) {
    insertionSortVector(vector);
    return;
  }
  
  int mid = vector.size() / 2;
  std::vector<int> left(vector.begin(), vector.begin() + mid);
  std::vector<int> right(vector.begin() + mid, vector.end());

  mergeInsertionSortVector(left);
  mergeInsertionSortVector(right);

  std::merge(left.begin(), left.end(), right.begin(), right.end(), vector.begin());
}

void  insertionSortList(std::list<int>& list) {
  for (std::list<int>::iterator i = list.begin(); i != list.end(); i++) {
    int pivot = *i;
    std::list<int>::iterator j = i;

    while (j != list.begin() && *(--j) > pivot)
      *(++j) = *j;

    *(++j) = pivot;
  }
}

void  mergeInsertionSortList(std::list<int>& list) {
  if (list.size() <= 2) {
    insertionSortList(list);
    return;
  }
  
  int mid = list.size() / 2;
  std::list<int> left;
  std::list<int>::iterator it = list.begin();

  for (int i = 0; i < mid; i++) {
    left.push_back(*it);
    it++;
  }

  std::list<int> right;
  while (it != list.end()) {
    right.push_back(*it);
    it++;
  }

  mergeInsertionSortList(left);
  mergeInsertionSortList(right);

  std::merge(left.begin(), left.end(), right.begin(), right.end(), list.begin());
}