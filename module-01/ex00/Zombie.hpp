/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 21:01:11 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/02 21:04:26 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Zombie {
	private:
		std::string	name;
	public:
		Zombie(void);
		~Zombie(void);

		void announce(void);
}