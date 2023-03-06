/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:22:42 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/06 12:37:08 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>

class ICharacter;

class AMateria
{
	private:
		AMateria(void);
		AMateria&	operator=(AMateria const& rhs);
	protected:
		std::string	const _type;
	public:
		AMateria(AMateria const& src);
		AMateria(std::string const& type);
		virtual ~AMateria(void);

		std::string const& getType(void) const; //Returns the materia type
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target) = 0;
};

#endif