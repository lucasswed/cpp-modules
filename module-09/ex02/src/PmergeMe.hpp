/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:36:46 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/06/09 15:49:02 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <list>
# include <vector>
# include <string>
# include <cstdlib>
# include <iostream>
# include <algorithm>
# include <sys/time.h>

bool            is_sorted(char **args);
bool            exist_doubles(char **args);
bool            is_all_numbers(char **args);
bool            exist_overflow(char **args);

void            mergeInsertionSortVector(std::vector<int>& vector);
void            mergeInsertionSortList(std::list<int>& list);

void            fill_l_container(std::list<int>& container, char **args);
void            fill_v_container(std::vector<int>& container, char **args);

unsigned long	get_timer(void);

class PmergeMe {
  private:
    std::vector<int>  v_container;
    std::list<int>    l_container;

  public:
    PmergeMe(void);
    PmergeMe(PmergeMe const& src);
    ~PmergeMe(void);
    

    PmergeMe&         operator=(PmergeMe const& rhs);

    std::vector<int>& getVector(void);
    std::list<int>&   getList(void);

    void             print_vector(void) const;
    void             print_list(void) const;
};

#endif