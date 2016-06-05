#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class Account
{
public:
	Account ( double );
	void setBalance ( double );
	double getBalance ();
	double credit ( double );
	double debit ( double );
private:
	double balance;
};
