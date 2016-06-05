#include<iostream>
using std::cout;
using std::endl;

#include"Rec.h"

int main()
{
	Rectangle r1;
	Rectangle r2( 3, 4 );
	Rectangle r3( -1, 21 );
	float p = r2.perimetr();
	cout << p << endl;
	r1.print();
	r2.print();
	r3.print();
	return 0;
}
