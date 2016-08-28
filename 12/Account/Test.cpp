#include<iostream>
using std::cout;

#include"SavingsAccount.h"
#include"CheckingAccount .h"

int main() {
	Account a1(500), a2( -100 );
	cout << "a1 balance: " << a1.getBalance()
		<< "\na2 balance: " << a2.getBalance()
		<< "\na1.credit( 1000 )\n";
	a1.credit(1000);
	cout << "a1 balance after credit: " << a1.getBalance()
		<< "\na1 debit( 1500.5 )\n";
	a1.debit(1500.5);
	cout << "a1 balance after debit: " << a1.getBalance()
		<< "\na2.credit( 10000 )\n";
	a2.credit(10000);
	cout << "a2 balance after credit: " << a2.getBalance()
		<< "\na2 debit( 1234.5678 )\n";
	a2.debit(1234.5678);
	cout << "a2 balance after debit: " << a2.getBalance() << std::endl << std::endl;
	
	SavingsAccount s(100, .1), s1(500, -.05);
	cout << "s balance: " << s.getBalance()
		<< "\ns rate: " << s.getRate() << std::endl; 
	s.credit(s.calculateInterest());
	cout << "New balance after rating: " << s.getBalance() << std::endl << std::endl;

	CheckingAccount c1(1000, .05), c2(-100, .025);
	cout << "c1 balance: " << c1.getBalance()
		<< "c1 cost: " << c1.getCost()
		<< "\nc2 balance: " << c2.getBalance()
		<< "c2 cost: " << c2.getCost()
		<< "\nc1.credit( 1000 )\n";
	c1.credit(1000);
	cout << "c1 balance after credit: " << c1.getBalance()
		<< "\nc1 debit( 5000 )\n";
	c1.debit(5000);
	cout << "c1 balance after debit: " << c1.getBalance()
		<< "\nc2.credit( 10000 )\n";
	c2.credit(10000);
	cout << "c2 balance after credit: " << c2.getBalance()
		<< "\nc2 debit( 1000 )\n";
	c2.debit(1000);
	cout << "c2 balance after debit: " << c2.getBalance() << std::endl << std::endl;

	system("pause");
	return 0;
}