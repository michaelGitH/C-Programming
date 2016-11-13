#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include"Account.h"

class SavingsAccount : public Account
{
public:
	SavingsAccount(double = .00, double = .00);
	double getRate() const;
	double calculateInterest() const;
private:
	double rate;
};

#endif
