// Инициализация многомерных массивов.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

void printArray( const int [][ 3 ] ); // прототип

int main()
{
	int array1[ 2 ][ 3 ] = { { 1, 2, 3 }, { 4, 5, 6 } };
	int array2[ 2 ][ 3 ] = { 1, 2, 3, 4, 5 };
	int array3[ 2 ][ 3 ] = { { 1, 2 }, { 4 } };

	cout << "Values in array1 by row are:" << endl;
	printArray( array1 );

	cout << "\nValues in array2 by row are:" << endl;
	printArray( array2 );

	cout << "\nValues in array3 by row are:" << endl;
	printArray( array3 );
	cout << endl;
	int ar[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for ( int i = 0; i < 3; i++ )
	{
		for ( int j = 0; j < 3; j++ )
			cout << ar[ i ][ j ] << ' ';
		cout << endl;
	}
	cout << endl;
	int t[ 5 ] = { 0 };
	cout << ar[ 1 ][ 1 ] << endl;

	return 0;
}

void printArray( const int a[][ 3 ] )
{
	// цикл по строкам массива
	for ( int i = 0; i < 2; i++ )
	{
		// цикл по столбцам текущей строки
		for ( int j = 0; j < 3; j++ )
			cout << a[ i ][ j ] << ' ';
		cout << endl;
	}
}


