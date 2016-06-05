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

void repeatum ( int, int, int );
void repeatall ( int, int, int, string, int );
void repeatplus ( int x, int y, int z );
void repeatmin ( int x, int y, int z );
void repeatdel ( int x, int y, int z );

int main ()
{
	srand ( time ( 0 ) );
	int a;
	string c;
	int levelup = 1;
	int rCount = 0;
	int level;
	int type;
	string t;
	int r;
	cout << "Выберите операцию для изучения \n( 1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - разное )"
		<< endl;
	cin >> type;
	cout << "Введите ваш уровень ( 1 для одноразрядных, 2 для двухразрядных и т. д. ): ";
	cin >> level;
	
	for ( int count = 1; count <= level; count++ )
		levelup *= 10;
		levelup--;
	if ( type == 3 )
	{
		for ( int count = 1; count <= 10; count++ )
		{
			int x = 1 + rand() % levelup, y = 1 + rand() % levelup;
			cout << "Сколько будет " << x << " умножить на " << y << "?" << endl;
			int z;
			cin >> z;
			a = 1 + rand() % 4;
			switch ( a )
			{
				case 1:
					c = "Очень хорошо мяука!";
					break;
				case 2:
					c = "Прекрасно!"; 
					break;
				case 3:
					c = "Мяука - вы восхитительны!";
					break;
				case 4:
					c = "Продолжайте мяучить в том же духе!";
					break;
			}
			if ( z == x * y )
			{
				cout << c << endl;
				rCount++;
			}
			else
				repeatum( x, y, z );
		}
	}
	if ( type == 1 )
	{
		for ( int count = 1; count <= 10; count++ )
		{
			int x = 1 + rand() % levelup, y = 1 + rand() % levelup;
			cout << "Сколько будет " << x << " + " << y << "?" << endl;
			int z;
			cin >> z;
			a = 1 + rand() % 4;
			switch ( a )
			{
				case 1:
					c = "Очень хорошо мяука!";
					break;
				case 2:
					c = "Прекрасно!"; 
					break;
				case 3:
					c = "Мяука - вы восхитительны!";
					break;
				case 4:
					c = "Продолжайте мяучить в том же духе!";
					break;
			}
			if ( z == x + y )
			{
				cout << c << endl;
				rCount++;
			}
			else
				repeatplus( x, y, z );
		}
	}
	if ( type == 2 )
	{
		for ( int count = 1; count <= 10; count++ )
		{
			int x = 1 + rand() % levelup, y = 1 + rand() % x;
			int z;
			cout << "Сколько будет " << x << " - " << y << "?" << endl;
			cin >> z;
			a = 1 + rand() % 4;
			switch ( a )
			{
				case 1:
					c = "Очень хорошо мяука!";
					break;
				case 2:
					c = "Прекрасно!"; 
					break;
				case 3:
					c = "Мяука - вы восхитительны!";
					break;
				case 4:
					c = "Продолжайте мяучить в том же духе!";
					break;
			}
			if ( z == x - y )
			{
				cout << c << endl;
				rCount++;
			}
			else
				repeatmin( x, y, z );
		}
	}
	if ( type == 4 )
	{
		for ( int count = 1; count <= 10; count++ )
		{
			int x = 1 + rand() % levelup, y = 1 + rand() % x;
			while ( x % y != 0 )
				y--;	
			cout << "Сколько будет " << x << " / " << y << "?" << endl;
			int z;
			cin >> z;
			a = 1 + rand() % 4;
			switch ( a )
			{
				case 1:
					c = "Очень хорошо мяука!";
					break;
				case 2:
					c = "Прекрасно!"; 
					break;
				case 3:
					c = "Мяука - вы восхитительны!";
					break;
				case 4:
					c = "Продолжайте мяучить в том же духе!";
					break;
			}
			if ( z == x / y )
			{
				cout << c << endl;
				rCount++;
			}
			else
				repeatdel( x, y, z );
		}
	}
	if ( type == 5 )
	{
		for ( int count = 1; count <= 10; count++ )
		{
			int x = 1 + rand() % levelup, y = 1 + rand() % x;
			a = 1 + rand() % 4;
			switch ( a )
			{
				case 1:
					c = "Очень хорошо мяука!";
					t = " + ";
					r = x + y;
					break;
				case 2:
					c = "Прекрасно!"; 
					t = " - ";
					r = x - y;
					break;
				case 3:
					c = "Мяука - вы восхитительны!";
					t = " * ";
					r = x * y;
					break;
				case 4:
					c = "Продолжайте мяучить в том же духе!";
					t = " / ";
					r = x / y;
					break;
			}
			if ( a == 4 )
			{
				while ( x % y != 0 )
					y = y - 1;
				r = x / y;
			}
			cout << "Сколько будет " << x << t << y << " ?" << endl;
			int z;
			cin >> z;
			if ( z == r )
			{
				cout << c << endl;
				rCount++;
			}
			else
				repeatall( x, y, z, t, r );
		}
	}
	
	
	if ( ( rCount * 10 ) < 75 )
		cout << "Пожалуйста попросите вашего хозяина - Михаила помочь вам избавиться от брехни!" << endl;
	return 0;
}

void repeatum ( int x, int y, int z )
{
	int a, b;
	string c, d;
	a = 1 + rand() % 4, b = 1 + rand() % 4;
	switch ( a )
	{
		case 1:
			c = "Очень хорошо мяука!";
			break;
		case 2:
			c = "Прекрасно!"; 
			break;
		case 3:
			c = "Мяука - вы восхитительны!";
			break;
		case 4:
			c = "Продолжайте мяучить в том же духе!";
			break;
	}
	switch ( b )
	{
		case 1:
			d = "Брехня!";
			break;
		case 2:
			d = "Собачья! Мяукните еще раз!";
			break;
		case 3:
			d = "Не опускайти брехи!";
			break;
		case 4:
			d = "Повторите ваши собачьи!";
			break;
	}
	if ( z == x * y )
		cout << c << endl;
	else
	{
		cout << d << endl;
		cout << "Сколько будет " << x << " умножить на " << y << "?" << endl;
		cin >> z;
		repeatum ( x, y, z );
	}
}
void repeatplus ( int x, int y, int z )
{
	int a, b;
	string c, d;
	a = 1 + rand() % 4, b = 1 + rand() % 4;
	switch ( a )
	{
		case 1:
			c = "Очень хорошо мяука!";
			break;
		case 2:
			c = "Прекрасно!"; 
			break;
		case 3:
			c = "Мяука - вы восхитительны!";
			break;
		case 4:
			c = "Продолжайте мяучить в том же духе!";
			break;
	}
	switch ( b )
	{
		case 1:
			d = "Брехня!";
			break;
		case 2:
			d = "Собачья! Мяукните еще раз!";
			break;
		case 3:
			d = "Не опускайти брехи!";
			break;
		case 4:
			d = "Повторите ваши собачьи!";
			break;
	}
	if ( z == x + y )
		cout << c << endl;
	else
	{
		cout << d << endl;
		cout << "Сколько будет " << x << " + " << y << "?" << endl;
		cin >> z;
		repeatplus ( x, y, z );
	}
}
void repeatmin ( int x, int y, int z )
{
	int a, b;
	string c, d;
	a = 1 + rand() % 4, b = 1 + rand() % 4;
	switch ( a )
	{
		case 1:
			c = "Очень хорошо мяука!";
			break;
		case 2:
			c = "Прекрасно!"; 
			break;
		case 3:
			c = "Мяука - вы восхитительны!";
			break;
		case 4:
			c = "Продолжайте мяучить в том же духе!";
			break;
	}
	switch ( b )
	{
		case 1:
			d = "Брехня!";
			break;
		case 2:
			d = "Собачья! Мяукните еще раз!";
			break;
		case 3:
			d = "Не опускайти брехи!";
			break;
		case 4:
			d = "Повторите ваши собачьи!";
			break;
	}
	if ( ( z == x - y ) || ( z == y - x ) )
		cout << c << endl;
	else
	{
		cout << d << endl;
		cout << "Сколько будет " << x << " - " << y << "?" << endl;
		cin >> z;
		repeatmin ( x, y, z );
	}
}
void repeatdel ( int x, int y, int z )
{
	int a, b;
	string c, d;
	a = 1 + rand() % 4, b = 1 + rand() % 4;
	switch ( a )
	{
		case 1:
			c = "Очень хорошо мяука!";
			break;
		case 2:
			c = "Прекрасно!"; 
			break;
		case 3:
			c = "Мяука - вы восхитительны!";
			break;
		case 4:
			c = "Продолжайте мяучить в том же духе!";
			break;
	}
	switch ( b )
	{
		case 1:
			d = "Брехня!";
			break;
		case 2:
			d = "Собачья! Мяукните еще раз!";
			break;
		case 3:
			d = "Не опускайти брехи!";
			break;
		case 4:
			d = "Повторите ваши собачьи!";
			break;
	}
	if ( z == x / y )
		cout << c << endl;
	else
	{
		cout << d << endl;
		cout << "Сколько будет " << x << " / " << y << "?" << endl;
		cin >> z;
		repeatdel ( x, y, z );
	}
}
void repeatall ( int x, int y, int z, string t, int r )
{
	int a, b;
	string c, d;
	a = 1 + rand() % 4, b = 1 + rand() % 4;
	switch ( a )
	{
		case 1:
			c = "Очень хорошо мяука!";
			break;
		case 2:
			c = "Прекрасно!"; 
			break;
		case 3:
			c = "Мяука - вы восхитительны!";
			break;
		case 4:
			c = "Продолжайте мяучить в том же духе!";
			break;
	}
	switch ( b )
	{
		case 1:
			d = "Брехня!";
			break;
		case 2:
			d = "Собачья! Мяукните еще раз!";
			break;
		case 3:
			d = "Не опускайти брехи!";
			break;
		case 4:
			d = "Повторите ваши собачьи!";
			break;
	}
	if ( z == r )
		cout << c << endl;
	else
	{
		cout << d << endl;
		cout << "Сколько будет " << x << t << y << "?" << endl;
		cin >> z;
		repeatall ( x, y, z, t, r );
	}
}
