#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <vector>
using std::vector;

#include <iomanip>
using std::setw;
using std::setprecision;

void outputVector( const vector< int > & );
void inputVector( vector< int > & );

int main()
{
	vector< int > integers1( 7 );
	vector< int > integers2( 10 );

	// напечатать размер и содержимое integers1
	cout << "Size of integers1 is " << integers1.size()
		<< "\nvector after initialization:" << endl;
	outputVector( integers1 );

	cout << "\nSize of integers2 is " << integers2.size()
		<< "\nvector after initialization:" << endl;
	outputVector( integers2 );

	// ввести и напечатать integersl и integers2
	cout << "\nEnter 17 integers:" << endl;
	inputVector( integers1 );
	inputVector( integers2 );

	cout << "\nAfter input the vectors contain:\n"
		<< "integers1:\n";
	outputVector( integers1 );
	cout << "integers2:\n";
	outputVector( integers2 );

	// применить к объектам vector операцию неравенства (!=)
	cout << "\nEvaluating: integers1 != integers2" << endl;
	
	if ( integers1 != integers2 )
		cout << "integers1 and integers2 are not equal!" << endl;

	// создать вектор integers3, используя в качестве инициализатора
	// integersl; напечатать размер и содержимое integers3
	vector< int > integers3( integers1 ); // конструктор копии

	cout << "\nSize of integers3 is " << integers3.size()
		<< "\nvector after initialization:" << endl;
	outputVector( integers3 );

	// применить к объектам vector операцию присваивания (=)
	cout << "\nAssigning integers2 to integers1:" << endl;
	integers1 = integers2; // integersl больше, чем integers2
	cout << "integers1:" << endl;
	outputVector( integers1 );
	cout << "integers2:" << endl;
	outputVector( integers2 );

	// применить к объектам vector опер&ц*зо равенства (==)
	cout << "\nEvaluating: integers1 == integers2:" << endl;
	if ( integers1 == integers2 )
		cout << "integers1 and integers2 are equal" << endl;

	// использовать квадратныа скобки для образования rvalue
	cout << "integers1[ 5 ] is " << integers1[ 5 ] << endl;

	// использовать квадратные скобки для образования lvalue
	cout << "Assigning 1000 to integers1[ 5 ]:" << endl;
	integers1[ 5 ] = 1000;
	cout << "integers1:" << endl;
	outputVector( integers1 );

	// попытка указания индекса вне диапазона
	cout << "\nAttempt to assign 1000 to integers1.at( 15 )" << endl;
	integers1.at( 15 ) = 1000; // ОШИБКА: выход из диапазона
	return 0;
}
// вывести содержимое вектора
void outputVector( const vector< int > &array )
{
	size_t i; // объявить управляющую переменную
	for ( i = 0; i < array.size(); i++ )
	{
		cout << setw( 12 ) << array[ i ];

		if ( ( i + 1 ) % 4 == 0 ) // no 4 числа в строке вывода
			cout << endl;
	}
	if ( i % 4 != 0 )
		cout << endl;
}
// ввести содержимое вектора
void inputVector( vector< int > &array )
{
	for ( size_t i = 0; i < array.size(); i++ )
		cin >> array[ i ];
}
	






	

	
