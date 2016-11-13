#include<iostream>
#define _USE_MATH_DEFINES
#include<cmath>
#include<cstdlib>

void main() {
	double r; // радиус
	std::cout << "r = ";
	std::cin >> r;
	double S = 3.14159265358979323846 * r * r;
	std::cout << "\nS = " << S << std::endl;

	std::cin.get();
	std::cin.get();
}