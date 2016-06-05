#include <iostream>
using namespace std;

int base( int, int );

int main()
{
	int x;
	cout << "enter integer: ";
	cin >> x;
	int exp;
	cout << " enter exponent: ";
	cin >> exp;
	cout << "  " << x << " for exponent " << exp << " is " << base( x, exp ) << endl;
	return 0;
}

int base( int b, int e )
{
	int result = 1;
	for ( e; e >= 1; e-- )
	{
		result *= b;
	}
	return result;
}
		
