#include<iostream>
using namespace std;

int main()
{
	int a; //a - целое
	int *aPtr; // aPtr является int * - указателем на целое

	a = 7;
	aPtr = &a;// присвоить адрес а указателю aPtr

	cout << "The address of a is " << &a
		<< "\nThe value of aPtr is " << aPtr;
	cout << "\n\nThe value of a is " << a
		<< "\nThe value of *aPtr is " << *aPtr;
	cout << "\n\nShowing that * and & are inverses of "
		<< "each other.\n&*aPtr = " << &*aPtr
		<< "\n*&aPtr = " << *&aPtr << endl;
	return 0;
}
