#pragma once
#include<iostream>
using namespace std;

void Meet() {
	cout << "\n9) Встреча\n\n";

	int Ds1, Df1, Ms1, Mf1, // Дата начала и конца командировки первого друга
		Ds2, Df2, Ms2, Mf2; // второго друга

	cout << "Введите даты начала и конца командировок: ";
	cin >> Ds1 >> Ms1 >> Df1 >> Mf1 >> Ds2 >> Ms2 >> Df2 >> Mf2;
	int days = 0; // количество дней встречи

	if (Ms2 >= Ms1 && Ms2 <= Mf1) {
		if (Mf1 <= Mf2) {
			if (Mf1 == Ms2)
				days = Df1 - Ds2;
			else
				days = ((Mf1 - Ms2 - 1) * 30) + Df1 + (30 - Ds2);
		}
		else {
			if (Ms2 == Mf2)
				days = Df2 - Ds2;
			else
				days = ((Mf2 - Ms2 - 1) * 30) + Df2 + (30 - Ds2);
		}
	}
	else if(Ms1 >= Ms2 && Ms1 <= Mf2) {
		if (Mf2 <= Mf1) {
			if (Mf2 == Ms1)
				days = Df2 - Ds1;
			else
				days = ((Mf2 - Ms1 - 1) * 30) + Df2 + (30 - Ds1);
		}
		else {
			if (Ms1 == Mf1)
				days = Df1 - Ds1;
			else
				days = ((Mf1 - Ms1 - 1) * 30) + Df1 + (30 - Ds1);
		}
	}
	days > 0 ? cout << "Дни возможной встречи: " << days : cout << "Встреча невозможна!";
	cout << endl;
}