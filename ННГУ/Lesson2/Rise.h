#pragma once
#include<iostream>
#include<iomanip>

using namespace std;

void Rise() {
	//Рост курса
	int N, P, mCount = 0, max = 0, count = 1;
	double c, rCount = 0; // значение курса
	cout << "Введите количество дней: "; cin >> N;
	
	cout << "Введите значение крса валюты за " << count << " день: ";
	cin >> P; count++;
	for (; count <= N; count++) {
		cout << "Введите значение крса валюты за " << count << " день: ";
		cin >> c;
		if (c > P) rCount++, mCount++;
		else mCount > max ? max = mCount, mCount = 0 : mCount = 0;
		P = c;
	}
	cout << "Процент количества дней роста: " << rCount / N * 100
		<< "\nСамый продолжительный участок роста: " << max << endl;
}