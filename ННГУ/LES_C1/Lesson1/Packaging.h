#pragma once
#include<iostream>
using namespace std;

void Packaging() {
	cout << "\n2) Упаковка\n\n";

	int product, // количество товара
		box; // емкость ящика в штуках

	cout << "Введите количество товара: ";
	cin >> product;
	cout << "Введите емкость ящика в штуках: ";
	cin >> box;

	cout << "Заполненных ящиков: " << product / box << endl;
	if (product % box != 0)
		cout << "Товара в незаполненном ящике: " << product % box << endl;
}