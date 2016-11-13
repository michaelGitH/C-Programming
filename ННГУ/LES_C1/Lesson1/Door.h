#pragma once
#include<iostream>
using namespace std;

void Door() {
	cout << "\n3) Дверь\n\n";
	int x, y, z, // габариты ящика
		a, b; // параметры дверного проема

	cout << "Введите параметры дверного проема: ";
	cin >> a >> b;
	cout << "Введите габариты ящика: ";
	cin >> x >> y >> z;

	if ((x <= a && y <= b) || (y <= a && x <= b) ||
		(x <= a && z <= b) || (z <= a && x <= b) ||
		(y <= a && z <= b) || (z <= a && y <= b))
		cout << "Пройдет\n";
	else
		cout << "Не пройдет\n";
}
