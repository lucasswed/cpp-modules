/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:36:26 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/05/31 14:30:12 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <sstream>
# include <cctype>
# include <map>

void  fill_map(std::ifstream const& data, char del, std::map<std::string, float>& container);
void  import_wallet_file(std::string const& fileName, std::map<std::string, float>& wallet);
void  import_database(std::map<std::string, float>& database);
std::string take_input_date(void);

#endif