#pragma once
#include<iostream>
#include<iomanip>

using namespace std;

void MinMax() {
	// Наименьшая/Наибольшая цифра

	int N, max = -2, min;

	do {
		cout << "Введите положительное целое: ";
		cin >> N;
		if (!cin) {
			cin.clear(); cin.ignore(
			cin.rdbuf()->in_avail());
		}
	} while (N<0);

	for (int x, i = 0; N > 0; N /= 10, i++) {
		x = N % 10;
		if (i != 0) {
			min = x<min ? x : min;		
		}
		else min = x;
		max = (x % 2 != 0 && x>max) ? x : max;
	}

	cout << "Минимальное: " << min << ", Максимальное нечетное: ";
	max != -2 ? cout << max << endl : cout << "Нечетных цифр в числе нет!" << endl;
}