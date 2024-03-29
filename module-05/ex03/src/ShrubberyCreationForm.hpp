/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:24:21 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/13 13:10:36 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	_target;
		ShrubberyCreationForm(void);
	public:
		ShrubberyCreationForm(std::string const& target);
		ShrubberyCreationForm(ShrubberyCreationForm const& src);
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const& rhs);
		
		virtual std::string		get_target(void) const;
		virtual void			set_target(std::string const& new_target);
		virtual void			execute(Bureaucrat const& executor) const;
		class ShrubberyFileException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class ShrubberyBureaucratGradeException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class ShrubberyFormNotSignException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif