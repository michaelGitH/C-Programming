#pragma once
#include<iostream>
using namespace std;

void Packaging() {
	cout << "\n2) ��������\n\n";

	int product, // ���������� ������
		box; // ������� ����� � ������

	cout << "������� ���������� ������: ";
	cin >> product;
	cout << "������� ������� ����� � ������: ";
	cin >> box;

	cout << "����������� ������: " << product / box << endl;
	if (product % box != 0)
		cout << "������ � ������������� �����: " << product % box << endl;
}