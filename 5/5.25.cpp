#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main()
{
	int count; // счетчик, используемый также после выхода из цикла

 	for ( count = 1; count <= 10, count != 5; count++ ) // повторить 10 раз
 	{

 	cout << count << " ";
 	} // конец for

 	cout << "\nBroke out of loop at count = " << count << endl;
 	return 0; // успешное завершение
 } // конец main
