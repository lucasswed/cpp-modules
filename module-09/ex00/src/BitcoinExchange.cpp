/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:36:42 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/05/31 14:43:10 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void fill_map(std::ifstream &data, char del, std::map<std::string, float>& container) {
  
  std::string line;
  std::string key;
  std::string temp;
  float value;

  while (true) {
    std::getline(data, line);
    if (line.empty())
      break;
    std::cout << line << std::endl;
    if (check_line(line) == false) {
      key = 
    }
    key = line.substr(0, line.find(del));
    temp = line.substr(line.find(del) + 1);
    value = strtof(temp.c_str(), NULL);
    container[key] = value;
  }
}

void  import_database(std::map<std::string, float>& database) {
  std::ifstream file("data.csv");

  if (!file.is_open())
  {
    std::cout << "Can't open the data.csv file" << std::endl;
    exit(1);
  }
  fill_map(file, ',', database);
}

void  split_string(std::string const& inputDate, std::string& year, std::string& month, std::string& day) {
    std::string       token;
    std::stringstream temp(inputDate);

  for (int i = 0; i < 3; i++)
  {
    std::getline(temp, token, '-');
    if (i == 0)
      year = token;
    else if (i == 1)
      month = token;
    else
      day = token;
  }
}

bool  str_isdigit(std::string const& str) {
  for (int i = 0; str[i]; i++)
    if (!isdigit(str[i]))
      return (false);
  return (true);
}

bool check_leap_year(int year) {
  if (year % 100 == 0) {
    if (year % 400 == 0)
      return (true);
    return (false);
  } else {
    if (year % 4 == 0)
      return (true);
    return (false);
  }
}

// bool  check_date_validity(int year, int month, int day) {
//   if (check_leap_year(year) && month == 2) {
    
//   }
// }

bool  check_date(std::string const& inputDate) {
  std::string year;
  std::string month;
  std::string day;

  split_string(inputDate, year, month, day);
  if (str_isdigit(year) == false || str_isdigit(month) == false || str_isdigit(day) == false)
    return (false);
  // if (!check_date_validity(atoi(year.c_str()), atoi(month.c_str()), atoi(day.c_str())))
  //   return (false);
  std::cout << "year: " << year << " month: " << month << " day: " << day << std::endl;
  
  return (true);
}

void  import_wallet_file(std::string const& fileName, std::map<std::string, float>& wallet) {
    std::ifstream file(fileName.c_str());

  if (!file.is_open())
  {
    std::cout << "Can't open the " << fileName << " file" << std::endl;
    exit(1);
  }
  fill_map(file, '|', wallet);
}
