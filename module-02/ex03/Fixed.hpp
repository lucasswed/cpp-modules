/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:41:15 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/08 16:57:54 by lucas-ma         ###   ########.fr       */
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
		
		// Overloads
		Fixed&	operator=(Fixed const& rhs); //Canonical Form
		Fixed	operator+(Fixed const& rhs) const;
		Fixed	operator-(Fixed const& rhs) const;
		Fixed	operator*(Fixed const& rhs) const;
		Fixed	operator/(Fixed const& rhs) const;
		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);
		bool	operator==(Fixed const& rhs) const;
		bool	operator!=(Fixed const& rhs) const;
		bool	operator>(Fixed const& rhs) const;
		bool	operator<(Fixed const& rhs) const;
		bool	operator>=(Fixed const& rhs) const;
		bool	operator<=(Fixed const& rhs) const;

		// methods
		int		getRawBits(void) const;
		void	setRawBits(int const& raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed&	min(Fixed& num1, Fixed& num2);
		static Fixed&	min(Fixed const& num1, Fixed const& num2);
		static Fixed&	max(Fixed& num1, Fixed& num2);
		static Fixed&	max(Fixed const& num1, Fixed const& num2);
};

std::ostream&	operator<<(std::ostream& o, Fixed const& i);

#endif