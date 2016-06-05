#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter a five digit number: ";
	cin >> number;

	int x = number / 1000;
	int a = x / 10;
	int b = number % 10000;
	int e = b / 1000;
	int y = number % 100;
	int c = y / 10;
	int d = y % 10;

	if ( a == d )
		if ( e == c )
			cout << "The number is palindrom!" << endl;
		else
			cout << "The number is not palindrom!" << endl;
	else
		cout << "The number is not palindrom!" << endl;

	cout << a << e << c << d << endl;

	return 0;
}

