/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:06:36 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/22 18:16:30 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		Ice&	operator=(Ice const& rhs);
	public:
		Ice(void);
		Ice(Ice const& src);
		~Ice(void);

		virtual AMateria* clone(void) const;
		virtual void	  use(ICharacter& target);
};

#endif