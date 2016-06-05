#include<iostream>
using std::cout;
using std::endl;

#include"Rec.h"

int main()
{
	float x1[ 2 ] = { 21, 1 };
	float x2[ 2 ] = { 1, 1 };
	float x3[ 2 ] = { 1, 15 };
	float x4[ 2 ] = { 21, 15 };
	Rectangle r1( x1, x2, x3, x4 );
	r1.print();
	
	return 0;
}
