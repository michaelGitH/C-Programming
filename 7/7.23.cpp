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
	int floor[ 20 ][ 20 ] = { 0 };
	int choice;
	int step;
	int position = 0;
	int direction = 4;
	int st = 0, cl = 0;
	while ( choice != 9 )
	{
		cout << "Enter comand:";
		cin >> choice;
		if ( choice == 1 )
			position = 0;
		if ( choice == 2 )
			position = 1;
		if ( choice == 3 )
		{
			if ( direction == 0 || direction == 4 )
				direction = 2;
			else if ( direction == 2 )
				direction = 1;
			else if ( direction == 1 )
				direction = 3;
			else if ( direction == 3 )
				direction = 0;
		}
		if ( choice == 4 )
		{
			if ( direction == 0 || direction == 4 )
				direction = 3;
			else if ( direction == 3 )
				direction = 1;
			else if ( direction == 1 )
				direction = 2;
			else if ( direction == 2 )
				direction = 0;
		}
		if ( choice == 5 )
		{
			cin >> step;
			if ( direction == 4 )
			{
				int column;
				for ( column = cl; column < step; column++ )
					floor[ st ][ column ] = position;
				if ( column > 19 )
					cl = 19;
				else
					cl = column - 1;
			}
			else if ( direction == 0 )
			{
				if ( cl == 19 )
					cout << "End of the room!" << endl;
				else
				{
					int column;
					for ( column = cl; column < cl + step; column++ )
						floor[ st ][ column ] = position;
				if ( column > 19 )
					cl = 19;
				else
					cl = column - 1;
				}
			}
			else if ( direction == 1 )
			{
				if ( cl == 0 )
					cout << "End of the room!" << endl;
				else
				{
					int column;
					for ( column = cl; column > cl - step; column-- )
						floor[ st ][ column ] = position;
				if ( column < 0 )
					cl = 0;
				else
					cl = column + 1;
				}
			}
			else if ( direction == 2 )
			{
				if ( st == 19 )
					cout << "End of the room!" << endl;
				else
				{
					int string;
					for ( string = st; string < st + step; string++ )
						floor[ string ][ cl ] = position;
					if ( st > 19 )
						st = 19;
					else
						st = string - 1;
				}
			}
			else if ( direction == 3 )
			{
				if ( st == 0 )
					cout << "End of the room!" << endl;
				else
				{
					int string;
					for ( string = st; string > st - step; string-- )
						floor[ string ][ cl ] = position;
					if ( st < 0 )
						st = 0;
					else
						st = string + 1;
				}
			}
		}
	
		if ( choice == 6 )
			for ( int string = 0; string < 20; string++ )
			{
				for ( int column = 0; column < 20; column++ )
				{
					if ( floor[ string ][ column ] == 1 )
						cout << '*';
					else
						cout << ' ';
				}
				cout << endl;
			}
		if ( choice == 7 )
			for ( int string = 0; string < 20; string++ )
			{
				for ( int column = 0; column < 20; column++ )
					cout << floor[ string ][ column ];
				cout << endl;
			}
	}
		return 0;
}
	
