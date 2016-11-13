#include<iostream>
using std::cout;
using std::endl;
#include<iomanip>
using std::setw;

#include"Square.h"

Square::Square(const double l)
{
	setLength(l);
}

void Square::draw(const int v, const int h,
	const int s, const char fr, const char fi) {
	TwoDimensionalShape::draw(v, h, s, fr, fi);
	int hor = getHorizontal() + 1;
	int size = getSize();
	char frame = getFrame();
	char fill = getFilling();

	cout << setw(hor);
	for (int i = 0; i < (size + 2); i++)
		cout << frame;
	cout << "\n";
	for (int i = 0; i < size; i++) {
		cout << setw(hor) << frame;
		for (int j = 0; j < size; j++)
			cout << fill;
		cout << frame << '\n';
	}
	cout << setw(hor);
	for (int i = 0; i < (size + 2); i++)
		cout << frame;
	cout << "\n";
}

void Square::setLength(const double l) {
	length = (l > 0) ? l : 1.00;
}

double Square::getLength() const {
	return length;
}

double Square::getArea() const {
	return length * length;
}

void Square::print() const {
	cout << "Shape: Square.\n";
}