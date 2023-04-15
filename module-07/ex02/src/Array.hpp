/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 13:00:22 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/04/15 17:54:16 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array
{
	private:
		T		*_array;
		size_t	_size;
	public:

		Array(void) {
			this->_array = new T[0];
			this->_size = 0;
		};

		Array(unsigned int n) {
			this->_array = new T[n];
			this->_size = n;
		};

		Array(Array const& src) {
			*this = &src;
		};

		~Array(void) {
			delete [] this->_array;
		};

		Array&	operator=(Array const& rhs) {
			if (this != &rhs) {
				if (this->_array)
					delete [] this->_array;
				this->_array = new T[rhs._size];
				for (int i = 0; i < rhs._size; i++)
					this->_array[i] = rhs._array[i];
				this->_size = rhs._size;
			}
			return (*this);
		};

		size_t const&	size(void) const {
			return (this->_size);
		};
		
		class IndexOutOfBoundsException : public std::exception
		{
			public:
				virtual const char*	what() const throw() {
					return ("Index out of bounds");
				};
		};
		
		T&		operator[](unsigned int index) const {
			if (index >= this->_size)
				throw IndexOutOfBoundsException();
			return (this->_array[index]);
		};
};

#endif