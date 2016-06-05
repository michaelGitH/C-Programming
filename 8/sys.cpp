#include<iostream>
#include<iomanip>
using namespace std;

int s16 ( int n )
{
	int count = 1;
	int x = 0;
	for ( int i = n; i > 0; i /= 2 )
	{
		int a = i % 2;
		cout << "i = " << i << "; a = " << a << endl;
		x += ( a * count );
		count *= 10;
	}
	return x;
}

int main()
{
	int y, z = 8;
	y = s16( z );
	cout << y << endl;
	for ( int i = 0; i < 1000; i++ )
		cout << setbase( 16 ) << i << endl;
	cout << 1000 << endl;

	return 0;
}
