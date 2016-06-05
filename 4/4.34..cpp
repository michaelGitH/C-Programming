#include <iostream>
using namespace std;

int main()
{
	int message;

	cout <<"Enter the gotten four-digit message: ";
	cin >> message;

	int a, b, c, d;

	a = message / 1000;
	b = message / 100; b %= 10;
	c = message / 10; c %= 10;
	d = message % 10;

	if ( a <= 6 )
		a += 3;
	else
		a -= 7;

	if ( b <= 6 )
		b += 3;
	else
		b -= 7;

	if ( c <= 6 )
		c += 3;
	else
		c -= 7;

	if ( d <= 6 )
		d += 3;
	else
		d -= 7;

		

	cout << c << d << a << b << endl;



	return 0;
}
