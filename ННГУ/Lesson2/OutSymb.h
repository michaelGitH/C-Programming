#pragma once
#pragma once
#include<iostream>
#include<iomanip>

using namespace std;

void OutSymb() {
	//¬клад
	for (int i = 32; i < 256; i++) {
		if (i % 8 == 0) cout << endl;
		cout << char(i) << ' ';
	}
	cout << endl;
}