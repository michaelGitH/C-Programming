#include<iostream>
using std::cout;

#include"Shape.h"

void Shape::print() const {
	cout << "Area: " << getArea()
		<< "\n";
}