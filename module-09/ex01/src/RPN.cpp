/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 08:40:29 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/06/05 11:33:52 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.h"

static bool is_operator(char c) {
  std::string operators("+-/*");

  for (std::string::iterator i = operators.begin(); i != operators.end(); i++)
    if (c == *i)
      return (true);
  return (false);
}

float calculate(float a, float b, char op) {
  switch (op)
  {
    case '+':
      return (b + a);
    case '-':
      return (b - a);
    case '/':
      return (b / a);
    case '*':
      return (b * a);
  }
  return (0);
}

void  post_fix_eval(std::string expression) {
  expression.erase(std::remove(expression.begin(), expression.end(), ' '), expression.end());

  float a, b;
  std::stack<float> stk;

  for (std::string::iterator i = expression.begin(); i != expression.end(); i++)
  {
    if (!std::isdigit(*i) && !is_operator(*i)) {
      std::cout << "Character other than digit or operator: " << *i << std::endl;
      exit(1);
    }
    if (is_operator(*i)) {
      if (stk.size() < 2) {
        std::cout << "Error on expression!" << std::endl;
        exit(1);
      }
      a = stk.top();
      stk.pop();
      b = stk.top();
      stk.pop();
      stk.push(calculate(a, b, *i));
    }
    else if (std::isdigit(*i)) {
      a = *i - '0';
      stk.push(a);
    }
  }

  if (stk.size() != 1) {
    std::cout << "Error on expression!" << std::endl;
    exit(1);
  }

  std::cout << "Expression: ";
  for (std::string::iterator i = expression.begin(); i != expression.end(); i++)
    std::cout << *i << " ";
  std::cout << std::endl;
  std::cout << "Result: " << stk.top() << std::endl;
}