/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:36:42 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/05/31 19:05:54 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static bool  str_is_a_number(std::string const& str) {
  std::cout << str << std::endl;
  if (std::count(str.begin(), str.end(), '.') > 1)
    return (false);
  for (size_t i = 0; i < str.size(); i++)
    if (!isdigit(str[i]))
      return (false);
  return (true);
}

static void fill_database_map(std::ifstream &data, std::map<std::string, float>& container) {
  
  float value;
  std::string key;
  std::string line;
  std::string temp;

  while (true) {
    std::getline(data, line);
    if (line.empty())
      break;
    key = line.substr(0, line.find(','));
    temp = line.substr(line.find(',') + 1);
    value = strtof(temp.c_str(), NULL);
    container[key] = value;
  }
}

static std::string  check_key(std::string const& line) {
  std::string test_key;
  std::string test_value;

  if (std::count(line.begin(), line.end(), '|') != 1)
    return ("Error: Bad input");
  test_key = line.substr(0, line.find('|'));
  test_value = line.substr(line.find('|') + 1);
  // if (!check_date(test_key))
  //   return ("Error: Date is not valid or misformatted");
  std::cout << " test_value: " << test_value << " ";
  if (str_is_a_number(test_value) == false)
    return ("Error: value is not a number");
  if (is_value_overflow(test_value))
    return ("Error: number too large");
  if (is_value_negative(test_value))
    return ("Error: not a positive or 0 number");
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
    std::cout << line << std::endl;
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

void  import_database(std::map<std::string, float>& database) {
  std::ifstream file("data.csv");

  if (!file.is_open())
  {
    std::cout << "Can't open the data.csv file" << std::endl;
    exit(1);
  }
  fill_database_map(file, database);
}

void  import_wallet_file(std::string const& fileName, std::map<std::string, std::string>& wallet) {
    std::ifstream file(fileName.c_str());

  if (!file.is_open())
  {
    std::cout << "Can't open the " << fileName << " file" << std::endl;
    exit(1);
  }
  fill_wallet_map(file, wallet);
}
