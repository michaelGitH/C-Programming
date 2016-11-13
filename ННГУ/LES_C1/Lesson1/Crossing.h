#pragma once
#include<iostream>
using namespace std;

void Crossing() {
	cout << "\n8) Пересечение\n\n";

	int x1, y1, x2, y2, x3, y3, x4, y4; // координаты точек 2 прямоугольников

	cout << "Введите координаты точек: ";
	cin >> x1 >> y1 >> x2 >> y2
		>> x3 >> y3 >> x4 >> y4;

	int X1, Y1, X2, Y2;

	if ((x1 >= x3 && x1 <= x4 && x2 >= x3 && x2 <= x4)
		|| (x1 >= x4 && x1 <= x3 && x2 >= x4 && x2 <= x3))
		X1 = x1, X2 = x2;
	else  if ((x1 >= x2 && x1 <= x4 && x3 >= x2 && x3 <= x4)
		|| (x1 >= x4 && x1 <= x2 && x3 >= x4 && x3 <= x2))
		X1 = x1, X2 = x3;
	else  if ((x1 >= x2 && x1 <= x3 && x4 >= x2 && x4 <= x3)
		|| (x1 >= x3 && x1 <= x2 && x4 >= x3 && x4 <= x2))
		X1 = x1, X2 = x4;
	else  if ((x2 >= x1 && x2 <= x4 && x3 >= x1 && x3 <= x4)
		|| (x2 >= x4 && x2 <= x1 && x3 >= x4 && x3 <= x1))
		X1 = x2, X2 = x3;
	else  if ((x2 >= x1 && x2 <= x3 && x4 >= x1 && x4 <= x3)
		|| (x2 >= x3 && x2 <= x1 && x4 >= x3 && x4 <= x1))
		X1 = x2, X2 = x4;
	else  if ((x3 >= x1 && x3 <= x2 && x4 >= x1 && x4 <= x2)
		|| (x3 >= x2 && x3 <= x1 && x4 >= x2 && x4 <= x1))
		X1 = x3, X2 = x4;

	if ((y1 >= y3 && y1 <= y4 && y2 >= y3 && y2 <= y4)
		|| (y1 >= y4 && y1 <= y3 && y2 >= y4 && y2 <= y3))
		Y1 = y1, Y2 = y2;
	else  if ((y1 >= y2 && y1 <= y4 && y3 >= y2 && y3 <= y4)
		|| (y1 >= y4 && y1 <= y2 && y3 >= y4 && y3 <= y2))
		Y1 = y1, Y2 = y3;
	else  if ((y1 >= y2 && y1 <= y3 && y4 >= y2 && y4 <= y3)
		|| (y1 >= y3 && y1 <= y2 && y4 >= y3 && y4 <= y2))
		Y1 = y1, Y2 = y4;
	else  if ((y2 >= y1 && y2 <= y4 && y3 >= y1 && y3 <= y4)
		|| (y2 >= y4 && y2 <= y1 && y3 >= y4 && y3 <= y1))
		Y1 = y2, Y2 = y3;
	else  if ((y2 >= y1 && y2 <= y3 && y4 >= y1 && y4 <= y3)
		|| (y2 >= y3 && y2 <= y1 && y4 >= y3 && y4 <= y1))
		Y1 = y2, Y2 = y4;
	else  if ((y3 >= y1 && y3 <= y2 && y4 >= y1 && y4 <= y2)
		|| (y3 >= y2 && y3 <= y1 && y4 >= y2 && y4 <= y1))
		Y1 = y3, Y2 = y4;
	
	cout << "X1 = " << X1 << ", Y1 = " << Y1
		<< "\nX2 = " << X2 << ", Y2 = " << Y2 << endl;
}