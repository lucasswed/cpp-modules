/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   antigo.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:36:42 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/06/01 15:44:12 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static bool  str_is_a_number(std::string const& str) {
  if (std::count(str.begin(), str.end(), '.') > 1)
    return (false);
  for (size_t i = 0; i < str.size(); i++)
    if (!isdigit(str[i]))
      return (false);
  return (true);
}

static std::string  check_key(std::string const& line) {
  std::string test_key;
  std::string test_value;

  if (std::count(line.begin(), line.end(), '|') != 1)
    return ("Error: Bad input");
  std::cout << line << std::endl << std::endl;
  test_key = line.substr(0, line.find('|') - 1);
  test_value = line.substr(line.find('|') + 2);
  // if (!check_date(test_key))
  //   return ("Error: Date is not valid or misformatted");
  std::cout << "test_value: " << test_value << std::endl;
  std::cout << "test_key: " << test_key << std::endl << std::endl;

  if (!str_is_a_number(test_value))
    return ("Error: value is not a number");
  // if (is_value_overflow(test_value))
  //   return ("Error: number too large");
  // if (is_value_negative(test_value))
  //   return ("Error: not a positive or 0 number");
  return (test_key);
}

static void fill_wallet_map(std::ifstream &data, std::map<std::string, std::string>& container) {
  
  std::string key;
  std::string line;
  std::string value;

  while (true) {
    std::getline(data, line);
    if (line.empty())
      break;
    key = check_key(line);
    if (std::strstr(key.c_str(), "Error") != NULL)
      value = line;
    else
      value = line.substr(line.find('|') + 1);
    container[key] = value;
  }
}

bool  is_value_overflow(std::string const& number) {
  double  n = std::strtod(number.c_str(), NULL);

  if (n > 2146473647.0)
    return (true);
  return (false);
}

bool  is_value_negative(std::string const& n) {
  double  number = std::strtod(n.c_str(), NULL);

  if (number < 0)
    return (true);
  return (false);
}
