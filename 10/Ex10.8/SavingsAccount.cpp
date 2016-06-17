#include<iostream>
using std::cout;
using std::endl;
using std::fixed;
#include<iomanip>
using std::setprecision;

#include "SavingsAccount.h"

double SavingsAccount::annualInterestRate = 16;
void SavingsAccount::modifyInterestRate(double c) {
	if (c > 0)
		annualInterestRate = c;
	cout << "stavka " << annualInterestRate << endl;
}

SavingsAccount::SavingsAccount(int b) {
	if (b < 500) {
		cout << "Minimal sum of deposit is 500$, setting deposit to 0." << endl;
		savingBalance = 0;
	}
	else
		savingBalance = b;
}

SavingsAccount &SavingsAccount::cmi() {
	savingBalance = savingBalance + savingBalance * ((annualInterestRate / 100 ) / 12);
	return *this;
}

void SavingsAccount::print() const {
	cout << fixed << setprecision( 2 ) << savingBalance << endl;
}
