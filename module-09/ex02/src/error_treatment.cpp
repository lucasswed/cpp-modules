/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_treatment.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:01:48 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/06/05 12:55:26 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static bool str_is_num(std::string str) {
  size_t i = 0;

  if (str[0] == '-' && isdigit(str[1]))
    i++;
  for (; i < str.size(); i++)
    if (!isdigit(str[i]))
      return (false);
  return (true);
} 

static bool number_is_overflow(std::string n) {
  double number = std::strtod(n.c_str(), NULL);

  if (number > 2147483647 || number < -2147483648)
    return (true);
  return (false);
}

bool  is_all_numbers(char **args) {
  for (int i = 1; args[i]; i++)
    if (!str_is_num(args[i]))
      return (false);
  return (true);
}

bool  exist_overflow(char **args) {
  for (int i = 1; args[i]; i++)
    if (number_is_overflow(args[i]))
      return (true);
  return (false);
}

bool  exist_doubles(char **args) {
  std::string str;
  std::string str2;

  for (int i = 1; args[i]; i++) {
    str = args[i];
    for (int j = i + 1; args[j]; j++) {
      str2 = args[j];
      if (str == str2)
        return (true);
    }
  }
  return (false);
}

bool  is_sorted(char **args) {
  for (size_t i = 1; args[i + 1]; i++)
    if (std::atoi(args[i]) > std::atoi(args[i + 1]))
      return (false);
  return (true);
}