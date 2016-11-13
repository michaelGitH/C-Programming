#pragma once
#include<iostream>
using namespace std;

#include<cmath>

void Triangle() {
	cout << "\n5) Треугольник\n\n";

	double a, b, c, // стороны треугольника
		p, // периметр
		S, // площадь
		pp; // полупериметр
	cout << "Введите стороны треугольника: ";
	cin >> a >> b >> c;
	p = a + b + c;
	pp = p / 2;
	S = sqrt((pp* (pp - a) * (pp - b) * (pp - c)));
	cout << "Площадь треугольника: " << S
		<< "\nПериметр: " << p << endl;
}
