#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::fixed;
using std::boolalpha;

#include <string>
using std::string;

#include <cstdlib>
using std::rand;
using std::srand;

#include <iomanip>
using std::setw;
using std::setprecision;
using std::left;

#include <cmath>
using std::sqrt;
using std::pow;

 // Упражнение 6.50: ех06_50.срр
 // Что делает эта программа?
 #include <iostream>
 using std::cout;
 using std::cin;
 using std::endl;

int mystery( int, int ); // прототип функции

int main()
{
 int x, y;

 cout << "Enter two integers: "; cin >> x >> y;
 cout << "The result is " << mystery(x,y) << endl;

 return 0; // показывает успешное завершение
} // конец main

 // b должен быть » 0, чтобы не получилось бесконечной рекурсии
 int mystery( int a, int b )
{
 if ( b <= 1 ) // основной случай
 return a;
 else // рекурсивный шаг
 return a + mystery( a, b - 1 );
 } // конец функции mystery





















