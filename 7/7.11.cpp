#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	const int arraySize = 40000;
	int array[ arraySize ] = { 48, 29, 1, 15, 8, 16, 13, 27, 98, 54, 2, 49, 14, 228, 113, 3, 56, 87 };
	for ( int count = 19; count < arraySize; count++ )
		array[ count ] = array[ rand() % 18 ] * array[ rand() % 18 ] / array[ rand() % 18 ] + array[ rand() % 18 ];


	for ( int copy = arraySize - 1; copy > arraySize / 2; copy-- )
	{
		for ( int count = arraySize - 1; count >= 0; count-- )
		{
			int clone = array[ count ];
			if ( array[ count - 1 ] > array[ count ] && array[ count - 1 ] >= 0 )
			{
				array[ count ] = array[ count - 1 ];
				array[ count - 1 ] = clone;
			} 
		}
	}
	for ( int count = 0; count < arraySize; count++ )
		cout << array[ count ] << "  ";
	cout << endl;
	return 0;
}

//int main()
//{
//	const int arraySize = 10;
//	int array[ arraySize ] = { 48, 29, 1, 15, 8, 16, 13, 27, 98, 54 };
//	int copy;
//	for ( int count = 1; count < arraySize; count++ )
//	{
//		int a = array[ count ];
//		copy = count;
//		while ( copy > 0 && array[ copy - 1 ] > a )
//		{
//			array[ copy ] = array[ copy - 1 ];
//			copy--;
//		}
//		array[ copy ] = a;
//	}
//	for ( int count = 0; count < arraySize; count++ )
//		cout << array[ count ] << "  ";
//	cout << endl;
//	return 0;
//}
		
