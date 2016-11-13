#pragma once
#include<iostream>
#include<iomanip>

using namespace std;

void ReNumber() {
	//Перевернутое число
	int N, R = 0;
	do cout << "Введите положительное целое N: ", cin >> N;
	while (N<0);
	do {
		int i = N % 10; N /= 10;
		R = R * 10 + i;
	} while (N > 0);
	cout << "\nПеревернутый N: " << R << endl;
}