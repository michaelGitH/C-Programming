// Эта программа сортирует значения массива в восходящем порядке.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include<cstdlib>
using std::rand;

int main()
{
	const int arraySize = 40000;
	int data[ arraySize ] = { 48, 29, 1, 15, 8, 16, 13, 27, 98, 54, 2, 49, 14, 228, 113, 3, 56, 87 };
	for ( int count = 19; count < arraySize; count++ )
		data[ count ] = data[ rand() % 18 ] * data[ rand() % 18 ] / data[ rand() % 18 ] + data[ rand() % 18 ];

	int insert; // временная переменная для вставляемого элемента
	
	cout << "Unsorted array:\n";

	// вывести исходный массив
	for ( int i = 0; i < arraySize; i++ )
		cout << setw( 4 ) << data[ i ];

	// сортировка вставкой
	for ( int next = 1; next < arraySize; next++ )
	{
		insert = data[ next ]; // сохранить значение текущего элемента

		int moveItem = next; // инициализировать позицию для вставки

		// найти позицию для размещения текущего элемента
		while ( ( moveItem > 0 ) && ( data[ moveItem - 1 ] > insert ) )
		{
			// сдвинуть элемент на одну ячейку вправо
			data[ moveItem ] = data[ moveItem - 1 ];
			moveItem--;
		}
		data[ moveItem ] = insert;
	}

	cout << "\nSorted array:\n";

	for ( int i = 0; i < arraySize; i++ )
		cout << setw( 12 ) << data[ i ];

	cout << endl;
	return 0;
}

