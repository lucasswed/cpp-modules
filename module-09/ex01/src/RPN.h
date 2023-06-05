/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 08:35:41 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/06/05 11:24:03 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H

# include <stack>
# include <cmath>
# include <string>
# include <cctype>
# include <iostream>
# include <algorithm>

void  post_fix_eval(std::string expression);

#endif