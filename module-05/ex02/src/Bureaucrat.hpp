/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:42:52 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/13 17:08:20 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>

class AForm;

class Bureaucrat
{
	private:
		Bureaucrat(void);
		std::string const _name;
		size_t		_grade;
	public:
		Bureaucrat(Bureaucrat const& src);
		Bureaucrat(std::string const& name, int const& grade);
		~Bureaucrat(void);

		Bureaucrat&			operator=(Bureaucrat const& rhs);
		std::string	const&	get_name(void) const;
		size_t				get_grade(void) const;
		void				increment_grade(void);
		void				decrement_grade(void);
		void				sign_form(AForm const& form) const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

};

std::ostream&		operator<<(std::ostream& o, Bureaucrat const& src);

#endif