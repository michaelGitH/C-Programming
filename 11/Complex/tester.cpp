#include<iostream>
using std::cout;
using std::endl;
using std::cin;
using std::boolalpha;
#include"Complex.h"

int main() {
	Complex c1, c2(5.3, 6.7), c3(2.4, 3.3);

	c1 = c2 + c3;
	cout << "operator+(c2, c3): "
		<< c1 << endl << endl;

	c1 = c2 - c3;
	cout << "operator-(c2, c3): " << c1 << endl << endl;

	c1 = c2 * c3;
	cout << "operator*( c2, c3 ): " << c1 << endl << endl;

	cout << "operator>>( c1 ): ";
	cin >> c1;
	cout << "c1 after input: " << c1 << endl << endl;

	cout << "c1 = c2\n\n";
	c1 = c2;

	cout << boolalpha << "operator==( c1, c2 ): " << (c1 == c2)
		<< "\noperator==( c1, c3 ): " << (c1 == c3) << endl << endl;

	cout << "operator!=( c1, c3 ): " << (c1 != c3) << endl << endl;

	system("pause");
	return 0;
}