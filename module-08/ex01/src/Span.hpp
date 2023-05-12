/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:59:05 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/05/12 14:55:15 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <set>
# include <stdexcept>
# include <algorithm>

class Span
{
	private:
		Span(void);
		unsigned int		_size;
		std::multiset<int>	_array;
	public:
		Span(Span const& src);
		Span(unsigned int const& N);
		~Span(void);

		Span&				operator=(Span const& rhs);

		void				showContent(void) const;
		void				addNumber(int const& number);
		unsigned int		longestSpan(void) const;
		unsigned int		shortestSpan(void) const;
		unsigned int const&	getSize(void) const;

		template<class InputIt>
		void				addNumbersRange(InputIt first, InputIt last);
};

template <class InputIt>
void	Span::addNumbersRange(InputIt first, InputIt last) {
	for (InputIt i = first; i != last; i++) {
		if (this->_array.size() == this->_size)
			throw std::length_error("The array is full! Don't add more numbers than the size of the span!");
		this->_array.insert(*i);
	}
};

#endif