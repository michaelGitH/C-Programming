#include<iostream>
using std::cout;
using std::endl;
using std::cin;
using std::cerr;

#include"ONPackage.h"

ONPackage::ONPackage(string n, string a, string r, string c,
	string is, string ir, double w, double p, double onp)
	: Package(n, a, r, c, is, ir, w, p), oNPrice(onp)
{
	setONPrice(oNPrice);
}

void ONPackage::setONPrice(double &onp) {
	int i;
	for (i = 0; i < 3; i++) {
		if (onp <= 0) {
			cerr << "Incorrect price of two day package. Price is always more than 0!\n"
				<< "Enter correct price: ";
			cin >> onp;
		}
		if (onp > 0)
			i = 4;
	}
	if (3 == i) {
		cout << "Wrong price of two day package! Set price default( 1 )\n";
		onp = 1;
	}
}

double ONPackage::calculateCost() const {
	return Package::calculateCost() + Package::getWeight() * oNPrice;
}

ostream &operator<<(ostream& output, const ONPackage &right) {
	Package p = right;
	operator<<(output, p);
	output << "Over night price: " << right.oNPrice << endl;
	return output;
}