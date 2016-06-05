#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int x, y;
	double a = 0, b = 0, c = 0, d = 0, e = 0; 

	for ( int count = 1; count <= 5; count++ )
	{
		cout << "Введите номер и колличество товара: ";
		cin >> x >> y;

		switch ( x )
		{
			case 1:
			 	a = 2.98 * static_cast< double >( y );
			 	break;

			case 2:
				b = 4.50 * static_cast< double >( y );
				break;

			case 3:
				c = 9.98 * static_cast< double >( y );
				break;

			case 4:
				d = 4.49 * static_cast< double >( y );
				break;

			case 5:
				e = 6.87 * static_cast< double >( y );
				break;

			case ' ':
			case '\n':
			case '\t':
				break;

			default:
				cout << "Вы ввели неверный номер товара, повторите ввод: ";
				count--;
		}
		cout << endl;
	}

	cout << fixed << setprecision( 2 );
	cout << "Номер продукта" << setw( 20 )
		  << "Общая стоимость" << endl;
	cout << "1" << setw( 30 ) << a << endl;
	cout << "2" << setw( 30 ) << b << endl;
	cout << "3" << setw( 30 ) << c << endl;
	cout << "4" << setw( 30 ) << d << endl;
	cout << "5" << setw( 30 ) << e << endl;
	return 0;
}
				
			
								




			 
		 

