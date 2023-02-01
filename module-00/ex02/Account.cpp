/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:05:16 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/01 22:24:24 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit) {
	this->_amount = initial_deposit;
	this->_totalAmount = initial_deposit;
	this->_nbDeposits++;
	return;
}

Account::~Account(void) {
	return;
}

int	Account::getNbAccounts(void) {
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void) {
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void) {
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) {
	return (Account::_totalNbWithdrawals);
}

int	Account::getNbAccounts(void) {
	return (Account::_nbAccounts);
}

// void Account::_displayTimestamp(void) {
// 	std::cout <<
// }

// void Account::displayAccountsInfos(void) {
// 	std::cout << Account::_displayTimestamp();
	
// }