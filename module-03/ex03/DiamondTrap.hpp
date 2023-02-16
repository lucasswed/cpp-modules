/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:07:37 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/16 14:34:43 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap(void);
		DiamondTrap(DiamondTrap const& src);
		DiamondTrap(std::string name);
		~DiamondTrap(void);

		DiamondTrap&	operator=(DiamondTrap const& rhs);
		void		attack(std::string const& target);
		void		whoAmI(void) const;
};


#endif