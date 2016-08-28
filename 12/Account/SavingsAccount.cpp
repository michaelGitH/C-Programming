#include<iostream>
#include"SavingsAccount.h"

SavingsAccount::SavingsAccount(double b, double r)
	: Account(b), rate(r >= .00 ? r : .00)
{
	if (rate < 0)
		std::cout << "Rate can't less than 0! New rate is 0.\n";
}

double SavingsAccount::getRate() const {
	return rate;
}

double SavingsAccount::calculateInterest() const {
	return getBalance() * rate;
}