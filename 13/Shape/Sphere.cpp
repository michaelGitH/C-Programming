#include<iostream>
#include"Sphere.h"

Sphere::Sphere(const double r) {
	setRadius(r);
}

void Sphere::setRadius(const double r) {
	radius = (r > 0) ? r : 1.00;
}

double Sphere::getRadius() const {
	return radius;
}

double Sphere::getArea() const {
	return 4 * 3.1415926535 * radius * radius;
}

double Sphere::getVolume() const {
	return 4 * 3.1415926535 * radius * radius* radius / 3;
}

void Sphere::print() const {
	std::cout << "Shape: Sphere.\n";
}