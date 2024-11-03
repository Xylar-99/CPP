/* *************************************************************************** */
/*                 *#########                                                  */
/*                ##........../##           KWAK!                              */
/*              *#,.......,##....#######  /                                    */
/*              ##........./....##////##                                       */
/*    ##          ##...........,##((##                                         */
/*   #.###/        ##,..........*                                              */
/*  #(.....(######(###*........,##                                             */
/* ##.............................##      File    : Account.cpp                */
/* ##.    __       __  o       __  ##                                          */
/* ##.   |_  |\ | | __ | |\ | |_    *#.   Created :                            */
/*  ##   |__ | \| |__| | | \| |__   ,#,             Invalid date               */
/*   ##.............................##                                         */
/*    /##........................*##      Updated : abquaoub                   */
/*       ###/................*###.                  2024/09/18 16:23:49        */
/*            ##############.                                                  */
/* *************************************************************************** */
#include "Account.hpp"

#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


int	Account::getNbAccounts()
{
    return Account::_nbAccounts;
}

void	Account::_displayTimestamp()
{
    time_t timestamp;
	time(&timestamp);


	tm * ptm = std::localtime(&timestamp);
	char buffer[20];
	std::strftime(buffer, 20, "[%Y%m%d_%H%M%S]", ptm);
	std::cout << buffer;
    return ;
}


int	Account::getTotalAmount()
{
    return _totalAmount;
}

int	Account::getNbDeposits()
{
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals()
{
    return _totalNbWithdrawals;
}


void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout   << " accounts:" << getNbAccounts() << ";total:"  << getTotalAmount() << ";deposits:" <<  getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
    _totalAmount = 0;

}

Account::Account(int amount)
{
    static int i = 0;
    _displayTimestamp();
    std::cout <<" index:" << i << ";amount:" << amount << ";created\n";
    _nbDeposits = 0;
    i++;
    _accountIndex = i - 1;
    _nbAccounts++;
    _totalAmount += amount;
    _amount = amount;
}

Account::~Account() 
{
    static int i = 0;
    _displayTimestamp();
    std::cout <<" index:" << i << ";amount:" << _amount << ";closed\n";
    i++;
};



void	Account::makeDeposit( int deposit )
{
    _totalAmount += _amount + deposit;
    if(deposit > 0) _nbDeposits++;
    _displayTimestamp();
    std::cout <<" index:" << _accountIndex << ";p_amount:" << _amount   << ";deposit:" <<  deposit  << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits <<std::endl; 
    _totalNbDeposits += _nbDeposits;
    _amount = _amount + deposit;

}

bool	Account::makeWithdrawal( int withdrawal )
{
    _totalAmount +=   ( _amount - withdrawal) < 0 ? _amount:_amount - withdrawal  ;
    _displayTimestamp();
    std::cout <<" index:" << _accountIndex << ";p_amount:" << _amount   << ";withdrawal:"; ;
    if((_amount - withdrawal) < 0) return (std::cout << "refused\n" , 0);

    _nbWithdrawals++;
    std::cout <<    withdrawal  << ";amount:" <<  _amount - withdrawal << ";nb_withdrawals:" <<  _nbWithdrawals <<std::endl; 

    _amount = ( _amount - withdrawal) < 0 ? _amount:_amount - withdrawal  ;
    _totalNbWithdrawals += _nbWithdrawals;
    return 1;
}

int		Account::checkAmount( void ) const
{
    return 1;
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout <<" index:" << _accountIndex  << ";amount:" << _amount << ";deposits:" << _nbDeposits  << ";withdrawals:" << _nbWithdrawals << std::endl; 
    return ;
}





