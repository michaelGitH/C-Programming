// Эта программа сортирует значения массива в восходящем порядке.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
	const int arraySize = 10; // размер массива а
	int data[ arraySize ] = { 34, 56, 4, 10, 77, 51, 93, 30, 5, 52 };
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
		cout << setw( 4 ) << data[ i ];

	cout << endl;
	return 0;
}

	
	
