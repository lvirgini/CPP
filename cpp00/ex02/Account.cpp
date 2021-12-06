/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:59:59 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/06 13:53:38 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <locale> 

// ************************************************************************** //
//                             Constructor / Destructor                       //
// ************************************************************************** //


/*
** Constructor : 
** index:0;amount:42;created
*/

Account::Account(int initial_deposit ) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
	
	this->_accountIndex = getNbAccounts();
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
	return ;
}

/*
** Destructor : 
** index:0;amount:47;closed
*/

Account::~Account(void) {

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount << ";closed" << std::endl;
	return ;
}

// ************************************************************************** //
//                                  Functions                                 //
// ************************************************************************** //

/*
** Make deposit : 
** index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
*/

void	Account::makeDeposit(int deposit) {

	Account::_totalAmount += deposit;
	Account::_totalNbDeposits ++;
	this->_nbDeposits++;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

/*
** Make withdrawal
** 	fail = index:0;p_amount:47;withdrawal:refused
**	success= index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
*/

bool	Account::makeWithdrawal(int withdrawal) {

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	if (this->checkAmount() < withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	std::cout << ";withdrawal:" << withdrawal;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}

int		Account::checkAmount(void) const {

	return (this->_amount);
}

// ************************************************************************** //
//                              Display Functions                             //
// ************************************************************************** //

/*
** Display global totals infos :
**	accounts:8;total:20049;deposits:0;withdrawals:0
*/

void	Account::displayAccountsInfos(void) {

	_displayTimestamp();
	std::cout << "accounts:" <<  getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
	return ;
}

/*
**	Display this account infos :
**  index:0;amount:42;deposits:0;withdrawals:0
*/

void	Account::displayStatus(void) const {
	
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" <<  this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
	return ;
}

// ************************************************************************** //
//                              Static Functions                              //
// ************************************************************************** //

/*
** Static functions
*/

int		Account::getNbAccounts(void) {

	return (Account::_nbAccounts);
}

int		Account::getTotalAmount(void) {

	return (Account::_totalAmount);
}

int		Account::getNbDeposits(void) {

	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals(void) {

	return (Account::_totalNbWithdrawals);
}

/*
** 
*/

void	Account::_displayTimestamp(void) {
	
	time_t	time1 = std::time(NULL);
	tm		*time = std::localtime(&time1);

	std::cout << "[" << time->tm_year + 1900 << time->tm_mon + 1;
	if (time->tm_mday < 10)
		std::cout << "0";
	std::cout << time->tm_mday<< "_";
	std::cout << time->tm_hour << time->tm_min << time->tm_sec << "] ";
  return ;
}

/*
** Static declaration : 
*/

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
