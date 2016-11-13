#include<iostream>
using std::cout;
using std::endl;
using std::cin;
using std::cerr;

#include"TwoDayPackage.h"

TDPackage::TDPackage(string n, string a, string r, string c,
	string is, string ir, double w, double p, double tdp)
	: Package(n, a, r, c, is, ir, w, p), tDPrice(tdp)
{
	setTDPrice(tDPrice);
}

void TDPackage::setTDPrice(double &tdp) {
	int i;
	for (i = 0; i < 3; i++) {
		if (tdp <= 0) {
			cerr << "Incorrect price of two day package. Price is always more than 0!\n"
				<< "Enter correct price: ";
			cin >> tdp;
		}
		if (tdp > 0)
			i = 4;
	}
	if (3 == i) {
		cout << "Wrong price of two day package! Set price default( 1 )\n";
		tdp = 1;
	}
}

double TDPackage::calculateCost() const {
	return Package::calculateCost() + tDPrice;
}

ostream &operator<<(ostream& output, const TDPackage &right) {
	Package p = right;
	operator<<(output, p);
	output << "Two day price: " << right.tDPrice << endl;
	return output;
}