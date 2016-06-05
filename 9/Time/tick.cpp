#include<iostream>
using std::cout;
using std::endl;

#include "Time.h" // включить определение класса Time из Time.h

int main()
{
	Time t1( 23, 58, 58 );
	for ( int i = 0; i < 100; i++ )
	{
		t1.tick();
		t1.printUniversal();
	}
	return 0;
}
