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

void repeat ( int, int, int );

int main ()
{
	srand ( time ( 0 ) );
	int a;
	string c;
	int levelup = 1;
	int rCount = 0;
	int level;
	cout << "Enter your level ( 1 for one-bit, 2 for two-bit and so on ): ";
	cin >> level;
	for ( int count = 1; count <= level; count++ )
		levelup *= 10;
		levelup--;
	for ( int count = 1; count <= 10; count++ )
	{
		int x = 1 + rand() % 9, y = 1 + rand() % levelup;
		cout << "What is " << x << " multiple by " << y << "?" << endl;
		int z;
		cin >> z;
		a = 1 + rand() % 4;
		switch ( a )
		{
			case 1:
				c = "Very well";
				break;
			case 2:
				c = "Perfectly!"; 
				break;
			case 3:
				c = "Great job!";
				break;
			case 4:
				c = "Keep working in the same spirit!";
				break;
		}
		if ( z == x * y )
		{
			cout << c << endl;
			rCount++;
		}
		else
			repeat( x, y, z );
	}
	
	if ( ( rCount * 10 ) < 75 )
		cout << "Please ask your teacher to help you!" << endl;
	return 0;
}

void repeat ( int x, int y, int z )
{
	int a, b;
	string c, d;
	a = 1 + rand() % 4, b = 1 + rand() % 4;
	switch ( a )
	{
		case 1:
			c = "Very well";
			break;
		case 2:
			c = "Perfectly!"; 
			break;
		case 3:
			c = "Great job!";
			break;
		case 4:
			c = "Keep working in the same spirit!";
			break;
	}
	switch ( b )
	{
		case 1:
			d = "It's wrong! Try again!";
			break;
		case 2:
			d = "No. Please try again!";
			break;
		case 3:
			d = "Do not be discouraged!";
			break;
		case 4:
			d = "No. Continue your attempts!";
			break;
	}
	if ( z == x * y )
		cout << c << endl;
	else
	{
		cout << d << endl;
		cout << "What is " << x << " multiple by " << y << "?" << endl;
		cin >> z;
		repeat ( x, y, z );
	}
}






















