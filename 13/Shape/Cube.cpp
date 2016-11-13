#include<iostream>
#include"Cube.h"

Cube::Cube(const double l) {
	setLength(l);
}

void Cube::setLength(const double l) {
	length = (l > 0) ? l : 1.00;
}

double Cube::getLength() const {
	return length;
}

double Cube::getArea() const {
	return 6 * length * length;
}

double Cube::getVolume() const {
	return length * length * length;
}

void Cube::print() const {
	std::cout << "Shape: Cube.\n";
}