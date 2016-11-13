#include<iostream>
using namespace std;

#include<vector>
using std::vector;

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

	vector<Package*>packages(3);
	packages[0] = &p1;
	packages[1] = &p2;
	packages[2] = &p3;

	double sumOfPrice = 0;
	for (int i = 0; i < packages.size(); i++) {
		cout << "Name: " << packages[i]->getName() << ";\n"
			<< "Address: " << packages[i]->getAddress() << ";\n"
			<< "Region: " << packages[i]->getRegion() << ";\n"
			<< "City: " << packages[i]->getCity() << ";\n"
			<< "Sender index: " << packages[i]->getIndexSender() << ";\n"
			<< "Recipien index: " << packages[i]->getIndexRecipient()
			<< "\nCalculate cost: " << packages[i]->calculateCost();
		cout << "\n\n";
		sumOfPrice += packages[i]->calculateCost();
	}
	cout << "Sum of price: " << sumOfPrice << "\n\n";

	cout << p1 << "Calculate cost: " << p1.calculateCost() << "\n\n"
		<< p2 << "Calculate cost: " << p2.calculateCost() << "\n\n"
		<< p3 << "Calculate cost: " << p3.calculateCost() << endl;

	system("pause");
	return 0;
}