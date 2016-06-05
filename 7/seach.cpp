// Линейный поиск в массиве.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int linearSeach ( const int[], int, int );

int main()
{
	const int arraySize = 100; // размер массива а
	int a[ arraySize ];	
	int seachKey; // значение для поиска в массиве а

	for ( int i = 0; i < arraySize; i++ )
		a[ i ] = 2 * i;

	cout << "Enter integer seach key: ";
	cin >> seachKey;

	// попытка поиска searchKey в массиве а
	int element = linearSeach ( a, seachKey, arraySize );

	// вывести результаты
	if ( element != -1 )
		cout << "Found value in element " << element << endl;
	else
		cout << "Value not found" << endl;

	return 0;
}

int linearSeach ( const int array[], int key, int sizeOfArray )
{
	for ( int j = 0; j < sizeOfArray; j++ )
		if ( array[ j ] == key )
			return j;

	return -1;
}


