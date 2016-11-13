#include<iostream>
using std::cout;
using std::endl;

#include<cmath>
using std::sqrt;

#include"Tetrahedron.h"

Tetrahedron::Tetrahedron(const double s)
{
	setSide(s);
}

void Tetrahedron::setSide(const double s) {
	side = (s > .00) ? s : 1.00;
}

double Tetrahedron::getSide() const {
	return side;
}

double Tetrahedron::getArea() const {
	return side * side * sqrt(3);
}

double Tetrahedron::getVolume() const {
	return ((side * side * side) / 12) * sqrt(2);
}

void Tetrahedron::print() const {
	cout << "Shape: Tetrahedron.\n";
}