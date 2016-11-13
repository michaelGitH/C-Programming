#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include"Account.h"

void x(double, Account);

class CheckingAccount : public Account
{
	friend void x(double, Account);
public:
	CheckingAccount(double = .00, double = .00);

	double getCost() const;
	void credit(const double);
	void debit(const double);
private:
	double cost;
};

void x(double, Account) {

}

#endif
