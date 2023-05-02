/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:59:05 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/05/02 15:54:08 by lucas-ma         ###   ########.fr       */
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

		class EmptyArrayException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class FullArrayException : public std::exception
		{
			virtual const char* what() const throw();
		};
};

#endif