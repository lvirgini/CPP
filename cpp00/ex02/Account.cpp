/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvirgini <lvirgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:59:59 by lvirgini          #+#    #+#             */
/*   Updated: 2021/12/04 19:20:16 by lvirgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <locale> 

#define BLUE    "\033[36m"
#define RESET   "\033[0m"

//#define BLUE    ""
//#define RESET   ""

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
	std::cout << "index:" << BLUE << this->_accountIndex << RESET;
	std::cout << ";amount:" << BLUE << this->_amount << RESET;
	std::cout << ";created" << std::endl;
	return ;
}

/*
** Destructor : 
** index:0;amount:47;closed
*/

Account::~Account(void) {

	_displayTimestamp();
	std::cout << "index:" << BLUE << this->_accountIndex << RESET;
	std::cout << ";amount:" << BLUE << this->_amount << RESET << ";closed" << std::endl;
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
	std::cout << "index:" << BLUE << this->_accountIndex << RESET;
	std::cout << ";p_amount:" << BLUE << this->_amount << RESET;
	std::cout << ";deposit:" << BLUE << deposit << RESET;
	this->_amount += deposit;
	std::cout << ";amount:" << BLUE << this->_amount << RESET;
	std::cout << ";nb_deposits:" << BLUE << this->_nbDeposits << RESET << std::endl;
}

/*
** Make withdrawal
** 	fail = index:0;p_amount:47;withdrawal:refused
**	success= index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
*/

bool	Account::makeWithdrawal(int withdrawal) {

	_displayTimestamp();
	std::cout << "index:" << BLUE << this->_accountIndex << RESET;
	std::cout << ";p_amount:" << BLUE << this->_amount << RESET;
	if (this->checkAmount() < withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	std::cout << ";withdrawal:" << BLUE << withdrawal << RESET;
	std::cout << ";amount:" << BLUE << this->_amount << RESET;
	std::cout << ";nb_withdrawals:" << BLUE << this->_nbWithdrawals << RESET << std::endl;
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
	std::cout << "accounts:" << BLUE <<  getNbAccounts() << RESET;
	std::cout << ";total:" << BLUE << getTotalAmount() << RESET;
	std::cout << ";deposits:" << BLUE << getNbDeposits() << RESET;
	std::cout << ";withdrawals:" << BLUE << getNbWithdrawals() << RESET << std::endl;
	return ;
}

/*
**	Display this account infos :
**  index:0;amount:42;deposits:0;withdrawals:0
*/

void	Account::displayStatus(void) const {
	
	_displayTimestamp();
	std::cout << "index:" << BLUE << this->_accountIndex << RESET;
	std::cout << ";amount:" << BLUE <<  this->_amount << RESET;
	std::cout << ";deposits:" << BLUE << this->_nbDeposits << RESET;
	std::cout << ";withdrawals:" << BLUE << this->_nbWithdrawals << RESET << std::endl;
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
