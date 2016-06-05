#include <iostream>
#include <iomanip>
using namespace std;

double mix ( int = 2, double = 3.5, int = 4 );

int main()
{
	cout << fixed << setprecision( 2 ) << "No arguments: " << mix () << endl << endl;

	cout << "One argument: " << mix ( 3 ) << endl << endl;

	cout << "Three arguments: " << mix ( 4, 5.75, 6.5 ) << endl << endl;
}

double mix ( int x, double y, int z )
{
	return x + y + z;
}
