#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	for ( int count = 1; count <= 10; count++ )
	{
		int inCount = 1;

		for ( inCount; inCount <= count; inCount++ )
			cout << "*";

		cout << endl;
	}
	cout << endl;

	for ( int count = 10; count >= 1; count-- )
	{
		int inCount = 1;

		for ( inCount; inCount <= count; inCount++ )
			cout << "*";

		cout << endl;
	}
	cout << endl;

	for ( int count = 10; count >= 1; count-- )
	{
		int inCount = 1;

		for ( int counter = 10; counter > count; counter-- )
			cout << " ";

		for ( inCount; inCount <= count; inCount++ )
			cout << "*";

		cout << endl;
	}
	cout << endl;

	for ( int count = 1; count <= 10; count++ )
	{
		int inCount = 1;

		for ( int counter = 10; counter > count; counter-- )
			cout << " ";

		for ( inCount; inCount <= count; inCount++ )
			cout << "*";

		cout << endl;
	}
	cout << endl;

	return 0;
}
		
