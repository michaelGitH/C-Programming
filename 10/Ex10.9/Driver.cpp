#include<iostream>
using std::cout;
using std::endl;
#include<cstdlib>
using std::rand;
using std::srand;

#include "IntegerSet.h"

int main() {
	int a1[100] = { 0 };
	int a2[100] = { 0 };
	/*for (int i = 0; i < 100; i++) {
		a1[i] = rand() % 2;
		a2[i] = rand() % 2;
	}*/

	IntegerSet set1( a1 );
	IntegerSet set2( a2 );
	cout << "Print befor initialization:" << endl;
	set1.printSet();
	cout << endl;
	set2.printSet();
	cout << endl;

	set1.insertElement(50);
	set1.insertElement(51);
	set1.insertElement(52);
	set1.insertElement(10);
	set1.insertElement(11);
	set1.insertElement(12);
	set1.insertElement(13);

	set2.insertElement(50);
	set2.insertElement(51);
	set2.insertElement(52);
	set2.insertElement(86);
	set2.insertElement(87);
	set2.insertElement(88);
	set2.insertElement(89);

	cout << "Print after initialization:" << endl;
	set1.printSet();
	cout << endl;
	set2.printSet();
	cout << endl;

	IntegerSet set3(a2);
	set3 = set1.unionOfSet(set2);
	cout << "Function unionSet():" << endl;
	set3.printSet();

	set1.insertElement(50);
	set1.insertElement(51);
	set1.insertElement(52);
	set1.insertElement(10);
	set1.insertElement(11);
	set1.insertElement(12);
	set1.insertElement(13);

	set2.insertElement(50);
	set2.insertElement(51);
	set2.insertElement(52);
	set2.insertElement(86);
	set2.insertElement(87);
	set2.insertElement(88);
	set2.insertElement(89);

	set3 = set1.intersectionOfSets(set2);
	cout << "Function intersectionSet():" << endl;
	set3.printSet();

	set1 = set2;
	cout << "Function set1.isEqualTo(set2) after set1=set2: " << set1.isEqualTo(set2)  << endl;
	cout << "Function set1.isEqualTo(set3): " << set1.isEqualTo(set3) << endl;

	system("pause");
	return 0;
}