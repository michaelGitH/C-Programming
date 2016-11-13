#pragma once
#include<iostream>
using namespace std;

void Route() {
	cout << "\n10) Маршрут\n\n";

	int L1, L2, // Очереди на остановках
		M; // вместимость автобуса

	cout << "Размеры очередей на 2 остановках: ";
	cin >> L1 >> L2;
	cout << "Вместимость автобуса: ";
	cin >> M;

	if (M >= L1) {
		M -= L1, L1 -= L1;
		if (M >= L2)
			M -= L2, L2 -= L2;
		else
			L2 -= M, M -= M;
	}
	else
		L1 -= M, M -= M;

	cout << "Очередь на 1 остановке: " << L1
		<< "\nОчередь на 2 остановке: " << L2
		<< "\nОсталось места в автобусе: " << M << endl;
}