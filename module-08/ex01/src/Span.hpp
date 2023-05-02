/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:59:05 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/05/02 17:38:57 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <set>

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

		class EmptyArrayException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class FullArrayException : public std::exception
		{
			virtual const char* what() const throw();
		};
};

template <class InputIt>
void	Span::addNumbersRange(InputIt first, InputIt last) {
	for (InputIt i = first; i != last; i++) {
		if (this->_array.size() == this->_size)
			throw FullArrayException();
		this->_array.insert(*i);
	}
};

#endif