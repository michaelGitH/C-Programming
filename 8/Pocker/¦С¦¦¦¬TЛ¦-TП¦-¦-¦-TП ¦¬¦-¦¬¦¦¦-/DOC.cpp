// Определения элемент-функций класса DeckOfCards,
// моделирующего тасование и сдачу колоды игральных карт.
#include<iostream>
using std::cout;
using std::left;
using std::right;
using std::endl;
#include<iomanip>
using std::setw;
#include<cstdlib>
using std::rand;
using std::srand;
#include<ctime>
using std::time;
#include"DOC.h"
using namespace std;

void test ( int x[][ 13 ] )
{
	cout << "shufle:" << endl;
	for ( int i = 0; i < 4; i++ )
	{
		for ( int j = 0; j < 13; j++ )
			cout << setw( 4 ) << x[ i ][ j ];
		cout << endl;
	}
}
// конструктор по умолчанию DeckOfCards инициализирует колоду
DeckOfCards::DeckOfCards()
{
	// цикл по строкам deck
	for( int row = 0; row <= 3; row++ )
		// цикл по столбцам в текущей строке deck
		for( int column = 0; column <= 12; column++ )
		{
			deck[ row ][ column ] = 0; // установить ячейку в 0
		}

	int c;
	for ( number = 2, c = 0; number <= 10, c < 5; number += 2, c++ )
	{
		player1[ c ] = number - 1;
		player2[ c ] = number;
	}

	srand( time( 0 ) );
}

// перетасовать карты в колоде
void DeckOfCards::shuffle()
{
	int card = 1;
	for ( int i = 0; i < 4; i++ )
		for ( int j = 0; j < 13; j++ )
			deck[ i ][ j ] = card++;

	for ( int i = 0; i < 4; i++ )
		for ( int j = 0; j < 13; j++ )
		{
			int copy = deck[ i ][ j ];
			int row = rand() % 4;
			int column = rand() % 13;
			deck[ i ][ j ] = deck[ row ][ column ];
			deck[ row ][ column ] = copy;
		}
}

void DeckOfCards::deals()
{
	// инициализировать массив мастей
	static const char *suit[ 4 ] = { "Hearts", "Diamonds", "Clubs", "Sprades" };
	
	// инициализировать массив номиналов
	static const char *face[ 13 ] =
		{ "Ace", "2", "3", "4", "5", "6", "7", "8", "9",
		"10", "Jack", "Queen", "King" };

	int p1[ 2 ][ 5 ] = { 0 }, p2[ 2 ][ 5 ] = { 0 };
	int iq1[ 5 ], iq2[ 5 ];
	for ( int i = 0; i < 5; i++ )
	{
		iq1[ i ] = -1;
		iq2[ i ] = -1;
	}

	cout << "Player1: " << endl;
	// для каждой иэ 5 карт 1 игрока
	for( int card = 0; card < 5; card++ )
	{
		// цикл по строкам deck
		for( int row = 0; row <= 3; row++ )
			// цикл про столбцам в текущей строке deck
			for( int column = 0; column <= 12; column++ )
			{
				// если ячейка содержит текущую карту, вывести карту
				if( deck[ row ][ column ] == player1[ card ] )
				{
					cout << setw( 5 ) << right << face[ column ]
						<< " of " << setw( 8 ) << left << suit[ row ]
						<< '\n';
					p1[ 0 ][ card ] = row;
					p1[ 1 ][ card ] = column;
					row = 4;
					column = 13;
				}
			}
	}
	int nominal1[ 6 ] = { -1, -1, -1, -1, -1, -1, };
	cout << endl;
	int combo1 = combo( p1, nominal1, iq1 );
	if ( combo1 == 0 )
		cout << "Hight card!" << endl;
	else if ( combo1 == 1 )
		cout << "Pair!" << endl;
	else if ( combo1 == 2 )
		cout << "Two pair!" << endl;
	else if ( combo1 == 3 )
		cout << "Set!" << endl;
	else if ( combo1 == 4 )
		cout << "Kare!" << endl;
	else if ( combo1 == 5 )
		cout << "Flash!" << endl;
	else if ( combo1 == 6 )
		cout << "Street!" << endl;

	cout << endl;

	// для каждой иэ 5 карт 2 игрока
	for( int card = 0; card < 5; card++ )
	{
		// цикл по строкам deck
		for( int row = 0; row <= 3; row++ )
			// цикл про столбцам в текущей строке deck
			for( int column = 0; column <= 12; column++ )
			{
				// если ячейка содержит текущую карту, вывести карту
				if( deck[ row ][ column ] == player2[ card ] )
				{
					//cout << setw( 5 ) << right << face[ column ]
						//<< " of " << setw( 8 ) << left << suit[ row ]
						//<< '\n';
					p2[ 0 ][ card ] = row;
					p2[ 1 ][ card ] = column;
					row = 4;
					column = 13;
				}
			}
	}
	int nominal2[ 6 ] = { -1, -1, -1, -1, -1, -1, };
	cout << endl;
	
	int combo2 = combo( p2, nominal2, iq2 );
	cout << endl;

	//Предложение заменить карты игроку
	change( player1, &number );

	//Компьютер меняет карты
	for ( int i = 0; i < 5; i++ )
		if ( iq2[ i ] != -1 )
			player2[ i ] = ++number;

	cout << "Player1: " << endl;
	for( int card = 0; card < 5; card++ )
	{
		// цикл по строкам deck
		for( int row = 0; row <= 3; row++ )
			// цикл про столбцам в текущей строке deck
			for( int column = 0; column <= 12; column++ )
			{
				// если ячейка содержит текущую карту, вывести карту
				if( deck[ row ][ column ] == player1[ card ] )
				{
					cout << setw( 5 ) << right << face[ column ]
						<< " of " << setw( 8 ) << left << suit[ row ]
						<< '\n';
					p1[ 0 ][ card ] = row;
					p1[ 1 ][ card ] = column;
					row = 4;
					column = 13;
				}
			}
	}
	for ( int i = 0; i < 6; i++ )
		nominal1[ i ] = -1;
	cout << endl;
	combo1 = combo( p1, nominal1, iq1 );
	if ( combo1 == 0 )
		cout << "Hight card!" << endl;
	else if ( combo1 == 1 )
		cout << "Pair!" << endl;
	else if ( combo1 == 2 )
		cout << "Two pair!" << endl;
	else if ( combo1 == 3 )
		cout << "Set!" << endl;
	else if ( combo1 == 4 )
		cout << "Kare!" << endl;
	else if ( combo1 == 5 )
		cout << "Flash!" << endl;
	else if ( combo1 == 6 )
		cout << "Street!" << endl;
	cout << endl;

	cout << "Player2: " << endl;
	for( int card = 0; card < 5; card++ )
	{
		// цикл по строкам deck
		for( int row = 0; row <= 3; row++ )
			// цикл про столбцам в текущей строке deck
			for( int column = 0; column <= 12; column++ )
			{
				// если ячейка содержит текущую карту, вывести карту
				if( deck[ row ][ column ] == player2[ card ] )
				{
					cout << setw( 5 ) << right << face[ column ]
						<< " of " << setw( 8 ) << left << suit[ row ]
						<< '\n';
					p2[ 0 ][ card ] = row;
					p2[ 1 ][ card ] = column;
					row = 4;
					column = 13;
				}
			}
	}
	for ( int i = 0; i < 6; i++ )
		nominal2[ i ] = -1;
	cout << endl;
	combo2 = combo( p2, nominal2, iq2 );
	if ( combo2 == 0 )
		cout << "Hight card!" << endl;
	else if ( combo2 == 1 )
		cout << "Pair!" << endl;
	else if ( combo2 == 2 )
		cout << "Two pair!" << endl;
	else if ( combo2 == 3 )
		cout << "Set!" << endl;
	else if ( combo2 == 4 )
		cout << "Kare!" << endl;
	else if ( combo2 == 5 )
		cout << "Flash!" << endl;
	else if ( combo2 == 6 )
		cout << "Street!" << endl;
	cout << endl;
	int n1[ 5 ], n2[ 5 ];
	for ( int i = 0; i < 5; i++ )
	{
		n1[ i ] = p1[ 1 ][ i ];
		n2[ i ] = p2[ 1 ][ i ];
	}

	for ( int count = 0; count < 10; count++ )
		for ( int i = 1; i < 5; i++ )
		{
			int copy = n1[ i ];
			if ( n1[ i ] < n1[ i - 1 ] )
			{
				n1[ i ] = n1[ i - 1 ];
				n1[ i - 1 ] = copy;
			}
		}
	for ( int count = 0; count < 10; count++ )
		for ( int i = 1; i < 5; i++ )
		{
			int copy = n2[ i ];
			if ( n2[ i ] < n2[ i - 1 ] )
			{
				n2[ i ] = n2[ i - 1 ];
				n2[ i - 1 ] = copy;
			}
		}
	//cout << "n1: ";
	//for ( int i = 0; i < 5; i++ )
		//cout << n1[ i ] << " ";
	//cout << endl;
	//cout << "n2: ";
	//for ( int i = 0; i < 5; i++ )
		//cout << n2[ i ] << " ";
	//cout << endl;

	int x = play( nominal1, nominal2 );
	if ( x == 0 )
	{
		for ( int i = 4; i >= 0; i-- )
		{
			if ( n1[ i ] > n2[ i ] )
			{
				cout << "Player1 win!" << endl;
				i = -1;
			}
			else if ( n2[ i ] > n1[ i ] )
			{
				cout << "Player2 win!" << endl;
				i = -1;
			}
		}
	}

}




// сдать карты
void DeckOfCards::deal()
{
	// инициализировать массив мастей
	static const char *suit[ 4 ] = { "Hearts", "Diamonds", "Clubs", "Sprades" };
	
	// инициализировать массив номиналов
	static const char *face[ 13 ] =
		{ "Ace", "2", "3", "4", "5", "6", "7", "8", "9",
		"10", "Jack", "Queen", "King" };

	// для каждой иэ 52 карт
	for( int card = 1; card <= 52; card++ )
	{
		// цикл по строкам deck
		for( int row = 0; row <= 3; row++ )
			// цикл про столбцам в текущей строке deck
			for( int column = 0; column <= 12; column++ )
			{
				// если ячейка содержит текущую карту, вывести карту
				if( deck[ row ][ column ] == card )
				{
					cout << setw( 5 ) << right << face[ column ]
						<< " of " << setw( 8 ) << left << suit[ row ]
						<< ( card % 2 == 0 ? '\n' : '\t' );
					row = 4;
					column = 13;
				}
			}
	}
}

int DeckOfCards::combo ( int p[][ 5 ], int c[], int q[] )
{
	int almost[ 6 ] = { -1, -1, -1, -1, -1, -1 };
	int counter = 1;
	int two = 0;
	int three = 0;
	int four = 0;
	int flash = 0;
	int street = 0;
	int n[ 5 ] = { 0 };

	//определить наличие пара - каре
	for ( int count = 0; count < 5; count++ )
	{
		if ( n[ count ] == 0 )
		{
			for ( int i = 0; i < 5; i++ )
			{
				if ( n[ i ] == 0 )
					if ( i != count )
					{
						if ( p[ 1 ][ count ] == p[ 1 ][ i ] )
						{
							counter++;
							n[ count ] = 1;
							n[ i ] = 1;
						}
					}
			}
			if ( counter == 2 )
			{
				two++;
				if ( two == 1 )
					c[ 0 ] = p[ 1 ][ count ];				
				else if ( two == 2 );
					c[ 1 ] = p[ 1 ][ count ];
				counter = 1;
			}
			else if ( counter == 3 )
			{
				three++;
				c[ 2 ] = p[ 1 ][ count ];
				counter = 1;
			}
			else if ( counter == 4 )
			{
				four++;
				c[ 3 ] = p[ 1 ][ count ];
				counter = 1;
			}
		}
	}
	
	if ( two != 0 || three != 0 || four != 0 )
		for ( int i = 0; i < 5; i++ )
			if ( n[ i ] == 0 )
				q[ i ] = p[ 1 ][ i ];
	//Определить наличие флеш
	int flashs[ 5 ];
	for ( int i = 0; i < 5; i++ )
		flashs[ i ] = p[ 0 ][ i ];
	int nullf[ 5 ] = { 0 };		

	int f = 0;
	int alf;
	int alf0;
	for ( int i = 0; i < 5; i++ )
	{
		if ( nullf[ i ] == 0 )
			for ( int j = 0; j < 5; j++ )
				if ( nullf[ j ] == 0 )
					if ( i != j )
					{
						if ( flashs[ i ] == flashs[ j ] )
						{
							f++;
							nullf[ i ] = 1;
							nullf[ j ] = 1;
							if ( flashs[ i ] == alf )
								alf = alf0;
						}
						else
						{
							alf = flashs[ i ];
							alf0 = flashs[ j ];
							if ( f == 3 )
								alf = flashs[ j ];
						}
					}
	}

	int big = 0;
	for ( int i = 0; i < 5; i++ )
		if ( p[ 1 ][ i ] > big )
			big = p[ 1 ][ i ];

	if ( f == 3 )
	{
		almost[ 4 ] = alf;
		if ( two == 0 )
			for ( int i = 0; i < 5; i++ )
				if ( p[ 0 ][ i ] == alf )
					q[ i ] = p[ 1 ][ i ];
		//cout << "alf = " << alf << endl;
	}
	else if ( f == 4 )
	{
		flash++;
		c[ 4 ] = big;
	}


	//Определить наличие стрит
	int streets[ 5 ];
	for ( int i = 0; i < 5; i++ )
		streets[ i ] = p[ 1 ][ i ];

	for ( int i = 0; i < 10; i++ )
		for ( int j = 1; j < 5; j++ )
		{
			int copy = streets[ j ];
			if ( streets[ j ] < streets[ j - 1 ] )
			{
				streets[ j ] = streets[ j - 1 ];
				streets[ j - 1 ] = copy;
			}
		}

	//Определение наличия - почти стриит als( almost street );
	int s = 0;
	int als;
	for ( int i = 1; i < 5; i++ )
	{
		if ( ( streets[ i ] - streets[ i - 1 ] ) == 1 )
			s++;
		else if ( streets[ 1 ] - streets[ 0 ] != 1 )
			als = streets[ 0 ];
		else if ( streets[ 4 ] - streets[ 3 ] != 1 )
			als = streets[ 4 ];
	}
	if ( ( s == 3 ) && ( ( streets[ 1 ] - streets[ 0 ] != 1 ) || ( streets[ 4 ] - streets[ 3 ] != 1 ) ) ) 
	{
		almost[ 5 ] = als;
		if ( two == 0 )
			for ( int i = 0; i < 5; i++ )
				if ( p[ 1 ][ i ] == als )
					q[ i ] = p[ 1 ][ i ];
		//cout << "als = " << als << endl;
	}
	else if ( s == 4 )
	{
		street++;
		c[ 5 ] = streets[ 4 ];
	}

	//Вывод на экран
	if ( two == 0 && three == 0 && four == 0 && flash == 0 && street == 0 )
	{ 
		if ( almost[ 5 ] != -1 && almost[ 4 ] != -1 )
			for ( int i = 0; i < 4; i++ )
				q[ rand() % 5 ] = rand() % 13;
		return 0;
	}
	if ( two == 1 )
	{
		c[ 1 ] = -1;
		return 1;
	}
	if ( two == 2 )
		return 2;
	if ( three == 1 )
		return 3;
	if ( four == 1 )
		return 4;
	if ( flash == 1 )
		return 5;
	if ( street == 1 )
		return 6;

}

void DeckOfCards::change ( int p[], int *n )
{
	int numb, one = 1, two = 1, three = 1;
	do
	{
		cout << "How many cards to replace? ( 1 - 3 ) ";
		cin >> numb;
	}
	while ( numb < 1 || numb > 3 );
	do
	{
		cout << "Enter numbers of cards ( 1 - 5 ): ";
		if ( numb == 3 )
		{
			cin >> one >> two >> three;
			p[ one - 1 ] = ++*n;
			p[ two - 1 ] = ++*n;
			p[ three - 1 ] = ++*n;
		}

		else if ( numb == 2 )
		{
			cin >> one >> two;
			p[ one - 1 ] = ++*n;
			p[ two - 1 ] = ++*n;
		}
		else if ( numb == 1 )
		{
			cin >> one;
			p[ one - 1 ] = ++*n;
		}
	}
	while ( one < 1 || one > 5 || two < 1 || two > 5 || three < 1 || three > 5 );
}

int DeckOfCards::play ( int a[], int b[] )
{
	for ( int i = 5; i >= 0; i-- )
	{
		if ( a[ i ] > b[ i ] )
		{
			cout << "Player1 win!" << endl;
			return 1;
		}
		else if ( b[ i ] > a[ i ] )
		{
			cout << "Player2 win!" << endl;
			return 1;
		}
	}
	return 0;
}
















