/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:34:19 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/10 19:12:38 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include <iostream>

class Bureaucrat;

class Form
{
	private:
		Form(void);
		std::string const _name;
		bool			  _is_signed; //at construction it's not
		size_t		const _req_grade_to_sign;
		size_t		const _req_grade_to_exec;
	public:
		Form(Form const& src);
		Form(std::string const& name, size_t to_sign, size_t to_exec);
		~Form(void);
		Form&	operator=(Form const& rhs);

		std::string const&	get_name(void) const;
		bool				get_is_signed(void) const;
		size_t const&		get_req_grade_to_sign(void) const;
		size_t const&		get_req_grade_to_exec(void) const;
		void				be_signed(Bureaucrat const& bureaucrat);
		class GradeTooLowException : std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooHighException : std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& o, Form const& src);

#endif