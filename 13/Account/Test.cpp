#include<iostream>
using std::cout;
using std::cin;

#include<vector>
using std::vector;

#include<typeinfo>

#include"SavingsAccount.h"
#include"CheckingAccount .h"

int main() {
	Account a1(500), a2( -100 );	
	SavingsAccount s1(100, .1), s2(500, -.05);
	CheckingAccount c1(1000, .05), c2(-100, .025);

	vector<Account*>accounts(6);
	accounts[0] = &a1;
	accounts[1] = &a2;
	accounts[2] = &s1;
	accounts[3] = &s2;
	accounts[4] = &c1;
	accounts[5] = &c2;

	for (int i = 0; i < accounts.size(); i++) {
		if (accounts[i]->getBalance() == .00) {
			cout << "Enter crdit for " << typeid(*accounts[i]).name()
				<< ": ";
			double credit;
			cin >> credit;
			accounts[i]->credit(credit);
		}
		accounts[i]->debit(accounts[i]->getBalance() / 2);
		if (dynamic_cast<SavingsAccount*>(accounts[i]) != 0) {
			SavingsAccount* sa = dynamic_cast<SavingsAccount*>(accounts[i]);
			cout << "The balance increased by " << sa->getRate() * 100 << "%\n";
			accounts[i]->credit(sa->calculateInterest());
		}
		cout << "The balance of account " << typeid(*accounts[i]).name()
			<< ": " << accounts[i]->getBalance() << "\n\n";
	}

	system("pause");
	return 0;
}