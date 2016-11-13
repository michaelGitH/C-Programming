#include<iostream>
#include"CheckingAccount .h"

CheckingAccount::CheckingAccount(double b, double c)
	: Account(b), cost(c >= .00 ? c : .00)
{
	if (c < .00)
		std::cout << "Cost of transaction can't be less than 0! New cost of transaction is 0.\n";
}

double CheckingAccount::getCost() const {
	return cost;
}

void CheckingAccount::credit(double c) {
	if (getBalance() + c > cost) {
		Account::credit(c);
		Account::debit(cost);
	}
	else
		std::cout << "New balance less than cost of transaction! Operation not executed.\n";
}

void CheckingAccount::debit(double d) {
	Account::debit(d + cost);
}