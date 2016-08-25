#ifndef POLINOMONAL_H
#define POLINOMONAL_H

#include<iostream>
using std::ostream;

class Polinominal
{
	friend ostream &operator<<(ostream&, const Polinominal&);
public:
	Polinominal( int = 1 );
	Polinominal(const Polinominal&);
	~Polinominal();
	const Polinominal &operator=(const Polinominal&);
	const Polinominal &operator+(const Polinominal&) const;
	void setPolinom();
	int *getPolinom();
private:
	int reduction(int*, int);
	int *polinom;
	int *reducted;
	int size;
};

#endif
