#include"ac.h"

Account::Account ( double nb )
{
	setBalance ( nb );
}

void Account::setBalance ( double bal )
{
	if ( bal < 0 )
	{
		balance = 0;
		cout << "incorrect balance" << endl;
	}
	if ( bal >= 0 )
		balance = bal;
}

double Account::getBalance ()
{
	return balance;
}

double Account::credit ( double cr )
{
	balance += cr;
}

double Account::debit ( double db )
{
	if ( db > balance )
		cout << "debit more than balance" << endl;
	if ( db <= balance )
		balance -= db;
}
