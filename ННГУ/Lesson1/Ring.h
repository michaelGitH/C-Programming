#pragma once
#include<iostream>
using namespace std;

void Ring() {
	cout << "\n11) ������\n\n";

	int N, // ��������� ����� ������
		K; // ���������� ������������ �����

	cout << "���������� �����: ";
	cin >> N;
	cout << "���������� ������������ �����: ";
	cin >> K;

	int i = 0; // ���������� ������� �������
	for (int j = 0; j < N || j % N != 0; i++, j += K);

	cout << "���������� �������: " << i << endl;
}
