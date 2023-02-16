/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:35:32 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/16 11:19:57 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
# include <string>

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(ScavTrap const& src);
		ScavTrap(std::string const& name);
		~ScavTrap(void);

		ScavTrap&	operator=(ScavTrap const& rhs);
		void		attack(std::string const& target);
		void		guardGate(void);
};

#endif