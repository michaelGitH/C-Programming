#ifndef HUGEINT_H
#define HUGEINT_H

#include<iostream>
using std::ostream;

class HugeInt
{
	friend ostream &operator<<(ostream&, const HugeInt&);
public:
	HugeInt(long = 0);
	HugeInt(const char*);

	HugeInt operator+(const HugeInt&) const;
	HugeInt operator+(int) const;
	HugeInt operator+(const char*) const;
	HugeInt operator*(const HugeInt&) const;
	HugeInt operator/(const HugeInt&) const;

	const bool operator<(const HugeInt&) const;
	const bool operator>(const HugeInt &right) const {
		return (right < *this);
	}
	const bool operator>=(const HugeInt &right) const {
		return !(*this < right);
	}
	const bool operator<=(const HugeInt &right) const {
		return !(*this > right);
	}
	const bool operator==(const HugeInt &right) const {
		return (!(*this < right) && !(right < *this));
	}
	const bool operator!=(const HugeInt &right) const {
		return !( *this == right );
	}
private:
	short integer[30];
};

#endif