#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "������� ����� �������: ";
	double credit; cin >> credit;
	cout << "������� ���� ������� � �������: ";
	int time; cin >> time;
	cout << "������� ������� ������ �� �������: ";
	double per; cin >> per;
	per /= 100;

	credit = credit*(1 + per*double(time / 12));
	cout << "����� � ����������: " << credit << endl;
	

	system("pause");
}