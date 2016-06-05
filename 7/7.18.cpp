#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstdlib>
using std::rand;
using std::srand;
#include<iomanip>
using std::setw;

 int whatlsThis( int [] , int ); // прототип функции

 int main()
 {
 const int arraySize = 10;
 int a[ arraySize ]={1,2,3,4,5,6,7,8,9, 10};

 int result = whatlsThis( a, arraySize );

 cout << "Result is " << result << endl;

 return 0; // показывает успешное завершение
 } // конец main

 // Что делает эта функция?
 int whatlsThis( int b[], int size )
 {
 if ( size == 1 ) // основной случай
 return b[ 0 ];
 else // рекурсивный шаг
 return b[ size - 1 ] + whatlsThis( b, size - 1 );
 } // конец функции whatlsThis
