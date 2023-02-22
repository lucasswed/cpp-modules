/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:01:25 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/16 18:53:18 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const& src);
		virtual ~WrongAnimal(void);
		WrongAnimal&	operator=(WrongAnimal const& rhs);

		virtual void	makeSound(void) const;
		virtual std::string	get_type(void) const;
};

#endif