#pragma once
#include<iostream>
#include<iomanip>

using namespace std;

void Weather() {
	double max = -1, minPos = -1, averagePos = -1, num;
	int count = 0, countPos = 0;
	do {
		cout << "������� �����������: ";
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
		cout << "\n������������� ����������� �� ���������!";
		cout << "\n����� �������: " << count << endl;
	}
	else {
		cout << "\n������������ �����������: " << max
			<< "\n����������� �������������: " << minPos
			<< "\n������� �������������: " << averagePos
			<< "\n����� �������: " << count << endl;
	}
}