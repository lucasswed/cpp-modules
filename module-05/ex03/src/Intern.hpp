/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:49:03 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/17 15:10:35 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>
# include "AForm.hpp"

class Intern
{
	private:
		Intern(Intern const& src);
		Intern&	operator=(Intern const& rhs);
	public:
		Intern(void);
		~Intern(void);

		AForm*	makeForm(std::string const& form_name, std::string const& target);
		class WrongFormNameException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

#endif