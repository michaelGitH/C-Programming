#pragma once
#include<iostream>
#include<iomanip>

using namespace std;

void Cofactors() {
	//Сомножители
	int N;
	int j = 0;
	cout << "Введите N: "; cin >> N;
	cout << N << " = ";
	for (int i = 1, count = 0; i <= N; i++) {
		if (N % i == 0) {
			for (int j = 2; j < i; j++)
				if (i % j == 0)
					count++;
			if (count == 0) {
				cout << i;
				N /= i;
				if (N != 1) cout << '*';
				if (i != 1) i--;
				j++;
			}
			else count = 0;
		}
	}
	cout << endl;
}
