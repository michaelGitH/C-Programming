#pragma once
#include<iostream>
#include<iomanip>
using namespace std;

void Prices() {
	//����
	double price, min, max; bool check = false;
	int N; cout << "������� ���������� �������� �����: ";
	cin >> N;

	for (int i = 0; i < N; i++) {
		cout << "������� ���� �����: ";
		cin >> price;
		if (price <= 0) {
			cout << "���� ������ ���� �������������!\n";
			i--;
			continue;
		}
		max = (check == false) ? min = price, check = true, price : max;
		price > max ? max = price : (price < min ? min = price : min);
	}

	cout << "������� ��������� ���: �� " << min << " �� " << max << endl;

}

