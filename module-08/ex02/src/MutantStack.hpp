/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 09:11:52 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/05/12 11:49:47 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <deque>

template < class T, class Container = std::deque<T> >
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
		typedef typename	MutantStack<T, Container>::container_type::const_iterator			const_iterator;
		typedef typename	MutantStack<T, Container>::container_type::const_reverse_iterator	const_reverse_iterator;

		// Iterator functions
		iterator				begin(void);
		iterator				end(void);
		const_iterator			cbegin(void) const;
		const_iterator			cend(void) const;
		reverse_iterator		rbegin(void);
		reverse_iterator		rend(void);
		const_reverse_iterator	crbegin(void) const;
		const_reverse_iterator	crend(void) const;
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
typename MutantStack<T, Container>::const_iterator	MutantStack<T, Container>::cbegin(void) const {
	return(this->begin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator	MutantStack<T, Container>::cend(void) const {
	return(this->end());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::reverse_iterator		MutantStack<T, Container>::rbegin(void) {
	return (this->std::stack<T, Container>::c.rbegin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::reverse_iterator		MutantStack<T, Container>::rend(void) {
	return (this->std::stack<T, Container>::c.rend());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_reverse_iterator	MutantStack<T, Container>::crbegin(void) const {
	return(this->begin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_reverse_iterator	MutantStack<T, Container>::crend(void) const {
	return(this->begin());
}

#endif