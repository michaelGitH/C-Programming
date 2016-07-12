#include<iostream>
using std::cout;
using std::endl;
using std::boolalpha;

#include"HugeInt.h"

int main() {
	HugeInt n1(7654321), n2(7891234), n3("99999999999999999999999999999"),
		n4("1"), n5;

	cout << "n1: " << n1
		<< "\nn2: " << n2
		<< "\nn3: " << n3
		<< "\nn4: " << n4
		<< "\nn5: " << n5 << "\n\n";

	n5 = n1 + n2;
	cout << "n5 = n1 + n2 = " << n5 << "\n\n";

	cout << "n3 + n4 = " << (n3 + n4) << "\n\n";

	n5 = n1 + 9;
	cout << "n5 = n1 + 9 = " << n5 << "\n\n";

	n5 = n2 + "10000";
	cout << "n5 = n1 + \"10000\" = " << n5 << "\n\n";

	HugeInt x2, x1( 12345 );
	x2 = x1;
	cout << n1 * n2 << endl;
	cout << n1 * 10 << endl;

	cout << boolalpha << "n1 == n2: "
		<< ( n1 == n2 ) << "\n";
	cout << boolalpha << "n1 != n2: "
		<< (n1 != n2) << "\n";
	cout << boolalpha << "n1 < n2: "
		<< (n1 < n2) << "\n";
	cout << boolalpha << "n1 > n2: "
		<< (n1 > n2) << "\n";
	cout << boolalpha << "n1 <= n2: "
		<< (n1 <= n2) << "\n";
	cout << boolalpha << "n1 >= n2: "
		<< (n1 >= n2) << "\n";
	cout << boolalpha << "x1 == x2: "
		<< (x1 == x2) << "\n";

	HugeInt x = 987654321, y = 1234567;
	cout << "x = " << x << "; y = " << y << ".\n";
	cout << "x / y = " << x / y << "\n\n";


	system("pause");
	return 0;
}