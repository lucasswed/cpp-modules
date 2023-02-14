/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:55:03 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/14 19:33:00 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <string>

class ClapTrap
{
	protected:
		std::string _name;
		int			_hit_pts;//represent the health of the ClapTrap
		int			_energy_pts;
		int			_attack_dmg;
	public:
		ClapTrap(void);//canonical
		ClapTrap(ClapTrap const& src);//canonical
		ClapTrap(std::string const& name);
		~ClapTrap(void);//canonical

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void clapTrapStat(void);

		ClapTrap&	operator=(ClapTrap const& rhs); //canonical;
};


#endif