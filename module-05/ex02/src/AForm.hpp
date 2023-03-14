/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:34:19 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/11 19:32:30 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include <string>
# include <iostream>

class Bureaucrat;

class AForm
{
	private:
		AForm(void);
		std::string const _name;
		bool			  _is_signed; //at construction it's not
		size_t		const _req_grade_to_sign;
		size_t		const _req_grade_to_exec;
	public:
		AForm(AForm const& src);
		AForm(std::string const& name, int to_sign, int to_exec);
		virtual ~AForm(void);
		AForm&	operator=(AForm const& rhs);

		std::string const&			get_name(void) const;
		bool						get_is_signed(void) const;
		void						set_is_signed(bool const& is_signed);
		size_t const&				get_req_grade_to_sign(void) const;
		size_t const&				get_req_grade_to_exec(void) const;
		void						be_signed(Bureaucrat const& bureaucrat);
		virtual std::string			get_target(void) const = 0;
		virtual void				set_target(std::string const& target) = 0;
		virtual void				execute(Bureaucrat const& executor) const = 0;
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& o, AForm const& src);

#endif