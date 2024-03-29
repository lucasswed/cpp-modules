/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertions.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:16:19 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/04/05 11:45:46 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTIONS_HPP
# define CONVERTIONS_HPP
# include <string.h>
# include <stdlib.h>
# include <string.h>
# include <string>
# include <iostream>
# include <sstream>
# include <iomanip>
# include <limits>

enum {
	character,
	integer,
	float_number,
	double_number
};

void	int_convert(std::string const& input);
void	char_convert(std::string const& input);
void	float_convert(std::string const& input);
void	double_convert(std::string const& input);
int		find_scalar_type(std::string const& input);

#endif