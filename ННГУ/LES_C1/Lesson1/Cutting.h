#pragma once
#include<iostream>
using namespace std;

void Cutting() {
	cout << "\n6) �������\n\n";

	int x, y, // ������ ���������
		a, b; // ������ ����� ��� �������

	cout << "������� ������ ���������: ";
	cin >> x >> y;
	cout << "������� ������ ����� ��� �������: ";
	cin >> a >> b;

	int sum1, sum2; // ����������� ��������� 2 �������� �������

	sum1 = (a / x) * (b / y) + (((a % x) / y) * b / x) + (((b % y) / x) * a / y);
	sum2 = (a / y) * (b / x) + (((a % y) / x) * b / y) + (((b % x) / y) * a / x);

	cout << "��������� ������ ��������: " << sum1
		<< "\n������ ��������:" << sum2 << endl;
	if (sum1 > sum2)
		cout << "������ �������� ������!\n";
	else
		cout << "������ �������� ������!\n";
}