#pragma once
#include"UserClass.h"

template<typename T>
bool isEqualTo(T left, T right) {
	return left == right ? true : false;
}

void chapter14_6() {
	int i1 = 5, i2 = 10;
	double d1 = 10, d2 = 10;
	char c1 = 'a', c2 = 'A';
	User u1, u2(0);

	cout << boolalpha << "isEqualTo(i1, i2) = " << isEqualTo(i1, i2) << endl;
	cout << "isEqualTo(d1, d2) = " << isEqualTo(d1, d2) << endl;
	cout << "isEqualTo(c1, c2) = " << isEqualTo(c1, c2) << endl;
	cout << "isEqualTo(u1, u2) = " << isEqualTo(u1, u2) << endl;
}