#pragma once
#include<iostream>
#include<iomanip>

using namespace std;

void Equation() {
	//�������� ���������
	int K, N = 0;
	cout << "������� K: "; cin >> K;
	for (int i = 1, r = 0; i != N; i++) {
		for (int j = i; j > 0; j /= 10) r++;
		i == K*r ? N = i, i-- : r = 0;
	}
	cout << "N = " << N << endl;
}