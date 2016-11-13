#pragma once
#include<iostream>
#include<iomanip>

using namespace std;

void Lottery() {
	//Лотерея
	int r1 = 10, r2 = 15, p1, p2;
	int count0 = 0, count1 = 0, count2 = 0;

	do {
		cout << "Введите 2 разных числа: ";
		cin >> p1 >> p2;
		if (p1 == p2) {
			cout << "Числа не должны быть одинаковыми, порпобуйте еще раз!\n";
			continue;
		}
		if (!cin.eof()) {
			if (p1 != r1 && p1 != r2 && p2 != r1 && p2 != r2)
				count0++;
			else if ((p1 == r1 && p2 == r2) || (p1 == r2 && p2 == r1))
				count2++;
			else count1++;
		}
	}while (!cin.eof());

	cout << "0: " << count0 << "\n1: " << count1
		<< "\n2: " << count2 << endl;
}
