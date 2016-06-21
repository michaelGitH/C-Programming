#ifndef SA_H
#define SA_H

class SavingsAccount
{
public:
	SavingsAccount(int = 500);
	SavingsAccount &cmi();
	void print() const;

	static void modifyInterestRate( double );
private:
	static double annualInterestRate;
	double savingBalance;
};

#endif
