#include<iostream>
using std::cerr;
using std::cout;
using std::cin;
#include"Polinomonal.h"

Polinominal::Polinominal(int n)
	: size( n > 0 ? n * 2 : 2 )
{
	setPolinom();
	if (size > 2) {
		int s = reduction(polinom, size);
		delete[] polinom;
		size = s;
		polinom = new int(size);
		for (int i = 0; i < size; i++)
			polinom[i] = reducted[i];
		delete reducted;
	}
}

Polinominal::Polinominal(const Polinominal&right)
	: size( right.size )
{
	polinom = new int(size);
	for (int i = 0; i < size; i++)
		polinom[i] = right.polinom[i];
}

Polinominal::~Polinominal() {
	delete [] polinom;
}

int Polinominal::reduction( int *r, int s ) {
	reducted = new int(100);
	int count = -1;
	for (int i = 1; i < s; i += 2) {
		for (int j = 3; j < s; j += 2) {
			if (i != j ) {
				if (r[i] == r[j]) {
					reducted[++count] = r[i - 1] + r[j - 1];
					reducted[++count] = r[i];
				}
				else {
					reducted[++count] = r[i - 1];
					reducted[++count] = r[i];
					reducted[++count] = r[j - 1];
					reducted[++count] = r[j];
				}
			}
		}
	}
	return count;
}

const Polinominal &Polinominal::operator=(const Polinominal &right) {
	if (this != &right) {
		if (size != right.size) {
			delete[] polinom;
			size = right.size;
			polinom = new int(size);
		}
		for (int i = 0; i < size; i++)
			polinom[i] = right.polinom[i];
	}
	return *this;
}

void Polinominal::setPolinom() {
	polinom = new int( size );
	for (int i = 0; i < size; i++) {
		cout << "Inputing of the " << i / 2 + 1 << " member of polinom.\n"
			<< "Enter the ratio: ";
		cin >> polinom[i];
		cout << "Enter the exponent: ";
		cin >> polinom[++i];
	}
}

ostream &operator<<(ostream &output, const Polinominal &right) {
	output << right.polinom[0] << 'X' << right.polinom[1];
	for (int i = 2; i < right.size; i++) {
		if (right.polinom[i] > 0)
			output << '+';
		output << right.polinom[i] << 'X' << ++i;
	}
	return output;
}