#include<iostream>
using std::cout;
using std::fixed;
#include<iomanip>
using std::setprecision;

#include"Account.h"

Account::Account(double b)
	: balance( b >= .0 ? b : .0 )
{
	if (b < 0)
		cout << "Balance is incorrect. New balance is 0.00\n";	
}

double Account::getBalance() const {
	return balance;
}

void Account::credit( const double c) {
	balance += c;
}

void Account::debit(const double d) {
	if (d <= balance)
		balance -= d;
	else
		cout << "Debit amount exceeds account balance!\n";
}