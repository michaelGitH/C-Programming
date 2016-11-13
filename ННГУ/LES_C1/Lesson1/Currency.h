#pragma once
#include<iostream>
using namespace std;

void Currency() {
	cout << "\n1) Валюта\n\n"; // номер и название задачи

	const double currency = 62.30; // курс доллара на 09.10.2016

	double number; // колличество денег
	int x; // значение для валюты

	cout << "В какую валюту необходимо сделать пересчет?( 1 - рубль, -1 - $): ";
	cin >> x;
	cout << "Какую сумму необходимо перевести? ";
	cin >> number;

	if (1 == x)
		cout << number << "$ = " << number * currency << " руб.\n";
	else if (-1 == x)
		cout << number << "руб. = " << number / currency << "$\n";
	else
		cout << "Значение валюты не верно!\n";
}