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
# define SHRUBBERYCREATIONFROM_HPP
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	_target;
		ShrubberyCreationForm(void);
	public:
		ShrubberyCreationForm(Bureaucrat const& target);
		ShrubberyCreationForm(ShrubberyCreationForm const& src);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const& rhs);

		virtual void	execute(Bureaucrat const& executor);
};

#endif