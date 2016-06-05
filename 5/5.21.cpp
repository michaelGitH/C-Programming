#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main()
{
	int code;
	int stop = 0;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;
	double salary;
	int hour;
	int ware = 100;

	cout << fixed << setprecision( 2 );
	cout << "Введите код работника ( 1 - менеджер, 2 - почасовой рабочий, 3 - комиссионщик, 4 - сдельщик ): ";
	cin >> code;
	while ( code != EOF )
	{
		switch ( code )
		{
			case 1:
				cout << "Введите сумму недельного оклада: ";
				cin >> salary;
				cout << "Ваша зарботная плата за неделю: " << salary << "$" << endl;
				count1++;
				break;
			case 2:
				cout << "Введите часовую ставку: ";
				cin >> salary;
				cout << "Введите колличество отработанных часов: ";
				cin >> hour;
				if ( hour <= 40 )
					salary = salary * static_cast< double >( hour );
				else
					salary = salary * 40 + 1.5 * salary * ( static_cast< double >( hour ) - 40 );
				cout << "Ваша зарботная плата за неделю: " << salary << "$" << endl;
				count2++;
				break;
			case 3:
				cout << "Введите сумму недельных продаж: ";
				cin >> salary;
				salary = .057 * salary + 250;
				cout << "Ваша зарботная плата за неделю: " << salary << "$" << endl;
				count3++;
				break;
			case 4:
				cout << "Введите сумму изготовленных изделий: ";
				cin >> salary;
				salary = salary * ware;
				cout << "Ваша зарботная плата за неделю: " << salary << "$" << endl;
				count4++;
				break;
			default:
				cout << "Недействительный код работника, повторите ввод!" << endl;
		}
		cout << "Введите код работника ( 1 - менеджер, 2 - почасовой рабочий, 3 - комиссионщик, 4 - сдельщик ): ";
		cin >> code;
	}
	return 0;
}
								









					
					
				
