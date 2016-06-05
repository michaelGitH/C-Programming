#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;
using std::setw; //позволяет программе устанавливать ширину поля

#include <cmath> // стандартная матеметическая библиотека C++
using std::pow; // позволяет программе использовать функцию pow


int main()
{
	int i = 1, j = 2, k = 3, m = 2;

	cout << ( i == 1 ) << endl ;
	cout << ( j == 3 ) << endl ;
	cout << ( i >= 1 && j < 4 ) << endl;
	cout << ( m <= 99 && k < m ) << endl;
	cout << ( j >= i || k == m ) << endl ;
	cout << (k + m<j || 3-j>=k) << endl ;
	cout << ( !m ) << endl;
	cout << ( ! ( j - m ) ) << endl ;
	return 0;
}
