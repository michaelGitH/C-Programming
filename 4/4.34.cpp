#include <iostream>
using namespace std;

int main()
{
	int message;

	cout <<"Enter the four-digit message: ";
	cin >> message;

	int a, b, c, d;

	a = message / 1000;
	b = message / 100; b %= 10;
	c = message / 10; c %= 10;
	d = message % 10;

	a = (a + 7) % 10;
	b = (b + 7) % 10;
	c = (c + 7) % 10;
	d = (d + 7) % 10;

	cout << c << d << a << b << endl;



	return 0;
}

	
