#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	cout << "b)" << endl;
	cout << setw( 15 ) << left << fixed
	<< setprecision( 1 ) << 333.546372
	<< setw( 15 ) << setprecision( 2 )
	<< 333.546372 << setw( 15 ) 
	<< setprecision( 3 )	<< 333.546372 << endl;;

	cout << "\nc)" << endl;
	double x;
	x = pow ( 2.5, 3 );
	cout << right << setprecision( 2 ) << setw( 10 )
	<< x << endl;

	cout << "\nd)" << endl;
	int y = 1;
	while ( y <= 20 )
	{
		cout << y;
		if ( y % 5 )
			cout << "\t";
		else
			cout << "\n";
		y++;
	}

	cout << "\ne)" << endl;
	int z;
	for ( z = 1; z <= 20; z++ )
	{
		cout << z;
		if ( z % 5 )
			cout << "\t";
		else
			cout << "\n";
	}















	


	return 0;
}
