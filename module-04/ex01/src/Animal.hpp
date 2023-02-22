/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:38:09 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/16 18:49:09 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <string>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal(void);
		Animal(Animal const& src);
		virtual ~Animal(void);
		Animal&	operator=(Animal const& rhs);

		virtual void	makeSound(void) const;
		virtual std::string	get_type(void) const;

};

#endif