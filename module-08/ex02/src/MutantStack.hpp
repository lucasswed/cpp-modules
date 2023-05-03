/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 09:11:52 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/05/03 12:24:00 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>

template <typename T, typename ctnr>
class MutantStack : std::stack<T, ctnr>
{
	public:
		MutantStack(void);
		MutantStack(MutantStack const& src);
		~MutantStack(void);

		MutantStack&	operator=(MutantStack const& rhs);
};

#endif