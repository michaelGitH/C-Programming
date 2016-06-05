#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::fixed;
using std::boolalpha;

#include <string>
using std::string;

#include <cstdlib>
using std::rand;
using std::srand;

#include <iomanip>
using std::setw;
using std::setprecision;
using std::left;

#include <cmath>
using std::sqrt;
using std::pow;

void tower ( int, int, int, int );

int main()
{
	int a;
	cin >> a;
	tower ( a, 1, 2, 3 );
	return 0;
}

void tower ( int p, int c1, int c2, int c3 )
{
	int d1, d2, d3;
	int res = pow ( 2, ( p - 2 ) );
	if ( p == 1 )
		cout << c1 << " -> " << c2 << endl;
	else
	{
		for ( int count = 1; count <= res; count++ )
		{
			if ( count == res )
			{
				cout << c1 << " -> " << c3 << endl;
				cout << c1 << " -> " << c2 << endl;
				cout << c3 << " -> " << c2 << endl;
			}
			else if ( count % 2 != 0 )
			{
				cout << c1 << " -> " << c3 << endl;
				cout << c1 << " -> " << c2 << endl;
				cout << c3 << " -> " << c2 << endl;
				cout << c1 << " -> " << c3 << endl;
				if ( ( c1 == 1 ) && ( c2 == 2 ) && ( c3 == 3 ) )
					c1++, c2++, c3 -= 2;
				else if ( ( c1 == 2 ) && ( c2 == 3 ) && ( c3 == 1 ) )
					c1++, c2 -= 2, c3++;
				else if ( ( c1 == 3 ) && ( c2 == 1 ) && ( c3 == 2 ) )
					c1 -= 2, c2++, c3++;
			}
			else if ( count % 2 == 0 )
			{
				cout << c1 << " -> " << c3 << endl;
				cout << c1 << " -> " << c2 << endl;
				cout << c3 << " -> " << c2 << endl;
				cout << c3 << " -> " << c1 << endl;
				if ( ( c1 == 1 ) && ( c2 == 2 ) && ( c3 == 3 ) )
					c1++, c2++, c3 -= 2;
				else if ( ( c1 == 2 ) && ( c2 == 3 ) && ( c3 == 1 ) )
					c1++, c2 -= 2, c3++;
				else if ( ( c1 == 3 ) && ( c2 == 1 ) && ( c3 == 2 ) )
					c1 -= 2, c2++, c3++;
			}
		}
	}
}
	



























	
