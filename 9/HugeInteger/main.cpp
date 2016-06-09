#include<iostream>
using namespace std;

#include "Huge.h"

int main() {
	HugeInteger h1;
	HugeInteger h2;
	cout << "Enter h1: ";
	h1.input();

	cout << "Enter h2: ";
	h2.input();

	h1.output();
	h2.output();
	if (h1.isGreaterThanOrEqualTo(h2) == true)
		cout << "h1 >= h2" << endl;
	else
		cout << "h1 < h2" << endl;

	h1.add("123456789101112131415");
	h1.output();
	h2.substract("1000000000000000");
	h2.output();
	system("pause");

	return 0;
}