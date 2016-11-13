#include<iostream>
using std::cout;
#include<iomanip>
using std::setw;

#include<cmath>
using std::sqrt;

#include"Triangle.h"

Triangle::Triangle(const double s1, const double s2,
	const double s3) 
{
	setSide(s1, s2, s3);
}

void Triangle::draw(const int v, const int h,
	const int s, const char fr, const char fi) {
	TwoDimensionalShape::draw(v, h, s, fr, fi);
	int hor = getHorizontal() + 1;
	int size = getSize();
	char frame = getFrame();
	char fill = getFilling();

	cout << setw(hor + (size/2) + 1) << frame << '\n';
	for (int i = 1, count = 1; i < size; i += 2, count++) {
		cout << setw(1 + hor + (size/2) - count) << frame;
		for (int j = 0; j < i; j++)
			cout << fill;
		cout << frame << '\n';
	}
	cout << setw(hor);
	for (int i = 0; i < (size % 2 == 0 ? size + 3 : size + 2); i++)
		cout << frame;
	cout << '\n';
}

void Triangle::setSide(const double s1,
	const double s2, const double s3) {
	side1 = (s1 > .00) ? s1 : 1.00;
	side2 = (s2 > .00) ? s2 : 1.00;
	side3 = (s3 > .00) ? s3 : 1.00;
}

double Triangle::getArea() const {
	double p = (side1 + side2 + side3) / 2;
	return sqrt(p * (p - side1) * (p - side2) * (p - side3));
}

void Triangle::print() const {
	cout << "Shape: Triangle.\n";
}