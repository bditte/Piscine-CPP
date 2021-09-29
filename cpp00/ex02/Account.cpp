/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bditte <bditte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:54:59 by bditte            #+#    #+#             */
/*   Updated: 2021/09/29 13:40:10 by bditte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <sys/time.h>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int deposit)
{
	this->_accountIndex = _nbAccounts;
	this->_amount = deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<";";
	std::cout << "amount:" << this->_amount<<";";
	std::cout << "created" << std::endl;
	_nbAccounts++;
	_totalAmount += deposit;
	return ;
}

Account::Account(void)
{
	this->_accountIndex = _nbAccounts;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<";";
	std::cout << "amount:" << this->_amount<<";";
	std::cout << "created" << std::endl;
	_nbAccounts++;
	return ;
}

void Account::makeDeposit(int deposit)
{
	if (deposit <= 0)
		return ;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<";";
	std::cout << "p_amount:" << this->_amount<<";";
	std::cout << "deposit:" << deposit <<";";
	this->_amount += deposit;
	_totalAmount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "amount:" << this->_amount<<";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<";";
	std::cout << "p_amount:" << this->_amount<<";";
	std::cout << "withdrawal:";
	if (this->_amount - withdrawal < 0)
	{
		std::cout << "refused" <<std::endl;
		return (false);
	}
	std::cout << withdrawal << ";";
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << "amount:" << this->_amount<<";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int	Account::checkAmount (void) const
{
	return (this->_amount);
}

void Account::displayStatus (void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<";";
	std::cout << "amount:" << this->_amount<<";";
	std::cout << "deposits:" << this->_nbDeposits <<";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	struct timeval tv;

	gettimeofday(&tv, NULL);
	std::cout << "[" << tv.tv_sec << "_" << tv.tv_usec << "] ";
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts <<";";
	std::cout << "total:" << _totalAmount <<";";
	std::cout << "deposits:" << _totalNbDeposits <<";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;	
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
	return ;
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);	
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);	
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);	
}


int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);	
}
