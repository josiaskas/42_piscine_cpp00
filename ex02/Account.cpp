//
// Created by Josias Mutshaila kasongo on 2022-08-10.
//
#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void) : _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount << ";created"<<std::endl;
}

Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(0)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout	<< "index:"<< _accountIndex
				<< ";amount:" << _amount << ";created"<<std::endl;
}

Account::~Account(void)
{
	_nbAccounts--;
	_displayTimestamp();
	std::cout	<< "index:"<< _accountIndex
				<< ";amount:" << _amount << ";closed"<<std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";p_amount:" << _amount
			  	<< ";deposit:" << deposit << ";";
	if (deposit >= 0)
	{
		_amount += deposit;
		_totalAmount += deposit;
		_nbDeposits++;
		_totalNbDeposits++;
	}
	std::cout	<< "amount:" << _amount
				<< ";nb_deposits:" << _nbDeposits
				<< std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";p_amount:" << _amount
				<< ";withdrawal:";
	if ((withdrawal >= 0) && (withdrawal <= _amount))
	{
		std::cout << withdrawal << ";";
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		std::cout	<< "amount:"<< _amount
					<< ";nb_withdrawals:" << _nbWithdrawals
					<< std::endl;
		return (true);
	}
	std::cout << "refused" << std::endl;
	return (false);
}

inline int Account::checkAmount(void) const
{
	return _amount;
}

inline int Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

inline int Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

inline int Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

inline int Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void Account::_displayTimestamp()
{
	char	format_time[32] = {0};
	time_t  clock = std::time(nullptr);
	std::tm *clock_data = std::localtime(&clock);

	std::strftime(format_time, 32, "[%Y%m%d_%H%M%S] ", clock_data);
	std::cout << format_time;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout	<< "accounts:" << Account::_nbAccounts << ";"
				<< "total:" << Account::_totalAmount << ";"
				<< "deposits:" << Account::_totalNbDeposits << ";"
				<< "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
			  	<< "deposits:" << _nbDeposits << ";"
			  	<< "withdrawals:" << _nbWithdrawals << std::endl;
}