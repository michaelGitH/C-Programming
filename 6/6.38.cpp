#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::fixed;
using std::boolalpha;

#include <string>
using std::string;

#include <cstdlib>
using std::rand;
using std::srand;

#include <iomanip>
using std::setw;
using std::setprecision;
using std::left;

#include <cmath>
using std::sqrt;
using std::pow;

int main()
{
	string a = "Да";
	int count;
	while ( a == "Да" )
	{
		int y;
		srand ( time ( 0 ) );
		int x = 1 + rand() % 1000;
		cout << "Мое число, в диапозоне от 1 до 1000\n"
			<< "Ты сможешь его отгадать?\n"
			<< "Пожалуйста введите вашу первую догадку: ";
		cin >> y;
		for ( count = 1; y != x; count++ )
		{
			if ( y < x )
			{
				cout << "Слишком мало. Попытайтесь снова." << endl;
				cin >> y;
			}
			else if ( y > x )
			{
				cout << "Слишком много. Попытайтесь снова." << endl;
				cin >> y;
			}
		}
		if ( count < 10 )
			cout << "Или вы знаете секрет, или вы счастливчик!" << endl;
		else if ( count == 10 )
			cout << "О! Вы знаете секрет!." << endl;
		else
			cout << "Вы должны развивать свои способности!" << endl;
		
		cout << "Отлично! Вы отгадали число!\nХотите сыграть еще (Да или Нет)?" << endl;
		cin >> a;
	}
	return 0;
}
	


























