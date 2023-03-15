/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:24:14 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/15 16:20:00 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string	const _name;
		AMateria*	inventory[4];
		
	public:

		Character(void);
		Character(std::string const& name);
		Character(Character const& src);
		virtual ~Character(void);
		Character&	operator=(Character const& rhs);

		virtual	std::string const& getName(void) const;
		virtual void	equip(AMateria* m);
		virtual void	unequip(int idx);
		virtual void	use(int idx, ICharacter& target);
};

#endif