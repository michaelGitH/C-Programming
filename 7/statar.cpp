// Статические массивы инициализируются нулями.
#include <iostream>
using std::cout;
using std::endl;

void staticArrayInit ( void ); // прототип функции
void automaticArrayInit ( void ); // прототип функции

int main()
{
	cout << "First call to each function:\n";
	staticArrayInit();
	automaticArrayInit();

	cout << "\n\nSecond call to each function:\n";
	staticArrayInit();
	automaticArrayInit();
	cout << endl;

	return 0;
} 

// функция для демонстрации статического локального массива
void staticArrayInit ( void )
{
	// initializes elements to 0 first time function is called
	static int array1[ 3 ];
	
	cout << "\nValue on entering staticArrayInit:\n";

	// вывести содержимое arrayl
	for ( int i = 0; i < 3; i++ )
		cout << "array1[" << i << "] = " << array1[ i ] << "	";
	
	cout << "\nValues on exiting staticArrayInit:\n";
	
	// модифицировать и вывести содержимое arrayl
	for ( int j = 0; j < 3; j++ )
		cout << "array1[" << j << "] = " << ( array1[ j ] += 5 ) << "	";
}
void automaticArrayInit ( void )
{
	// инициализирует элементы при каждом вызове функции
	int array2[ 3 ] = { 1, 2, 3 };
	
	cout << "\n\nValues on entering automaticArraylnit:\n";
	// вывести содержимое агray2
	for ( int i = 0; i < 3; i++ )
		cout << "array2[" << i << "] = " << array2[ i ] << "	";

	cout << "\nValues on exiting automaticArraylnit:\n";
	// модифицировать и вывести содержимое array2
	for ( int j = 0; j < 3; j++ )
		cout << "array2[" << j << "] = " << ( array2[ j ] += 5 ) << "	";
}
























