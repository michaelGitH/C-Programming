#pragma once
#include<iostream>
#include<iomanip>

using namespace std;

void Debit() {
	//�����
	double S, A, N;

	cin >> S >> A >> N;

	for (int i = 1; i <= N; i++, S *= (1 + A/100/12));

	cout << setprecision(2) << fixed << "����� ������: " << S << endl;
}