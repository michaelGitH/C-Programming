#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main()
{
	for ( int count = 1; count <= 10; count++ ) // повторить 10 раз
	{
 		if ( count == 5 ) // если count равен 5,
 			count++;

 		cout << count << " ";
 	} // конец for

 cout << "\nUsed continue to skip printing 5" << endl;
 return 0; // успешное завершение
 } // конец main
