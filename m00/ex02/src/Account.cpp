// ************************************************************************** //
//                                                                            //
//              Account.cpp for GlobalBanksters United                        //
//              reCreated on  : Mon Mar 27 10:33:00 2023                      //
//              Last update : Wed Jan 04 09:23:52 1992                        //
//              Made by : Eric "OSS-117" Wursteisen <ew@gbu.com>              //
//                                                                            //
// ************************************************************************** //

# include "../inc/Account.hpp"
# include <iostream>
# include <iomanip>
# include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) {
	// [19920104_091532] index:0;amount:42;created
	_nbAccounts 
	_displayTimestamp();
	std::cout 	<< " index:" << _accountIndex 
				<< ";amount:" << _amount 
				<< ";created" << std::endl;
	return ;
}

int	Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
	// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0

	_displayTimeStamp();
	std::cout 	<< " accounts:" << getNbAccounts() 
				<< ";total:" << getTotalAmount() 
				<< ";deposits:" << getNbDeposits()
				<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
	int	p_amount;
	
	p_amount = _amount;
	_amount += deposit;

	_displayTimestamp();
	std::cout 	<< " index:" << _accountIndex << ";p_amount:" << p_amount;
				<< ";deposit:" << deposit << ";amount:" << _amount
				<< ";nb_deposits" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	// [19920104_091532] index:0;p_amount:47;withdrawal:refused
	// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
	int	p_amount;

	p_amount = _amount;
	_displayTimeStamp();
	std::cout 	<< " index:" << _accountIndex 
				<< ";p_amount:" << p_amount;
	if (_amount -= withdrawl < 0)
		std::cout << "withdrawal:refused" << std::endl;
	else
		std::cout	<< ";withdrawal" << withdrawal
					<< ":amount:" << _amount
					<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

int		Account::checkAmount( void ) const {
	return (this->_amount);
}

void	Account::displayStatus( void ) const {
	// [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0

	_displayTimeStamp();
	std::cout 	<< " index:" << _accountIndex 
				<< ";amount:" << _amount
				<< ";deposits:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {
	std::time_t now = std::time(0);
	std::tm	*time = std::localtime(&now);

	std::cout << "[" << time->tm_year;
	std::cout << std::setfill('0') << std::setw(2) << time->tm_mon;
	std::cout << std::setfill('0') << std::setw(2) << time->tm_mday;
	std::cout << "_";
	std::cout << std::setfill('0') << std::setw(2) << time->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << time->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << time->tm_sec << "]";
}

Account::~Account( void ) {
	//[19920104_091532] index:7;amount:8942;closed
	_displayTimeStamp();
	std::cout 	<< " index:" << _accountIndex << ";amount:" << _amount << std::endl;
	return ;
}