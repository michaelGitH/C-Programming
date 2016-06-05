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
	cout << fixed << setprecision( 0 );
	srand ( time ( 0 ) );
	for ( int count = 1; count <= 10; count++ )
	{
		int x = ( 2 + rand() % 9 );
		switch ( x )
		{
			case 2:
				cout << 2 << endl;
				break;
			case 4: 
				cout << 4 << endl;
				break;
			case 6: 
				cout << 6 << endl;
				break;
			case 8: 
				cout << 8 << endl;
				break;
			case 10: 
				cout << 10 << endl;
				break;
			default:
				count--;
		}
	}

	return 0;
}
