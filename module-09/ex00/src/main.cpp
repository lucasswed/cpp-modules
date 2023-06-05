/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:36:38 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/06/05 08:28:54 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
  if (ac != 2)
  {
    std::cout << "Invalid arguments number" << std::endl;
    return (1);
  }

  std::map<std::string, float> database;
  import_database(database);
  import_wallet_file(av[1], database);
  return (0);
}