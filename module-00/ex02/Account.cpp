/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas-ma <lucas-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:05:16 by lucas-ma          #+#    #+#             */
/*   Updated: 2023/02/02 12:39:44 by lucas-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit) {
	Account::_displayTimestamp();
	std::cout << Account::getNbAccounts();
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts++;
	return;
}

Account::~Account(void) {
	return;
}

int	Account::_totalAmount = 0;

int	Account::_nbAccounts = 0;

int	Account::_totalNbDeposits = 0;

int	Account::_totalNbWithdrawals = 0;

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

void Account::makeDeposit(int deposit)
{
	if (deposit <= 0)
		return;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	return;
}

// void Account::_displayTimestamp(void) {
// 	std::cout <<
// }

void Account::displayAccountsInfos(void) {
	Account::_displayTimestamp();
	Account::getNbAccounts();
	Account::getTotalAmount();
	Account::getNbDeposits;
	Account::getNbWithdrawals();
}