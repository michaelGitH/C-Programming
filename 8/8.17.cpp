#include<iostream>
#include<cstdlib>
using namespace std;

int moveT ();
int moveH ();

int main()
{
	srand( time( 0 ) );
	int hw = 1, tw = 1;
	int wayH[ 70 ] = { 0 }, wayT[ 70 ] = { 0 };
	int hare, tortoise;
	cout << "BANG !!!!!\nAND THE'RE OFF !!!" << endl;
	for ( int count = 0; count < 500000000; count++ );
	
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl
				<< endl << endl << endl << endl << endl << endl;
	while ( hw < 70 && tw < 70 )
	{
		hare = moveH();
		tortoise = moveT();
		hw += hare;
		tw += tortoise;
		if ( hw < 1 )
			hw = 1;
		if ( tw < 1 )
			tw = 1;
		if ( hw > 70 )
			hw = 70;
		if ( tw > 70 )
			tw = 70;
		for ( int i = 1; i <= 70; i++ )
		{
			if ( i != hw )
				cout << "-";
			else
				cout << "H";
		}
		cout << endl;
		for ( int i = 1; i <= 70; i++ )
		{
			if ( i != tw )
				cout << "-";
			else
				cout << "T";
		}		
		cout << endl;


		if ( hw == tw )
		{
			cout << "OUCH!!!" << endl;
			for ( int count = 0; count < 1000000000; count++ );
		}
		else
			for ( int count = 0; count < 100000000; count++ );
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl
				<< endl << endl << endl << endl << endl << endl;
	}
	

	return 0;
}

int moveT ()
{
	int i = 1 + rand() % 10;
	if ( i >= 1 && i <= 5 )
		return 3;
	else if ( i >= 6 && i <= 8 )
		return 1;
	else if ( i >= 9 && i <= 10 )
		return -6;
}

int moveH ()
{
	int i = 1 + rand() % 10;
	if ( i >= 1 && i <= 3 )
		return 1;
	else if ( i >= 4 && i <= 5 )
		return 9;
	else if ( i >= 6 && i <= 7 )
		return 0;	
	else if ( i >= 8 && i <= 9 )
		return -2;	
	else if ( i == 10 )
		return -12;	
}


























