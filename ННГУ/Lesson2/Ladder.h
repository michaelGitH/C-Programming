#pragma once
#include<iostream>
#include<iomanip>

using namespace std;

void Ladder() {
	//Ступеньки
	int n;
	int height = 0, count = 1, first = 0, lFirst = 0, max = 0,
		last = 0, length = 0, l = 0, previous = 0,
		lHeight = 0, F = 0, L = 0;
	do {
		cout << "Введите высоту ступеньки: ";
		cin >> n;
		if (cin && n > 0 || cin.eof()) {
			if (cin.eof()) n = -1;
			lHeight = height; height = n;
			if (n != previous) {
				count--, last = count, l = last - first,
				lFirst = first, first = count, previous = n;
			}
			if (l > length) {
				length = l, l = 0, max = lHeight;
				F = lFirst, L = last;
			}
			else if (l == length && lHeight > max) {
				length = l, l = 0, max = lHeight;
				F = lFirst, L = last;
			}
			if (cin.eof()) break;
			count++;
		}
		else {
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			cout << "Введено некорректное значение!"
				<< " Попробуйте еще раз." << endl; continue;
		}
	} while (1);

	cout << "\nВерхняя из самых длинных: " << max
		<< "\nДиапазон ступеней от " << F << " до " << L
		<< "\nПротяженность: " << length << endl;
}