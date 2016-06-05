#include <iostream>
using namespace std;

int main()
{
	cout << "Enter five integers: ";
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	if ( a < 1 )
		a = 1;
	else if ( a > 30 )
		a = 30;

	if ( b < 1 )
		b = 1;
	else if ( b > 30 )
		b = 30;

	if ( c < 1 )
		c = 1;
	else if ( c > 30 )
		c = 30;

	if ( d < 1 )
		d = 1;
	else if ( d > 30 )
		d = 30;

	if ( e < 1 )
		e = 1;
	else if ( e > 30 )
		e = 30;

	for ( int count = 1; count <= a; count++ )
		cout << "*";
	cout << endl;

	for ( int count = 1; count <= b; count++ )
		cout << "*";
	cout << endl;

	for ( int count = 1; count <= c; count++ )
		cout << "*";
	cout << endl;

	for ( int count = 1; count <= d; count++ )
		cout << "*";
	cout << endl;

	for ( int count = 1; count <= e; count++ )
		cout << "*";
	cout << endl;

	return 0;
}
