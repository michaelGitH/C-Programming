#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include"C.h"

int main()
{
	Complex c1( 1, 2 );
	Complex c2( 3, 4 );
	Complex c3;

	cout << "Befor arifmetic:" << endl;
	c1.print();
	c2.print();
	c3.print();
	cout << endl;

	c3.plus( c3.getR(), c3.getI(), c1.getR(), c1.getI() );
	c2.minus( c2.getR(), c2.getI(), c1.getR(), c1.getI() );

	cout << "After arifmetic:" << endl;
	c1.print();
	c2.print();
	c3.print();
	cout << endl;

	return 0;
}
