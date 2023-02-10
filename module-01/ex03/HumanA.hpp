/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:02:22 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/06 11:13:34 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <string>

class HumanA {
	private:
		std::string _name;
		Weapon& _weapon;
	
	public:
		HumanA(std::string const& name ,Weapon& weapon);
		~HumanA(void);

		void	attack(void);
};

#endif