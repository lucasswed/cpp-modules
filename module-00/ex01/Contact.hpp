/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:21:16 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/01 12:45:31 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact {
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _dark_secret;
public:
	Contact(void);
	~Contact(void);
	
	static int	nb_of_instances;
	std::string get_fname(void) const;
	std::string get_lname(void) const;
	std::string get_nickname(void) const;
	std::string get_phonenb(void) const;
};

#endif