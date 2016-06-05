#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <cstdlib>
using std::rand;
using std::srand;

#include <iomanip>
using std::setw;
using std::setprecision;

int main()
{
	double x;
	cout << fixed << setprecision( 0 );
	srand ( time ( 0 ) );
	for ( int count = 1; count <= 100; count++ )
	{
		x = -3 + rand() % 15;
		cout << x << endl;
	}

	return 0;
}
