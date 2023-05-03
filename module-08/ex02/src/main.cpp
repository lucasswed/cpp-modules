/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 09:23:02 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/05/03 09:31:42 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>

int main(void) {
	std::stack<int> stack;
	
	stack.push(21);
	stack.push(22);
	stack.push(24);
	stack.push(25);
	while (!stack.empty()) {
		std::cout << stack.top() << " ";
		stack.pop();
	}
}