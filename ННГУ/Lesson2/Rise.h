#pragma once
#include<iostream>
#include<iomanip>

using namespace std;

void Rise() {
	//���� �����
	int N, P, mCount = 0, max = 0, count = 1;
	double c, rCount = 0; // �������� �����
	cout << "������� ���������� ����: "; cin >> N;
	
	cout << "������� �������� ���� ������ �� " << count << " ����: ";
	cin >> P; count++;
	for (; count <= N; count++) {
		cout << "������� �������� ���� ������ �� " << count << " ����: ";
		cin >> c;
		if (c > P) rCount++, mCount++;
		else mCount > max ? max = mCount, mCount = 0 : mCount = 0;
		P = c;
	}
	cout << "������� ���������� ���� �����: " << rCount / N * 100
		<< "\n����� ��������������� ������� �����: " << max << endl;
}