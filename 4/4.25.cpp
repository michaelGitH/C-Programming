// 4.25.cpp Вывести квадрат заданного размера
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a;

	cout << "Enter the side length of the square: ";
	cin >> a;



	if ( a == 1 )
		cout << "*" << endl;
	else if ( a == 0 )
		cout << " " << endl;
	else if ( a < 0 )
		cout << "You entered wrong value!" << endl;
	else if ( a <= 20 )
	{
		int b = 1;
		while ( b <= a )
		{
			cout << "*";
			b++;
		}
		cout << endl;

		b = 1;
		int c = a - 2;
		while ( b <= c )
		{	
			cout << "*";
			int d = 1;
			while ( d <=c )
			{
				cout << " ";
				d++;
			}
			cout << "*" << endl;
			b++;
		}

		b = 1;
		while ( b <= a )
		{
			cout << "*";
			b++;
		}
		cout << endl;
	}

	else
		cout << "You entered wrong value!" << endl;

	return 0;
}

	

			

			
				
