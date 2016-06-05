// Тестирование рекурсивной функции факториалa
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int rec ( int x )
{
	if ( x < 2 )
		cout << "*";
	else
		return rec( x - 1 );
}

int main()
{
	cout << rec( 10 ) << endl;
	return 0;
}
