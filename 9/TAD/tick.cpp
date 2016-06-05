#include<iostream>
using std::cout;
using std::endl;

#include "TAD.h" // включить определение класса Time из Time.h

int main()
{
	TAD t1( 31, 12, 2016, 23, 58, 57 );
	TAD t2( 30, 05, 2016 );
	for ( int i = 0; i < 100; i++ )
	{
		t2.tick();
		t2.printUniversal();
	}
	return 0;
}
