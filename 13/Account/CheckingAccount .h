#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include"Account.h"

class CheckingAccount : public Account
{
public:
	CheckingAccount(double = .00, double = .00);

	double getCost() const;
	void credit(const double);
	void debit(const double);
private:
	double cost;
};

#endif
