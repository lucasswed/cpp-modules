/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:20:25 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/14 17:06:09 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENCIALPARDONFORM_HPP
# define PRESIDENCIALPARDONFORM_HPP
# include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;
		PresidentialPardonForm(void);
	public:
		PresidentialPardonForm(std::string const& new_target);
		PresidentialPardonForm(PresidentialPardonForm const& src);
		virtual ~PresidentialPardonForm(void);
		PresidentialPardonForm&	operator=(PresidentialPardonForm const& rhs);
		
		virtual	std::string		get_target(void) const;
		virtual	void			set_target(std::string const& new_target);
		virtual	void			execute(Bureaucrat const& executor) const;
		class PresidentialBureaucratGradeException : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};
		class PresidentialFormSignException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

# endif