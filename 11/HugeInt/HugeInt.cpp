#include<cctype>
using std::isdigit;

#include<cstring>
using std::strlen;

#include"HugeInt.h"

HugeInt::HugeInt(long value)
{
	// инициализировать массив нулем 
	for (int i = 0; i < 30; i++)
		integer[i] = 0;

	// поместить в массив цифры аргумента 
	for (int i = 29; value != 0 && i >= 0; i--) {
		integer[i] = value % 10;
		value /= 10;
	}
}

HugeInt::HugeInt(const char *string)
{
	for (int i = 0; i < 30; i++)
		integer[i] = 0;

	int length = strlen(string);
	
	for (int j = 30 - length, k = 0; j <= 29; j++, k++) {
		if (isdigit(string[ k ])) {
			integer[j] = string[k] - '0';
		}
	}
}

HugeInt HugeInt::operator+( const HugeInt &op2 ) const {
	HugeInt temp;

	int carry = 0;

	for (int i = 29; i >= 0; i--) {
		temp.integer[i] = integer[i] +
			op2.integer[i] + carry;

		// определить, нужен ли перенос 
		if (temp.integer[i] > 9) {
			temp.integer[i] %= 10; // редуцировать к 0-9 
			carry = 1;
		}
		else
			carry = 0;
	}

	return temp;
}

HugeInt HugeInt::operator+( int op2 ) const {
	return *this + HugeInt(op2);
}

HugeInt HugeInt::operator+(const char *op2) const {
	return *this + HugeInt(op2);
}

HugeInt HugeInt::operator*(const HugeInt &op2) const {
	HugeInt temp;
	HugeInt powerTemp;
	int count = 0; // сдвиг влево при умножении столбтком

	int carry = 0;
	for (int i = 29; i >= 0; i--) {
		for (int j = 29; j - count >= 0; j--) {
			powerTemp.integer[j - count] = (integer[j] * op2.integer[i]) + carry;
			if (powerTemp.integer[j - count] > 9) {
				carry = powerTemp.integer[j - count] / 10;
				powerTemp.integer[j - count] %= 10;
			}
			else
				carry = 0;
		}
		if ((temp + powerTemp).integer[0] <= 9 ) {
			temp = temp + powerTemp;
			for (int k = 0; k < 30; k++)
				powerTemp.integer[k] = 0;
			if (count < 30)
				count++;
		}
		else
			i = -1;
	}
	return temp;
}

HugeInt HugeInt::operator/(const HugeInt &right) const {
	int i = 0;
	for (; (right * i) <= *this; i++);
	return --i;
}

const bool HugeInt::operator<(const HugeInt &right) const {
	for ( int i = 0; i < 30; i++ ) {
		if (integer[i] < right.integer[i])
			return true;
		else if (integer[i] > right.integer[i])
			return false;
	}
	return false;
}

// перегруженная операция вывода 
ostream &operator<<(ostream &output, const HugeInt &num) {
	int i;

	for (i = 0; (num.integer[i] == 0) && i <= 29; i++);

	if (i == 30)
		output << 0;
	else
		for (; i <= 29; i++)
			output << num.integer[i];

	return output;
}