#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	const int size = 5;
	unsigned values[ size ] = { 2, 4, 6, 8, 10 };
	unsigned *vPtr;
	int i;
	for ( i = 0; i < size; i++ )
		cout << setw( 2 ) << left << values[ i ];
	cout << endl;
	vPtr = values;
	vPtr = &values[ 0 ];
	for ( i = 0; i < size; i++ )
		cout << setw( 2 ) << left << *( vPtr + i );
	cout << endl;
	for ( i = 0; i < size; i++ )
		cout << setw( 2 ) << left << *( values + i );
	cout << endl;
	for ( i = 0; i < size; i++ )
		cout << setw( 2 ) << left << vPtr[ i ];
	cout << endl;	
	values[ 4 ];
	*( values + 4 );
	vPtr[ 4 ];
	*( vPtr + 4 );
	//i) На какой адрес ссылается выражение vPtr + 3? Чему равно находящееся по этому адресу значение?
	// 	Ответ: 1002506.
	//j) Если предположить, что vPtr ссылается на values[4], чему будет равно 
	//	значение адреса, находящегося в vPtr, после выполнения оператора vPtr —= 4? 
	//	Какое значение находится по данному адресу?
	//	Ответ: 1002500.


	return 0;
}
