#include <iostream>
using std::cout;
using std::endl;

#include "Date.h"

int main()
{
	Date date1( 25, 2, 2016 );
	Date date2( 70, 14, 2022 ); // date2.no умолчанию 1/1/2000
	for ( int i = 0; i < 400; i++ )
	{
		date1.nextDay();
		date1.print();
	}
	cout << endl;

	return 0;
}
