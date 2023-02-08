/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:41:15 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/07 18:25:48 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
	private:
		int	_fp_num;
		static int const	_frac_bits = 8;

	public:
		Fixed(void); //Canonical Form
		Fixed(Fixed const& src); //Canonical Form
		Fixed(int const& src);
		Fixed(float const& src);
		~Fixed(void); //Canonical Form
		
		Fixed&	operator=(Fixed const& rhs); //Canonical Form
		int		getRawBits(void) const&;
		void	setRawBits(int const& raw);
		float	toFloat(void) const&;
		int		toInt(void) const&;
		
};
std::ostream&	operator<<(std::ostream& o, Fixed const& i);

#endif