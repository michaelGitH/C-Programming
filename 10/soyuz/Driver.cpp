#include<iostream>
using std::cout;
using std::endl;

#include "SavingsAccount.h"

int main() {

	SavingsAccount::modifyInterestRate(3);
	SavingsAccount saver1(2000);
	SavingsAccount saver2(3000);

	saver1.cmi().print();
	saver2.cmi().print();

	saver1.modifyInterestRate(4);

	saver1.cmi().print();
	saver2.cmi().print();

	system("pause");
	return 0;
}