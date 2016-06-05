#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
#include <string>
using std::string;

#include <ctime>
using std::time;

#include <cstdlib>
using std::rand;
using std::srand;

#include <iomanip>
using std::setw;
using std::setprecision;

int main()
{
	const int size = 11;
	int avia[ size ] = { 0 };
	int input;
	string inp = "q";	
	for ( int counter = 1; counter <= 100; counter++ )
	{	
	cout << "Добро пожаловать в нашу авиакомпанию, Введите, пожалуйста, 1 для \"курящих\"\nВведите, пожалуйста, 2 для \"некурящих\"" << endl;
	cin >> input;
	if ( input == 1 )
	{
		int count;
		for ( count = 1; count < 6; count++ )
		{
			if ( avia[ count ] == 0 )
			{
				avia[ count ]++;
				cout << "Ваше место: " << count << "; Салон для курящих." << endl;
				count = 7;
			}
		}
		if ( count == 6 )
		{
			cout << "Свободные места для курящих отсутствуют, приемлим ли вам салон для некурящих?(Да/Нет)" << endl;
			cin >> inp;
			if ( inp == "Да" )
			{
				for ( count = 6; count < 11; count++ )
				{
					if ( avia[ count ] == 0 )
					{
						avia[ count ]++;
						cout << "Ваше место: " << count << "; Салон для некурящих." << endl;
						count = 12;
					}
				}
				if ( count == 11 )
					cout << "Билеты на текущий рейс закончились. Следующий через 3 часа." << endl;
			}
			else if ( inp == "Нет" )
				cout << "Следующий рейс через 3 часа.";
			
		}
	}
	if ( input == 2 )
	{
		int count;
		for ( count = 6; count < 11; count++ )
		{
			if ( avia[ count ] == 0 )
			{
				avia[ count ]++;
				cout << "Ваше место: " << count << "; Салон для некурящих." << endl;
				count = 12;
			}
		}
		if ( count == 11 )
			cout << "Свободных мест нет. Следующий рейс через 3 часа" << endl;
	}
	}
	return 0;
}
		
















