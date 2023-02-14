/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:59:00 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/01 16:51:48 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook {
	private:
		Contact contact[8];

	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	add(void);
		void	search(void) const;
		void	fprint(std::string str) const;
};

#endif