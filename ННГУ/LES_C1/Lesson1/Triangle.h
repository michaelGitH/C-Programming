#pragma once
#include<iostream>
using namespace std;

#include<cmath>

void Triangle() {
	cout << "\n5) �����������\n\n";

	double a, b, c, // ������� ������������
		p, // ��������
		S, // �������
		pp; // ������������
	cout << "������� ������� ������������: ";
	cin >> a >> b >> c;
	p = a + b + c;
	pp = p / 2;
	S = sqrt((pp* (pp - a) * (pp - b) * (pp - c)));
	cout << "������� ������������: " << S
		<< "\n��������: " << p << endl;
}
