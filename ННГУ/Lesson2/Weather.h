#pragma once
#include<iostream>
#include<iomanip>

using namespace std;

void Weather() {
	double max = -1, minPos = -1, averagePos = -1, num;
	int count = 0, countPos = 0;
	do {
		cout << "Введите температуру: ";
		cin >> num;
		if (!cin.eof()) {
			count++;
			max = (num > max) ? num : max;
			if (num > 0) {
				1 == count ? minPos = num, averagePos = 0 : minPos;
				minPos == (num < minPos) ? num : minPos;
				averagePos += num;
				countPos++;
			}
		}
		else break;
		if (!cin) {
			cin.clear(); cin.ignore(
				cin.rdbuf()->in_avail());
		}
		
	} while (1);

	averagePos /= countPos;
	if (max == -1) {
		cout << "\nПоложительные температуры не вводились!";
		cout << "\nВсего введено: " << count << endl;
	}
	else {
		cout << "\nМаксимальная температура: " << max
			<< "\nМинимальная положительная: " << minPos
			<< "\nСредняя положительная: " << averagePos
			<< "\nВсего введено: " << count << endl;
	}
}