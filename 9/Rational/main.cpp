#include<iostream>
using std::cout;
using std::endl;

#include "R.h" // включить определение класса Time из Time.h

int main()
{
	Rational rat;
	int m1[ 2 ] = { 12, 14 };
	int m2[ 2 ] = { 15 ,12 };

	rat.plus( m1, m2 );
	cout << "Plus\n";
	rat.print();
	rat.printP();
	cout << endl;

	cout << "Minus\n";
	rat.minus( m1, m2 );
	rat.print();
	rat.printP();
	cout << endl;

	cout << "Power\n";
	rat.power( m1, m2 );
	rat.print();
	rat.printP();
	cout << endl;

	cout << "Del\n";
	rat.del( m1, m2 );
	rat.print();
	rat.printP();
	cout << endl;

	return 0;
}
