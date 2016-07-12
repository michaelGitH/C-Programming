#include<iostream>
using std::cerr;
#include "RationalNumber.h"

RationalNumber::RationalNumber(int n, int d)
	: numenator(n),
	denominator(setDenom(d))
{
	if( n < 0 )
		n = 0 - n;
	int devisor = (n < denominator) ? n : denominator;
	for (; ((numenator % devisor != 0) ||
		(denominator % devisor != 0)) && devisor > 1
		; devisor--);
	numenator /= devisor;
	denominator /= devisor;
}

int RationalNumber::setDenom(int d) {
	if (d > 0) {
		return d;
	}
	else {
		cerr << "Denominator incorrect! Abnormal termination!" << "\n";
		exit(1);
	}
}

const RationalNumber RationalNumber::operator+(const RationalNumber &right) const {
	int num1 = numenator, num2 = right.numenator,
		den1 = denominator, den2 = right.denominator;
	int devisor = (denominator < right.denominator) ? denominator : right.denominator;
	for (; ((denominator % devisor != 0)
		|| (right.denominator % devisor != 0))
		&& devisor > 1; devisor--);
	if (devisor > 1) {
		if (denominator < right.denominator) {
			num1 *= devisor;
			den1 *= devisor;
		}
		else {
			num2 *= devisor;
			den2 *= devisor;
		}
	}
	else {
		num1 *= den2;
		num2 *= den1;
		den1 *= den2;
	}
	RationalNumber temp(num1 + num2, den1);
	return temp;
}

const RationalNumber RationalNumber::operator-(const RationalNumber &right) const {
	int num1 = numenator, num2 = right.numenator,
		den1 = denominator, den2 = right.denominator;
	int devisor = (denominator < right.denominator) ? denominator : right.denominator;
	for (; ((denominator % devisor != 0)
		|| (right.denominator % devisor != 0))
		&& devisor > 1; devisor--);
	if (devisor > 1) {
		if (denominator < right.denominator) {
			num1 *= devisor;
			den1 *= devisor;
		}
		else {
			num2 *= devisor;
			den2 *= devisor;
		}
	}
	else {
		num1 *= den2;
		num2 *= den1;
		den1 *= den2;
	}
	RationalNumber temp(num1 - num2, den1);
	return temp;
}

const bool RationalNumber::operator<(const RationalNumber &right ) const {
	if (static_cast<double>(numenator) / denominator <
		static_cast<double>(right.numenator) / right.denominator)
		return true;
	else
		return false;
}

const RationalNumber RationalNumber::operator*(const RationalNumber &right) const {
	RationalNumber temp(numenator * right.numenator, denominator * right.denominator);
	return temp;
}

const RationalNumber RationalNumber::operator/(const RationalNumber &right) const {
	RationalNumber temp(numenator * right.denominator ,denominator * right.numenator );
	return temp;
}

ostream &operator<<(ostream &output, const RationalNumber &rn) {
	output << rn.numenator << '/' << rn.denominator;
	return output;
}