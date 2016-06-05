#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double hours;
	double hourRate;
	double salary;
	double overSalary;

	cout << "\nВведите колличество часов( -1 если ввод закончен ): ";
	cin >> hours;

	while ( hours != -1 )
	{
		cout << "Введите часовую ставку: ";
		cin >> hourRate;
		if ( hours <= 40 )
		{
			salary = hours * hourRate;
			cout << "Ваш недельный заработок: " << setprecision(2)
				  << fixed << salary << endl;
		}
		else
		{
			salary = 40 * hourRate + (( hours - 40 ) * hourRate * 1.5 );
			cout << "Ваш недельный заработок: " << setprecision(2)
				  << fixed << salary << endl;
		}
		cout << "\nВведите колличество часов( -1 если ввод закончен ): ";
		cin >> hours;		
	}

	return 0;
}
		
				  

