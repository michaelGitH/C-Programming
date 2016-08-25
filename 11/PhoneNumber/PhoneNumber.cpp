#include<iomanip>
using std::setw;

#include "PhoneNumber.h"

istream &operator>> (istream &input, Number &n) {
	input.ignore();
	input >> setw(3) >> n.areaCode;
	input.ignore(2);
	input >> setw(3) >> n.exchange;
	input.ignore();
	input >> setw(4) >> n.line;
	return input;
}

ostream &Number::operator<<(ostream &output) {
	output << '(' << (*this).areaCode << ") "
		<< (*this).exchange << '-'
		<< (*this).line;
	return output;
}