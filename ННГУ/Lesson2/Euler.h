#pragma once
#include<iostream>
#include<iomanip>

using namespace std;

void Euler() {
	//Ёйлер
	int sum = 1770;
	int b = 21, l = 31, L = 0, B = 0, s = 0;
	do {
		sum -= b, s += b;
		if (sum%l == 0 && s%b == 0)
			L = sum / l, B = s / b;
		else if (sum%b == 0 && s%l == 0)
			L = s / l, B = sum / b;
	} while (!((sum%l == 0 && s%b == 0) || (sum%b == 0 && s%l == 0)));
	cout << "Ћошадей: " << L << ", быков: " << B << endl;
}