#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
	Account( double = .00 );
	virtual double getBalance() const;

	virtual void credit(const double);
	virtual void debit(const double);
private:
	double balance;
};

#endif
