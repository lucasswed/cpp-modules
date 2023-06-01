/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:36:38 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/06/01 17:00:31 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

template < typename Keys, typename Value >
void  printMap(std::map<Keys, Value> container) {
  for (typename std::map<Keys, Value>::iterator i = container.begin(); i != container.end(); i++)
    std::cout << i->first << " " << i->second << std::endl;
}

int main(int ac, char **av)
{
  if (ac != 2)
  {
    std::cout << "Invalid arguments number" << std::endl;
    return (1);
  }

  std::map<std::string, float> database;
  import_database(database);
  import_wallet_file(av[1]);
  // printMap<std::string, std::string>(wallet);
  // printMap<std::string, float>(database);
  return (0);
}