#pragma once
#include<iostream>
using namespace std;

void Currency() {
	cout << "\n1) ������\n\n"; // ����� � �������� ������

	const double currency = 62.30; // ���� ������� �� 09.10.2016

	double number; // ����������� �����
	int x; // �������� ��� ������

	cout << "� ����� ������ ���������� ������� ��������?( 1 - �����, -1 - $): ";
	cin >> x;
	cout << "����� ����� ���������� ���������? ";
	cin >> number;

	if (1 == x)
		cout << number << "$ = " << number * currency << " ���.\n";
	else if (-1 == x)
		cout << number << "���. = " << number / currency << "$\n";
	else
		cout << "�������� ������ �� �����!\n";
}