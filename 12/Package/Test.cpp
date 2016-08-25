#include<iostream>
using namespace std;

#include"TwoDayPackage.h"
#include"ONPackage.h"

void tester(string &b) {
	cin >> b;
}

int main() {
	Package p1("Mihail Tarakanov", "Gagarina street, 198, 30", "Nizhny Novgorod region",
		"Nizhny Novgorod", "106123", "103456", 12.123, 5.35);

	TDPackage p2("Julia Tarakanova", "Gagarina street, 198, 30", "Nizhny Novgorod region",
		"Nizhny Novgorod", "123456", "654321", 12.123, 5.35, 5);

	ONPackage p3("mr.Ivanov", "Lenina street, 215, 5", "Nizhny Novgorod region",
		"Nizhny Novgorod", "123321", "456654", 12.123, 5.35, 2.5);

	cout << p1 << "Calculate cost: " << p1.calculateCost() << "\n\n"
		<< p2 << "Calculate cost: " << p2.calculateCost() << "\n\n"
		<< p3 << "Calculate cost: " << p3.calculateCost() << endl;

	system("pause");
	return 0;
}