/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:57:55 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/03 18:04:09 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *learned_materias[4];
	public:
		MateriaSource(void);
		~MateriaSource(void);

		virtual void	learnMateria(AMateria *m);
		virtual AMateria*	createMateria(std::string const& type);
};

#endif