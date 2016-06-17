#include<iostream>
using std::endl;
using std::cout;
#include<iomanip>
using std::setprecision;
using std::setw;
using std::setfill;

#include "IntegerSet.h"

IntegerSet::IntegerSet(int a[]) {
	for (int i = 0; i < 100; i++) {
		array[i] = 0;
	}
	for (int i = 0; i < 100 && ( a[i] == 0 || a[i] == 1 ) ; i++) {
		array[i] = a[i];
	}
}

IntegerSet IntegerSet::unionOfSet(IntegerSet set) {
	int a[100] = { 0 };
	IntegerSet iset(a);
	for (int i = 0; i < 100; i++) {
		if ( array[i] == 1 || set.array[i] == 1)
			iset.array[i] = 1;
	}
	return iset;
}

IntegerSet IntegerSet::intersectionOfSets(IntegerSet set)
{
	int a[100] = { 0 };
	IntegerSet iset(a);
	for (int i = 0; i < 100; i++) {
		if (array[i] == 0 || set.array[i] == 0)
			iset.array[i] = 0;
		if (array[i] == 1 && set.array[i] == 1)
			iset.array[i] = 1;
	}
	return iset;
}

void IntegerSet::insertElement(int k) {
	array[k] = 1;
}

void IntegerSet::deleteElement(int m) {
	array[m] = 0;
}

bool IntegerSet::isEqualTo(IntegerSet set) {
	for (int i = 0; i < 100; i++) {
		if (set.array[i] != array[i])
			return false;
	}
	return true;
}

void IntegerSet::printSet() const {
	for (int i = 0; i < 100; i++) {
		if (array[i] == 0)
			cout << "---";
		else
			cout << setw(3) << i;
		if ((i + 1) % 10 == 0)
			cout << endl;
	}
}