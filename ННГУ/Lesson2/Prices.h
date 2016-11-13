#pragma once
#include<iostream>
#include<iomanip>
using namespace std;

void Prices() {
	//Цены
	double price, min, max; bool check = false;
	int N; cout << "Введите количество торговых точек: ";
	cin >> N;

	for (int i = 0; i < N; i++) {
		cout << "Введите цену масла: ";
		cin >> price;
		if (price <= 0) {
			cout << "Цена должна быть положительной!\n";
			i--;
			continue;
		}
		max = (check == false) ? min = price, check = true, price : max;
		price > max ? max = price : (price < min ? min = price : min);
	}

	cout << "Пределы колебания цен: от " << min << " до " << max << endl;

}

