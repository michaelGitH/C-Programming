#pragma once
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
using namespace std;

double fab(double);

void Quiet() {
	cout << "\n12) Тихий дом\n\n";

	int N, M; // количество домов и источников шума

	cout << "Введите количество домов и источников шума: ";
	cin >> N >> M;
	
	double *n = new double[N];
	double *m = new double[M];

	srand(time(0));

	for (int i = 0; i < N; i++) {
		cout << "Введите координату для " << i + 1 << " дома: ";
		cin >> n[i];
		cout << endl;
	}
	for (int i = 0; i < M; i++) {
		cout << "Введите координату для " << i + 1 << " источника шума: ";
		cin >> m[i];
		cout << endl;
	}

	int minN = -999999;
	int max = 0;

	for (int i = 0; i < N; i++) {	
		int min = 9999999;
		for (int j = 0; j < M; j++) {
			if (fab(n[i] - m[j]) < min) {
				min = fab(n[i] - m[j]);
			}
		}
		if (min > max) {
			max = min;
			minN = i;
		}
	}

	if (minN != -999999)
		cout << "Тихий дом: " << n[minN] << endl;
	else if(minN == -999999)
		cout << "Все дома шумные!" << endl;

	delete[] n;
	delete[] m;
}

double fab(double x) {
	return x >= 0 ? x : -x;
}
