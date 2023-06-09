/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:36:46 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/06/09 11:25:59 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <list>
# include <ctime>
# include <vector>
# include <string>
# include <cstdlib>
# include <iostream>

bool  is_sorted(char **args);
bool  exist_doubles(char **args);
bool  is_all_numbers(char **args);
bool  exist_overflow(char **args);

clock_t  fill_l_container(std::list<int>& container, char **args);
clock_t  fill_v_container(std::vector<int>& container, char **args);

class PmergeMe {
  private:
    PmergeMe(void);
    clock_t           time_to_fill_v;
    clock_t           time_to_fill_l;
    clock_t           time_to_sort_v;
    clock_t           time_to_sort_l;
    std::vector<int>  v_container;
    std::list<int>    l_container;

  public:
    PmergeMe(char **args);
    PmergeMe(PmergeMe const& src);
    ~PmergeMe(void);
    

    void              print_vector_container(std::vector<int> c) const;
    PmergeMe&         operator=(PmergeMe const& rhs);
    clock_t const&    getTimeToFill(int option) const;
    clock_t const&    getTimeToSort(int option) const;
};

#endif