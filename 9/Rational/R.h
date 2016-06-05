#ifndef R_H
#define R_H

class Rational
{
public:
	Rational( int = 1, int = 1 );
	void plus( int[], int[] );
	void minus( int[], int[] );
	void power( int[], int[] );
	void del( int[], int[] );
	void print();
	void printP();
private:
	int rate[ 2 ];
};


#endif
