// Программа помещает в массив значения, сортирует массив
//в восходящем порядке и печатает полученный массив.
#include<iostream>
using std::cout;
using std::endl;

#include<iomanip>
using std::setw;

void selectionSort( int * const, const int );
void swap( int * const, int * const );

int main()
{
	const int arraySize = 10;
	int a[ arraySize ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

	cout << "Data items in original order\n";

	for ( int i = 0; i < arraySize; i++ )
		cout << setw( 4 ) << a[ i ];

	selectionSort( a, arraySize ); // сортировать массив

	cout << "\nData items in ascending order\n";

	for ( int j = 0; j < arraySize; j++ )
		cout << setw( 4 ) << a[ j ];

	cout << endl;
	return 0;
}

// функция для сортировки массива
void selectionSort( int * const array, const int size )
{
	int smallest; //индекс наименьшего элемента
	
	for( int i = 0; i < size - 1; i++ )
	{
		smallest = i;

		// цикл для определения индекса наименьшего элемента
		for ( int index = i + 1; index < size; index++ )
			if( array[ index ] < array[ smallest ] )
				smallest = index;
		swap( &array[ i ], &array[ smallest ] );
	}
}

// обменять значения в ячейках, на которые указывают
// elementlPtr и element2Ptr	
void swap( int * const element1Ptr, int * const element2Ptr )
{
	int hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
}	
















