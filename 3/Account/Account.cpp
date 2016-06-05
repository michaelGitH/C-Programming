// Account.cpp Тараканов М.А. 24.09.2015 16:51
// Исходный код класса Account, которым мог бы воспользоваться 
//банк для представления банковских счетов своих клиентов. 
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "Account.h"

Account::Account( int begin )
{
	if( begin >= 0 )
		balance = begin;
	if( begin < 0 )
		{
		balance = 0;
		cout << "Balance is invalid !" << endl;
		}
}

void Account::credit()
{
	int cr;
	cout << "Enter sum of credit: ";
	cin >> cr;
	balance = balance + cr;
}

void Account::debit()
{
	int db;
	cout << "Enter sum of dedit: ";
	cin >> db;
	if( db > balance )
		cout << "Debit is more than balance of account!"
			  <<  endl;
	if( db <= balance )
		balance = balance - db;

}

int Account::getBalance()
{
	return balance;
}
