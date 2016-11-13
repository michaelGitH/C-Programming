#pragma once
#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<ctime>
using namespace std;

//srand(time(0));
int N;
int a[100];
int i;
int j, x;


void begin();
void arrays1();
void arrays2();
void arrays3();
void arrays6();
void inversion();
void truncatedAverage();

void begin() {
	N = j = -1;
	while (N < 0)
	{
		cout << "������� ������ ������(������������� �����): "; cin >> N;
	}
	for (i = 0; i < N; i++)
		a[i] = 1 + rand() % 100;
	cout << "����� �����:\n";
	for (i = 0; i < N; i++)
		cout << a[i] << ' ';
	cout << endl;
}

void arrays1() {
	begin();

	//�������� � ��������� ������� ����� � ��������� �������� ������ �� 1
	while (j < 0 || j > N - 1) {
		cout << "������� ������� ��� ������� �� " << 0 << " �� "
			<< N - 1 << ": "; cin >> j;
	}
	cout << "������� �����, ������� ����� ��������: "; cin >> x;
	//******************************
	/**/a[N++] = a[j], a[j] = x;/**/
								//*****************************
	cout << "����� �����:\n";
	for (i = 0; i < N; i++)
		cout << a[i] << ' ';
	cout << endl;
}

void arrays2() {
	begin();
	//���������� ������� � ������ ��������� �������� � ��� ��������� �����
	cout << "����� ����� ����� ������ � ������? "; cin >> x;
	//***********************************
	/**/for (i = 0; i < N; ++i)/********/
	/**/	if (a[i] == x) j = i;//break;
	//***********************************
	if(j!=-1) cout << "����� ������� � �������� " << j << endl;
	else cout << "����� �� �������" << endl;
}

void arrays3() {
	begin();
	while (j < 0 || j > N - 1) {
		cout << "������� ������� ��� �������� �� ������(�� " << 0 << " �� "
			<< N - 1 << "): "; cin >> j;
	}
	//������� ������� � ����������� �������
	for (i = j; i < N - 1; ++i)
		a[i] = a[i + 1]; --N;
	cout << "����� �����:\n";
	for (i = 0; i < N; i++)
		cout << a[i] << ' ';
	cout << endl;
}

void arrays6() {
	begin();
	//������������ ��������� ������ � �������� �������
	for (i = 0, j = N - 1; i <= N / 2 - 1; ++i, --j) {
		a[i] = a[i] + a[j];
		a[j] = a[i] - a[j];
		a[i] = a[i] - a[j];
	}
	for (i = 0; i < N; i++)
		cout << a[i] << ' ';
	cout << endl;
}

void inversion() {
	arrays6();
}

void truncatedAverage() {
	begin();
	int max, min, count = N; double sum = 0;
	max = min = a[0];
	for (i = 1; i < N; ++i)
		if (a[i] < min) min = a[i];
		else if (a[i] > max) max = a[i];

	cout << "\n������ ��� ��������:\n";
	for (i = 0; i != N; ++i) {
		if (a[i] != min && a[i] != max) {
			sum += a[i]; cout << a[i] << ' ';
		}
		else  --count;
	}
	cout << "������� ���������: " << sum << '/' << count
		<< " = " << sum / count << endl;
}


