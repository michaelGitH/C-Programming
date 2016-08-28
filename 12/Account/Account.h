#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
	Account( double = .00 );
	double getBalance() const;

	void credit(const double);
	void debit(const double);
private:
	double balance;
};

#endif
