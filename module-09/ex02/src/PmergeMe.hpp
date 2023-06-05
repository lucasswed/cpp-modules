/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:36:46 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/06/05 12:49:21 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <list>
# include <vector>
# include <string>
# include <cstdlib>
# include <iostream>

bool  is_sorted(char **args);
bool  exist_doubles(char **args);
bool  is_all_numbers(char **args);
bool  exist_overflow(char **args);

#endif