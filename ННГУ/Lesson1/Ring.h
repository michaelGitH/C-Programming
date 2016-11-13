#pragma once
#include<iostream>
using namespace std;

void Ring() {
	cout << "\n11) Кольцо\n\n";

	int N, // последняя точка кольца
		K; // количество пропускаемых точек

	cout << "Количество точек: ";
	cin >> N;
	cout << "Количество пропускаемых точек: ";
	cin >> K;

	int i = 0; // количество звеньев ломаной
	for (int j = 0; j < N || j % N != 0; i++, j += K);

	cout << "Количество звеньев: " << i << endl;
}
