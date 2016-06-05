#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::fixed;
#include <iomanip>
using std::setprecision;
using std::setw; //позволяет программе устанавливать ширину поля

int main()
{
	int ten;
	cout << "Enter ten-number: ";
	cin >> ten;
	int control = ten;
	int count = 0;
	int count2 = 0;
	int two;
	int del = ten;

	while ( del != 1 )
	{		
		del /= 2;
		count++;
	}

	cout << "two-number is: ";
	for ( count; count >= 1; count-- )
	{
		del = ten;
		for ( count2 = count; count2 >= 1; count2-- )
		{
			two = del % 2;
			del /= 2;
		}
		cout << two;
	}
	cout << endl;
	return 0;
}
						
				
			
