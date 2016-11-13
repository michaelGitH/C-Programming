#include <iostream>
#include <iomanip>
#include <cstdlib>

#include"BubbleSort.h"

using namespace std;

int main()
{
	const int arraySize = 100;
	int array[arraySize] = { 48, 29, 1, 15, 8, 16, 13, 27, 98, 54, 2, 49, 14, 228, 113, 3, 56, 87 };
	for (int count = 19; count < arraySize; count++)
		array[count] = array[rand() % 18] * array[rand() % 18] / array[rand() % 18] + array[rand() % 18];

	cout << "int array befor sorting: \n";
	for (int i = 0; i < arraySize; i++) {
		cout << setw(5) << array[i];
		if (i % 9 == 0)
			cout << endl;
	}
	cout << "\nint array after sorting: \n";
	bubbleSort(array, arraySize);
	

	float carray[arraySize] = { 4.8, 2.9, 1, 1.5, 8, 1.6, 1.3, 2.7, 9.8, 5.4, 2, 4.9, 1.4, 2.28, 1.13, 3, 5.6, 8.7 };
	for (int count = 19; count < arraySize; count++)
		carray[count] = carray[rand() % 18] * carray[rand() % 18] / carray[rand() % 18] + carray[rand() % 18];

	cout << "float array befor sorting: \n";
	for (int i = 0; i < arraySize; i++) {
		cout << setprecision(2) << setw(5) << carray[i];
		if (i + 1 % 10 == 0)
			cout << endl;
	}

	cout << "\nfloat array after sorting: \n";
	bubbleSort(carray, arraySize);
	
	system("pause");
	return 0;
}