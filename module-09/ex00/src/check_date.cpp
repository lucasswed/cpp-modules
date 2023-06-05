/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_date.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:18:13 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/06/02 10:37:56 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static bool  str_is_int(std::string const& str) {
  for (int i = 0; str[i]; i++)
    if (!isdigit(str[i]))
      return (false);
  return (true);
}

static bool check_leap_year(int year) {
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

void  split_date_string(std::string const& inputDate, std::string& year, std::string& month, std::string& day) {
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

static bool  check_date_validity(int year, int month, int day) {
  int max_day = 0;

  if (year < 0 || month < 0 || day < 0 || year > 2023)
    return (false);
  if (check_leap_year(year) && month == 2)
    max_day = 29;
  else {
    switch (month)
    {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
        max_day++;
      case 4:
      case 6:
      case 9:
      case 11:
        max_day += 2;
      case 2:
        max_day += 28;
        break;
      default:
        return (false);
    }
  }
  if (day > max_day)
    return (false);
  return (true);
}

bool  check_date(std::string const& inputDate) {
  std::string year;
  std::string month;
  std::string day;

  if (std::count(inputDate.begin(), inputDate.end(), '-') != 2)
    return (false);
  split_date_string(inputDate, year, month, day);
  if (year.empty() || month.empty() || day.empty())
    return (false);
  if ((str_is_int(year) == false || str_is_int(month) == false || str_is_int(day) == false))
    return (false);
  if (!check_date_validity(atoi(year.c_str()), atoi(month.c_str()), atoi(day.c_str())))
    return (false);
  
  return (true);
}
