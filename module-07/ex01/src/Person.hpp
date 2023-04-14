/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:58:11 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/04/14 13:37:08 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSON_HPP
# define PERSON_HPP
# include <string>
# include <iostream>

class Person
{
	private:
		std::string _name;
		std::string	_job;
		int			_age;
	public:
		Person(void);
		Person(Person const& src);
		~Person(void);
		Person&	operator=(Person const& rhs);

		std::string	const&	get_name(void) const;
		std::string	const&	get_job(void) const;
		int	const&			get_age(void) const;
		void			set_name(std::string const& new_name);
		void			set_job(std::string const& new_job);
		void			set_age(int const& new_age);
};

#endif