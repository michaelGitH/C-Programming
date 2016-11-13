#pragma once
#include<iomanip>
using std::setw;
using std::setprecision;

template<typename T, typename K>
void bubbleSort(T array[], K arraySize) {
	for (K copy = arraySize - 1; copy > 0; copy--)
	{
		T max = 0;
		K clone;
		for (K count = copy; count >= 0; count--)
		{
			if (array[count] > max)
			{
				max = array[count];
				clone = count;
			}
		}
		array[clone] = array[copy];
		array[copy] = max;
	}
	for (K count = 0; count < arraySize; count++) {
		cout << setprecision(2) << setw(5) << array[count];
		if (count + 1 % 10 == 0)
			cout << endl;
	}
	cout << endl;
}