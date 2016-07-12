#ifndef DSA_H
#define DSA_H

#include<iostream>
using std::ostream;
using std::istream;

class DSA
{
	friend ostream &operator<<(ostream&, const DSA&);
	friend istream &operator>>(istream&, DSA&);
public:
	DSA( int = 10, int = 10 );
	DSA(const DSA&);
	const DSA &operator=(const DSA&);
	int &operator()(int, int);
	const int operator()(int, int) const;
	const bool operator==(const DSA&);
	const bool operator!=(const DSA &right) {
		return !operator==(right);
	}
	const int operator[]( int );
	const int * sort();
	~DSA();
private:
	int *ptr;
	int rowSize;
	int columnSize;
	int size = rowSize * columnSize;
};

#endif
