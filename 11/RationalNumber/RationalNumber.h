#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H

#include<iostream>
using std::ostream;

class RationalNumber
{
	friend ostream &operator<<(ostream&, const RationalNumber&);
public:
	RationalNumber(int = 1, int = 1);
	int setDenom(int);
	const RationalNumber operator+(const RationalNumber&) const;
	const RationalNumber operator-(const RationalNumber&) const;
	const RationalNumber operator*(const RationalNumber&) const;
	const RationalNumber operator/(const RationalNumber&) const;
	const bool operator<(const RationalNumber&) const;
	const bool operator>(const RationalNumber &right) const {
		return right < *this;
	}
	const bool operator==(const RationalNumber &right) const {
		return (!(*this < right) && !(*this > right));
	}
	const bool operator!=(const RationalNumber &right) const {
		return !(*this == right);
	}
	const bool operator<=(const RationalNumber &right) const {
		return !(right > *this);
	}
	const bool operator>=(const RationalNumber &right) const {
		return !(right < *this);
	}
private:
	int numenator;
	int denominator;
};

#endif