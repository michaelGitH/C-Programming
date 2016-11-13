#pragma once
#include<iostream>
using namespace std;

void Cutting() {
	cout << "\n6) Раскрой\n\n";

	int x, y, // размер заготовок
		a, b; // размер листа для раскроя

	cout << "Задайте размер заготовок: ";
	cin >> x >> y;
	cout << "Задайте размер листа для раскроя: ";
	cin >> a >> b;

	int sum1, sum2; // колличество заготовок 2 способов раскроя

	sum1 = (a / x) * (b / y) + (((a % x) / y) * b / x) + (((b % y) / x) * a / y);
	sum2 = (a / y) * (b / x) + (((a % y) / x) * b / y) + (((b % x) / y) * a / x);

	cout << "Заготовок первым способом: " << sum1
		<< "\nВторым способом:" << sum2 << endl;
	if (sum1 > sum2)
		cout << "Первым способом больше!\n";
	else
		cout << "Вторым способом больше!\n";
}