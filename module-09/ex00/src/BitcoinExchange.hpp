/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:36:26 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/05/31 18:37:43 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <string>
# include <cctype>
# include <fstream>
# include <cstdlib>
# include <sstream>
# include <iostream>
# include <algorithm>

void        import_database(std::map<std::string, float>& database);
void        import_wallet_file(std::string const& fileName, std::map<std::string, std::string>& wallet);

bool        is_value_negative(std::string const& n);
bool        check_date(std::string const& inputDate);
bool        is_value_overflow(std::string const& number);

std::string take_input_date(void);

#endif