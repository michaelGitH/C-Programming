#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main()
{
	int i, j, k;
	for ( i = 1; i <= 5; i++ ) {
		for ( j = 1; j <= 3; j++ ) {
			for ( k = 1; k <= 4; k++ )
				cout << '*';
			cout << endl;
		} // конец внутреннего for
		cout << endl;
	} // конец внешнего for
 	return 0; // успешное завершение
} // конец main
