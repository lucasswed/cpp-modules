/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 21:01:11 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/03 14:56:06 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {
	private:
		std::string	_name;
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void announce(void);
		Zombie* newZombie(std::string name);
		void randomChump(std::string name);
		Zombie* zombieHorde(int n, std::string name);
};

#endif