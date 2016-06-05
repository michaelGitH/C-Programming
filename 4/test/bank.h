#include<iostream>
using namespace std;

class Bank
{
public:
	Bank( int );
	void setBank( int, double, double, double, double );
private:
	int account;
	double bBalance;
	double credit;
	double debit;
	double available;
};
