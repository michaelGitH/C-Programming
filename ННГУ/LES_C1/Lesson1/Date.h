#pragma once
#include<iostream>
using namespace std;

void Date() {
	cout << "\n4) ����\n\n";
	int d1, m1, d2, m2; // ��� � ������ 2 ���

	cout << "������� 1 ����: ";
	cin >> d1 >> m1;
	cout << "������� 2 ����: ";
	cin >> d2 >> m2;

	if (m1 < m2 || (m1 == m2 && d1 < d2))
		cout << "������ ���� ������ ������\n";
	else if (m2 < m2 || (m1 == m2 && d2 < d1))
		cout << "������ ���� ������ ������\n";
	else
		cout << "���� �����\n";
}