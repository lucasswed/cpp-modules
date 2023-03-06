/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:22:06 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/06 12:13:15 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"


class Cure : public AMateria
{
	private:
		Cure&	operator=(Cure const& rhs);
	public:
		Cure(void);
		Cure(Cure const& src);
		~Cure(void);

		AMateria* clone(void) const;
		void	  use(ICharacter& target);
};


#endif