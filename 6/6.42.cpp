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
	if ( p == 1 )
		cout << c1 << " -> " << c2 << endl;
	else
	{
		tower ( ( p - 1 ), c1, c3, c2 );
		cout << c1 << " -> " << c2 << endl;
		tower ( ( p - 1 ), c3, c2, c1 );
	}
}
	



























	
