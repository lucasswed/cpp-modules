/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:18:10 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/14 16:12:49 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
	private:
		std::string	_target;
		int			_chance;
		RobotomyRequestForm(void);
	public:
		RobotomyRequestForm(std::string const& target);
		RobotomyRequestForm(RobotomyRequestForm const& src);
		virtual ~RobotomyRequestForm(void);
		RobotomyRequestForm& operator=(RobotomyRequestForm const& rhs);

		virtual std::string	get_target(void) const;
		virtual void		set_target(std::string const& target);
		virtual void		execute(Bureaucrat const& executor) const;
	class RobotomyBureaucratGradeException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class RobotomyFormSignedException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

#endif