#include<iostream>
using namespace std;

int main()
{
	double a[ 20 ];
	cout << sizeof( a ) << endl;
	double *b = a;
	cout << b << endl;
	cout << a << endl;
	cout << sizeof( *b ) << endl;
	cout << sizeof a << endl;
	cout << sizeof b << endl;
	return 0;
}
