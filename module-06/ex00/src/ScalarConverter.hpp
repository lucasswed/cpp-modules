/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:37:44 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/21 15:01:33 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <string>

class ScalarConverter
{
	private:
		ScalarConverter&	operator=(ScalarConverter const& rhs);
		ScalarConverter(ScalarConverter const& src);

	public:
		ScalarConverter(void);
		~ScalarConverter(void);

		static void	converter(std::string const& to_convert);
};

#endif