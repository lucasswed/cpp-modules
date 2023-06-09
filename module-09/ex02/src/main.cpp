/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:36:22 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/06/09 16:20:06 by lucas-ma         ###   ########.fr       */
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

  PmergeMe to_sort;
  struct timeval bFillV;
  struct timeval endFillV;
  struct timeval bFillL;
  struct timeval endFillL;
  struct timeval bSortV;
  struct timeval endSortV;
  struct timeval bSortL;
  struct timeval endSortL;

  gettimeofday(&bFillV, NULL);
  fill_v_container(to_sort.getVector(), av);
  gettimeofday(&endFillV, NULL);

  gettimeofday(&bFillL, NULL);
  fill_l_container(to_sort.getList(), av);
  gettimeofday(&endFillL, NULL);

  std::cout << "Before: ";
  to_sort.print_vector();

  gettimeofday(&bSortV, NULL);
  mergeInsertionSortVector(to_sort.getVector());
  gettimeofday(&endSortV, NULL);
  
  gettimeofday(&bSortL, NULL);
  mergeInsertionSortList(to_sort.getList());
  gettimeofday(&endSortL, NULL);

  std::cout << "After: ";
  to_sort.print_vector();

  std::cout << "Time to proccess a range of " << ac - 1 << " elements using std::vector ";
  std::cout << (endFillV.tv_usec - bFillV.tv_usec) + (endSortV.tv_usec - bSortV.tv_usec);
  std::cout << " microseconds"<< std::endl;

  std::cout << "Time to proccess a range of " << ac - 1 << " elements using std::list ";
  std::cout << (endFillL.tv_usec - bFillL.tv_usec) + (endSortL.tv_usec - bSortL.tv_usec);
  std::cout << " microseconds"<< std::endl;
  return (0);
}