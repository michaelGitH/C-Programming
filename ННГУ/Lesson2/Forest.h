#pragma once
#pragma once
#include<iostream>
#include<iomanip>

using namespace std;

void Forest() {
	//�������������
	double V, Z, P, previous; bool flag = true;
	int count = 0;
	cout << "������� �������������� ����� ���������: "; cin >> V;
	cout << "������� ��������� �������: "; cin >> P;
	cout << "������� ������� ����� �������������: "; cin >> Z;

	while (V > 0 && flag) {
		previous = V;
		V -= Z;
		V = V + V * P / 100;
		flag = V > previous ? false : true;
		count++;
	}
	flag ? cout << "��� ����� �������� �� " << count << "���\n" :
		cout << "��� �� ����� ��������!\n";
}