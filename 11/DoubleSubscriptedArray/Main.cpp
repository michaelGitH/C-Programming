#include<iostream>
using std::cout;
using std::endl;
using std::cin;
using std::boolalpha;
#include"dsa.h"

int main() {
	DSA a1(5, 6);
	cout << a1 << endl;
	a1(3, 2) = 5;
	int el = a1(3, 2);
	DSA a2;
	a2(5, 4) = el;
	cout << a1 << endl << a2 << endl;
	a1 = a2;
	cout << "a1 and a2 after a1 = a2:\n" << a1 << endl << a2 << endl;
	cout << "a1( 5, 4 ) = " << a1(5, 4) << endl;
	DSA a3(3, 4);
	a2(3, 1) = a3( 1, 2 );
	cin >> a3;
	cout << "a1:\n" << a1 << "\na2:\n" << a2 << "\na3\n" << a3 << "\n";
	cout << "a1 = a3\n\n";
	a1 = a3;
	cout << "a1 == a3:\n";
	cout << boolalpha << ( a1 == a3 )
		<< "\na2 != a3:\n" << ( a2 != a3 ) << endl;

	cout << "The biggest of a1 is " << a1[1] << endl;
	cout << "The next biggest of a1 is " << a1[2] << endl;
	cout << "The next biggest of a1 is " << a1[3] << endl;
	cout << "The next biggest of a1 is " << a1[4] << endl;
	cout << "The next biggest of a1 is " << a1[5] << endl;

	system("pause");
	return 0;
}