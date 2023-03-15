/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:50:02 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/03/15 15:06:07 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*brain;
	public:
		Cat(void);
		Cat(Cat const& src);
		virtual ~Cat(void);
		Cat&	operator=(Cat const& rhs);

		virtual void		makeSound(void) const ;
		virtual std::string	get_type(void) const ;
		std::string&		get_idea(int index) const;
		void				set_idea(int index, std::string const& new_thought);
};

#endif