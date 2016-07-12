#include"Complex.h"

Complex::Complex( double r, double i )
	: real( r ),
	imaginary( i ) { }

Complex Complex::operator+(const Complex &right) const {
	return Complex(real + right.real, imaginary + right.imaginary);
}

Complex Complex::operator-(const Complex &right) const {
	return Complex(real - right.real, imaginary - right.imaginary);
}

Complex Complex::operator*(const Complex &right) const {
	return Complex(real * right.real, imaginary * right.imaginary);
}

bool Complex::operator==(const Complex &right) const {
	if (real != right.real || imaginary != right.imaginary)
		return false;
	else
		return true;
}

ostream &operator<<(ostream &output, const Complex &comp) {
	output << "( " << comp.real << " + " << comp.imaginary << "*i )";
	return output;
}

istream &operator >> (istream &input, Complex &comp) {
	input >> comp.real >> comp.imaginary;
	std::cout << std::endl;
	return input;
}
