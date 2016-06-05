#include <iostream>
using std::cout;
using std::endl;
int main()
{
	int a, c;
	a = 5;
	c = 10;

	int &b = a;
	cout << a << " " << b << " " << c << endl;

	b = c;
	cout << a << " " << b << " " << c << endl;

	int b = 7;
	cout << a << " " << b << " " << c << endl;

	return 0;
}
