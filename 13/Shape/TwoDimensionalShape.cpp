#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include"TwoDimensionalShape.h"

void TwoDimensionalShape::draw( const int v, const int h,
	const int s, const char fr, const char fi ){
	setVertical(v);
	setHorizontal(h);
	setSize(s);
	setFrame(fr);
	setFilling(fi);

	for (int i = 0; i < v; i++)
		cout << "\n";
}

void TwoDimensionalShape::setVertical(const int v) {
	vertical = (v > 0) ? v : 1;
}

int TwoDimensionalShape::getVertical() const {
	return vertical;
}

void TwoDimensionalShape::setHorizontal(const int h) {
	horizontal = (h > 0) ? h : 1;
}

int TwoDimensionalShape::getHorizontal() const {
	return horizontal;
}

void TwoDimensionalShape::setSize(const int s) {
	size = (s > 0) ? s : 1;
}

int TwoDimensionalShape::getSize() const {
	return size;
}

void TwoDimensionalShape::setFrame(const char f) {
	frame = f;
}

char TwoDimensionalShape::getFrame() const {
	return frame;
}

void TwoDimensionalShape::setFilling(const char s) {
	filling = s;
}

char TwoDimensionalShape::getFilling() const {
	return filling;
}