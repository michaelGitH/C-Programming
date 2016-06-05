#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c;
	
	for ( a = 1; a <= 100; a++ )
	{
		for ( b = 1; b <= 100; b++ )
		{
			for ( c = 1; c <= 100; c++ )
			{
				if ( pow ( a, 2 ) == pow ( b, 2 ) + pow ( c, 2 ) )
					cout << "Hypotenuse is " << a << endl
						  << "Cathetuses are " << b << " and " << c << endl;
			}
		}
	}
	return 0;
}
