/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:36:38 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/05/31 14:29:59 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void  printMap(std::map<std::string, float> container) {
  for (std::map<std::string, float>::iterator i = container.begin(); i != container.end(); i++)
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
  std::map<std::string, float> wallet;
  import_database(database);
  import_wallet_file(av[1], wallet);
  printMap(wallet);
  return (0);
}