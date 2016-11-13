#pragma once
#include<iostream>
using namespace std;

void Date() {
	cout << "\n4) Дата\n\n";
	int d1, m1, d2, m2; // дни и мксяцы 2 дат

	cout << "Введите 1 дату: ";
	cin >> d1 >> m1;
	cout << "Введите 2 дату: ";
	cin >> d2 >> m2;

	if (m1 < m2 || (m1 == m2 && d1 < d2))
		cout << "Первая дата раньше второй\n";
	else if (m2 < m2 || (m1 == m2 && d2 < d1))
		cout << "Вторая дата раньше первой\n";
	else
		cout << "Даты равны\n";
}