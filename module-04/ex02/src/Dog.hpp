/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:54:46 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/22 16:44:37 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*brain;
	public:
		Dog(void);
		Dog(Dog const& src);
		~Dog(void);
		Dog&	operator=(Dog const& rhs);

		virtual void	makeSound(void) const;
		virtual std::string get_type(void) const;
		std::string&		get_idea(int index) const;
		void				set_idea(int index, std::string const& new_thought);
};

#endif