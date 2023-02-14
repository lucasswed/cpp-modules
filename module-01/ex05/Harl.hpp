/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:27:45 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/07 12:52:56 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl {
	private:
		void debug(void) const;
		void info(void) const;
		void warning(void) const;
		void error(void) const;

		typedef struct s_harl {
			std::string	name;
			void		(Harl::*func)(void) const;
		}				t_harl;

	public:
		Harl(void);
		~Harl(void);

		void complain(std::string level);
		t_harl init[4];
};

#endif