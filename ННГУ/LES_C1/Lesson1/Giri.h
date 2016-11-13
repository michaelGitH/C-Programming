#pragma once
#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;

void sort(int*, int);
void Giri();

void Giri() {
	cout << "\n12) ����\n\n"; // ����� � �������� ������
	int size; // ���������� ����
	cout << "������� ���������� ����: ";
	cin >> size;
	int *a = new int[size];
	srand(time(0));
	for (int i = 0; i < size; i++) {
		a[i] = 1 + rand() % 30;
	}
	int count1 = 0, count2 = 0; // ����
	for (int i = 0; i < size; i++)
		cout << "���� " << i + 1 << ": " << a[i] << endl;
	cout << endl;
	sort(a, size);

	for (int i = size - 1; i >= 0; i--) {
		if (count1 <= count2)
			count1 += a[i];
		else
			count2 += a[i];
	}

	cout << "�� ���� 1: " << count1
		<< "\n�� ���� 2: " << count2 << endl;
	delete[] a;
}

void sort(int *a, int s) {
	for (int i = 0; i < s; i++) {
		for (int j = 1; j < s; j++) {
			if (a[j] < a[j - 1]) {
				a[j] = a[j] + a[j - 1];
				a[j - 1] = a[j] - a[j - 1];
				a[j] = a[j] - a[j - 1];
			}
		}
	}
}