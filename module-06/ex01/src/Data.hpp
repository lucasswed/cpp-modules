/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:52:04 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/04/04 12:10:20 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
# include <stdint.h>

class Data
{
	private:
		uintptr_t	_raw;
	public:
		Data(void);
		Data(uintptr_t const& raw);
		Data(Data const& src);
		~Data(void);
		Data&		operator=(Data const& rhs);

		uintptr_t	get_raw(void) const;
		void		set_raw(uintptr_t const& new_raw);
};

#endif