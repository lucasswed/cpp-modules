/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:04:30 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/06/05 08:27:42 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

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

static bool  str_is_num(std::string const& str) {
  if (std::count(str.begin(), str.end(), '.') > 1)
    return (false);
  for (size_t i = 0; i < str.size(); i++)
    if (!std::isdigit(str[i]) && str[i] != '.' && str[i] != '-')
      return (false);
  return (true);
}

static bool number_is_valid(float number) {
  if (number >= 1000 || number < 0)
    return (true);
  return (false);
}

bool  check_line(std::string line) {
  if (std::count(line.begin(), line.end(), '|') != 1) {
    std::cout << "Error, Bad input =>";
    return (false);
  }
  std::string key;
  std::string value;  
  
  key = line.substr(0, line.find('|') - 1);
  value = line.substr(line.find('|') + 2);
  if (!str_is_num(value)) {
    std::cout << "Error, value's not a number =>";
    return (false);
  }
  if (number_is_valid(std::strtof(value.c_str(), NULL))) {
    std::cout << "Error, number is too large or negative =>";
    return (false);
  }
  
  if (!check_date(key)) {
    std::cout << "Error, date is not valid =>";
    return (false);
  }
  return (true);
}

void  import_wallet_file(std::string const& fileName, std::map<std::string, float>& database) {
  std::ifstream file(fileName.c_str());
  std::string key;
  std::string line;
  std::string value;

  if (!file.is_open())
  {
    std::cout << "Can't open the " << fileName << " file" << std::endl;
    exit(1);
  }

  while (true) {
    std::getline(file, line);
    if (line.empty())
      break;
    if (line.compare("date | value") == 0)
      continue;
    if (check_line(line))
    {
      key = line.substr(0, line.find('|') - 1);
      value = line.substr(line.find('|') + 1);
      do_the_conversion(key, std::strtof(value.c_str(), NULL), database);
    }
    else
      std::cout << " " << line << std::endl;
  }
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
