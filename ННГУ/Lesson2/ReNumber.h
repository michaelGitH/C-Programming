#pragma once
#include<iostream>
#include<iomanip>

using namespace std;

void ReNumber() {
	//������������ �����
	int N, R = 0;
	do cout << "������� ������������� ����� N: ", cin >> N;
	while (N<0);
	do {
		int i = N % 10; N /= 10;
		R = R * 10 + i;
	} while (N > 0);
	cout << "\n������������ N: " << R << endl;
}