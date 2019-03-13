#include "Account.class.hpp"

static int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}
static int Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}
static int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}
static int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}
static void	Account::displayAccountsInfos( void );
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_totalNbAccounts <<
	std::cout << ";total" << ;
}

static void	Account::_displayTimestamp( void )
{

}


Account::Account( int initial_deposit ) : _amount(initial_deposit), _nbDeposits(0),
_nbWithdrawals(0), _accountIndex(Account::_nbAccounts)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
	<<this->_amount << ";created" << std::endl;
	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts++;
	return ;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" <<
	this->_amount << ";closed" << srd::endl;
	Account::_nbAccounts--;
	return ;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	this->_nbDeposits++;
	Account::_nbDeposits++;
	std::cout << "index:" << this->_accountIndex << ";p_amount" << this->_amount;
	this->_amount += deposit;
	std::cout << ";deposit" << deposit << ";amount" << this->_amount <<
	";nb_deposits" << this->_nbDeposits;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount
	<< "withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused" << std::endl;
		return (0);
	}
	Account::_totalNbWithdrawals++;
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals" <<
	this->_nbWithdrawals << std::endl;
	return (1);
}

int		Account::checkAmount( void ) const
{
	return (0);
}


void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" <<
	this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:"
	<< this->_nbWithdrawals;
	return;
}

