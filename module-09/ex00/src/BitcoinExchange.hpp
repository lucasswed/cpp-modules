/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:36:26 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/06/02 10:42:03 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <string>
# include <cstring>
# include <cctype>
# include <fstream>
# include <cstdlib>
# include <sstream>
# include <iostream>
# include <algorithm>

template <typename Keys, typename Value >
void  print_map(std::map<Keys, Value> container) {
  for (typename std::map<Keys, Value>::iterator i = container.begin(); i != container.end(); i++)
    std::cout << i->first << " " << i->second << std::endl;
};

void  import_database(std::map<std::string, float>& database);
void  import_wallet_file(std::string const& fileName, std::map<std::string, float>& database);
void  split_date_string(std::string const& inputDate, std::string& year, std::string& month, std::string& day);

bool  is_value_negative(std::string const& n);
bool  check_date(std::string const& inputDate);
void  do_the_conversion(std::string key, float value, std::map<std::string, float>& database);

#endif