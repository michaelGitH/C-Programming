#pragma once
#include<iostream>
using namespace std;

void Route() {
	cout << "\n10) �������\n\n";

	int L1, L2, // ������� �� ����������
		M; // ����������� ��������

	cout << "������� �������� �� 2 ����������: ";
	cin >> L1 >> L2;
	cout << "����������� ��������: ";
	cin >> M;

	if (M >= L1) {
		M -= L1, L1 -= L1;
		if (M >= L2)
			M -= L2, L2 -= L2;
		else
			L2 -= M, M -= M;
	}
	else
		L1 -= M, M -= M;

	cout << "������� �� 1 ���������: " << L1
		<< "\n������� �� 2 ���������: " << L2
		<< "\n�������� ����� � ��������: " << M << endl;
}