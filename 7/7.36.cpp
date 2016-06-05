#include<iostream>
#include<cstdlib>
using namespace std;

int reverse( char[] );

int main()
{
	char string[] = "I got it!";
	reverse( string );
	cout << endl;
	return 0;
}

int reverse( char a[] )
{
	static int key = 0;
	if( a[ key ] == '\0' )
	{
		return 0;
	}
	else
	{
		key++;
		reverse( a );
		cout << a[ --key ];
	}
}

	
