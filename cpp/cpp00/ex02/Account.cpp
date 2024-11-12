/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 07:48:36 by ihaffout          #+#    #+#             */
/*   Updated: 2024/11/12 18:11:06 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;

int Account::_totalAmount = 0;

int Account::_totalNbDeposits = 0;

int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _displayTimestamp();
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _accountIndex = _nbAccounts;
    _totalAmount += initial_deposit;
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
    _nbAccounts++;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
    _nbAccounts--;
}

void Account::_displayTimestamp()
{
    std::time_t time = std::time(0);
    std::tm *now = std::localtime(&time);
    time_t year = now->tm_year + 1900;
    time_t month = now->tm_mon + 1;
    time_t day = now->tm_mday;
    time_t hour = now->tm_hour;
    time_t min = now->tm_min;
    time_t sec = now->tm_sec;
    std::cout << "[" << year;
    std::cout << std::setw(2) << std::setfill('0') << month;
    std::cout << std::setw(2) << std::setfill('0') << day;
    std::cout << "_" ;
    std::cout << std::setw(2) << std::setfill('0') << hour;
    std::cout << std::setw(2) << std::setfill('0') << min;
    std::cout << std::setw(2) << std::setfill('0') << sec << "] ";
}

int Account::getNbAccounts()
{
    return _nbAccounts;
}

int Account::getTotalAmount()
{
    return _totalAmount;
}
int Account::getNbDeposits()
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "accounts:"<< getNbAccounts() << ";";
    std::cout << "total:"<< getTotalAmount() << ";";
    std::cout << "deposits:"<< getNbDeposits() << ";";
    std::cout << "withdrawals:"<< getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "deposit:" << deposit << ";";
    _amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits++;
    _nbDeposits++;
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    if(withdrawal <= _amount)
    {
        std::cout << "withdrawal:" << withdrawal << ";";
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        _nbWithdrawals++;
        std::cout << "amount:" << _amount << ";";
        std::cout << "nb_withdrawals:" << _nbDeposits << std::endl;
        return true;
    }
    else
    {
        std::cout << "withdrawal:refused" << std::endl;
        return false;
    }
}
int		Account::checkAmount()const
{
    return (_amount);
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}


