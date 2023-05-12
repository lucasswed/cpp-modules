/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 09:11:52 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/05/12 13:32:12 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		// Orthodox canonical form
		MutantStack(void);
		MutantStack(MutantStack const& src);
		~MutantStack(void);
		MutantStack&	operator=(MutantStack const& rhs);

		// Definition of the container iterator just to iterator
		typedef typename	MutantStack<T, Container>::container_type::iterator					iterator;
		typedef typename	MutantStack<T, Container>::container_type::reverse_iterator			reverse_iterator;

		// Iterator functions
		iterator				begin(void);
		reverse_iterator		rbegin(void);
		iterator				end(void);
		reverse_iterator		rend(void);
};

template <typename T,typename Container>
MutantStack<T, Container>::MutantStack(void) : std::stack<T, Container>() {
}

template <typename T,typename Container>
MutantStack<T, Container>::MutantStack(MutantStack const& src) : std::stack<T, Container>() {
	if (this != &src)
		*this = src;
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack(void) {
}

template <typename T, typename Container>
MutantStack<T, Container>&	MutantStack<T, Container>::operator=(MutantStack const& rhs) {
	*this = std::stack<T, Container>::operator=(rhs);
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator		MutantStack<T, Container>::begin(void) {
	return (this->std::stack<T, Container>::c.begin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator		MutantStack<T, Container>::end(void) {
	return (this->std::stack<T, Container>::c.end());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::reverse_iterator		MutantStack<T, Container>::rbegin(void) {
	return (this->std::stack<T, Container>::c.rbegin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::reverse_iterator		MutantStack<T, Container>::rend(void) {
	return (this->std::stack<T, Container>::c.rend());
}

#endif