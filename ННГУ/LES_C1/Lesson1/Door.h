#pragma once
#include<iostream>
using namespace std;

void Door() {
	cout << "\n3) �����\n\n";
	int x, y, z, // �������� �����
		a, b; // ��������� �������� ������

	cout << "������� ��������� �������� ������: ";
	cin >> a >> b;
	cout << "������� �������� �����: ";
	cin >> x >> y >> z;

	if ((x <= a && y <= b) || (y <= a && x <= b) ||
		(x <= a && z <= b) || (z <= a && x <= b) ||
		(y <= a && z <= b) || (z <= a && y <= b))
		cout << "�������\n";
	else
		cout << "�� �������\n";
}
