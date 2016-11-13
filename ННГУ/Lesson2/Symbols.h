#pragma once
#include<iostream>
#include<iomanip>

using namespace std;

void Symbols() {
	//Символы
	char input;
	cout << "Вводите данные. Если ввод закончен, введите ctrl+Z: ";
	int symb = 0, white = 0, black = 0, words = 0, strings = 0, flag = -1;
	cin.unsetf(cin.skipws);

	do {
		cin >> input;
		if (cin.eof()) break;
		else if (!cin) {
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
		}
		else {
			symb++;
			if (input == ' ' || input == '\t' || input == '\n') {
				white++;
				input == '\n' ? strings++ : 0;
				(flag != -1) ? flag = -1, words++ : 0;
			}
			else {
				flag = 1;
				black++;
			}
		}
	} while (1);

	cout << "\nСимволов: " << symb
		<< "\nБелых символов: " << white
		<< "\nОстальных символов: " << black
		<< "\nСлов: " << words
		<< "\nЗаписей: " << strings << endl;
}
