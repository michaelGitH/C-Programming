#include<iostream>
using std::cout;
#include"Circle.h"
#include<iomanip>
using std::setw;

Circle::Circle(const double r)
{
	setRadius(r);
}

void Circle::draw(const int v, const int h,
	const int s, const char fr, const char fi) {
	TwoDimensionalShape::draw(v, h, s, fr, fi);
	int hor = getHorizontal() + 1;
	int size = getSize();
	char frame = getFrame();
	char fill = getFilling();

	int minus = (size > 6) ? size / 2 : 3;
	cout << setw(hor + minus) << frame << frame << '\n';
	cout << setw(hor + minus - 2) << frame;
	for (int i = 0; i < 4; i++)
		cout << fill;
	cout << frame << '\n';
	for (int j = 0; j < 2; j++) {
		cout << setw(hor + minus - 3) << frame;
		for (int i = 0; i < 6; i++)
			cout << fill;
		cout << frame << '\n';
	}
	cout << setw(hor + minus - 2) << frame;
	for (int i = 0; i < 4; i++)
		cout << fill;
	cout << frame << '\n';
	cout << setw(hor + minus) << frame << frame << '\n';
}

void Circle::setRadius(const double r) {
	radius = (r > 0) ? r : 1.00;
}

double Circle::getRadius() const {
	return radius;
}

double Circle::getArea() const {
	return 3.1415926535 * radius * radius;
}

void Circle::print() const {
	std::cout << "Shape: Circle.\n";
}