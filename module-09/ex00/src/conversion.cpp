/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:05:18 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/06/05 08:32:19 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string find_conversion_date(std::string const& key, std::map<std::string, float>& database) {
  std::string last;
  std::string month;
  std::string day;
  
  split_date_string(key, last, month, day);
  for (std::map<std::string, float>::iterator i = database.begin(); i != database.end(); i++){
    if (key == i->first)
      return (i->first);
    if (i->first.compare(key) > 0)
    {
      i--;
      return (i->first);
    }
    last = i->first;
  }
  return (last);
}

void  do_the_conversion(std::string key, float value, std::map<std::string, float>& database) {
  std::string date;
  float       conversion;

  date = find_conversion_date(key, database);
  conversion = database[date];
  std::cout << key << " => " << value << " * " << conversion << " = " << value * conversion << std::endl;
}