// Определения элемент-функций класса DeckOfCards,
// моделирующего тасование и сдачу колоды игральных карт.
#include<iostream>
using std::cout;
using std::left;
using std::right;
using std::endl;
using std::cin;
#include<iomanip>
using std::setw;
#include<cstdlib>
using std::rand;
using std::srand;
#include<ctime>
using std::time;
#include"DOC.h"

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
	int count = 1;
	for ( int *p1 = player1; p1 < ( player1 + 5 ); p1++ )
	{
		*p1 = count;
		count += 2;
	}
	count = 2;
	for ( int *p2 = player2; p2 < ( player2 + 5 ); p2++ )
	{
		*p2 = count;
		count += 2;
	}
	for ( int i = 0; i < 6; i++ )
	{
		nominal1[ i ] = 0;
		nominal2[ i ] = 0;
	}
	
	srand( time( 0 ) );
}

// перетасовать карты в колоде
void DeckOfCards::shuffle()
{
	int row;
	int column;

	// для каждой иэ 52 карт случайно выбрать ячейку deck
	for( int card = 1; card <= 52; card++ )
	{
		do // выбрать новую позицию, пока не найдется свободная 
		{
			row = rand() % 4; // случайно выбрать строку
			column = rand() % 13; // случайно выбрать столбец
		} while( deck[ row ][ column ] != 0 );
	// поместить номер карты в выбранную ячейку deck
	deck[ row ][ column ] = card;
	}
}

// сдать карты

void DeckOfCards::flash ( int p[][ 5 ], int n[] )
{
	int counter = 0;
	for ( int count = 1; count < 5; count++ )
		if ( p[ 0 ][ count ] == p[ 0 ][ count - 1 ] )
			counter++;

	int larg = 0;
	for ( int count = 0; count < 5; count++ )
		if ( p[ 1 ][ count ] > larg )
			larg = p[ 1 ][ count ];

	if ( counter == 4 )
	{
		cout << "Флеш" << endl;
		n[ 4 ] = larg;
	}
}

void DeckOfCards::pock ( int p[][ 5 ], int n[] )
{
	int two = 0;
	int two1 = 0;
	int two2 = 0;
	int space[ 5 ] = { 0 };
	for ( int count = 0; count < 5; count++ )
	{
		int counter = 1;
		if ( space[ count ] == 0 )
		{
			for ( int c = 0; c < 5; c++ )
			{
				if ( c != count )
				{
					if ( p[ 1 ][ count ] == p[ 1 ][ c ] )
					{
						space[ count ] = 1;
						space[ c ] = 1;
						counter++;
					}
				}
			}
		}
		if ( counter == 2 )
		{
			two++;
			if ( two == 1 )
				n[ 0 ] = p[ 1 ][ count ];
			else if ( two == 2 )
				n[ 1 ] = p[ 1 ][ count ];
		}
		else if ( counter == 3 )
		{
			cout << "Тройка" << endl;
			n[ 2 ] = p[ 1 ][ count ];
		}
		else if ( counter == 4 )
		{
			cout << "Карэ" << endl;
			n[ 3 ] = p[ 1 ][ count ];
		}
	}
	if ( two == 1 )
		cout << "Пара" << endl;
	if ( two == 2 )
		cout << "Две пары" << endl;

	for ( int i = 0; i < 5; i++ )
		space[ i ] = p[ 1 ][ i ];

	for ( int count = 0; count < 10; count++ )
		for ( int i = 1; i < 5; i++ )
		{
			int clone = space[ i ];
			int j = i - 1;
				if ( space[ i ] < space[ j ] )
				{
					space[ i ] = space[ j ];
					space[ j ] = clone;
				}
		}
	int counter = 0;
	for ( int i = 1; i < 5; i++ )
	{
		if ( space[ i ] - space[ i - 1 ] == 1 )
			counter++;
	}

	int larg = 0;
	for ( int count = 0; count < 5; count++ )
		if ( p[ 1 ][ count ] > larg )
			larg = p[ 1 ][ count ];

	if ( counter == 4 )
	{
		cout << "Стрит" << endl;
		n[ 5 ] = larg;
	}


}


void DeckOfCards::show()
{
	// инициализировать массив мастей
	static const char *suit[ 4 ] = { "Черви", "Буби", "Вини", "Крести" };	
	// инициализировать массив номиналов
	static const char *face[ 13 ] =
		{ "Двойка", "Tройка", "Четверка", "Пятерка", "Шестерка", "Семерка", "Восьмерка",
		"Девятка", "Десятка", "Валет", "Дама", "Король", "Туз" };

	int p1[ 2 ][ 5 ];
	int p2[ 2 ][ 5 ];
	
	
	cout << "Player1" << endl;
	for( int card = 0; card <= 4; card++ )
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
							<< " " << setw( 8 ) << left << suit[ row ]
							<< '\n';
						p1[ 0 ][ card ] = row;
						p1[ 1 ][ card ] = column;
				}
			}
	}
	cout << endl;
	pock ( p1, nominal1 );
	flash ( p1, nominal1 );
	cout << endl << endl;
	cout << "Player2" << endl;
	for( int card = 0; card <= 4; card++ )
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
							<< " " << setw( 8 ) << left << suit[ row ]
							<< '\n';
						p2[ 0 ][ card ] = row;
						p2[ 1 ][ card ] = column;
				}
			}
	}
	cout << endl;
	pock( p2, nominal2 );
	flash( p2, nominal2 );

	int copy1[ 5 ], copy2[ 5 ];
	for ( int i = 0; i < 5; i++ )
	{
		copy1[ i ] = p1[ 1 ][ i ];
		copy2[ i ] = p2[ 1 ][ i ];
	}
	
	int combo1 = -1, combo2 = -1;
	int old1 = -1, old2 = -1;
	for ( int i = 0; i < 6; i++ )
	{
		if ( nominal1[ i ] != 0 )
		{
			combo1 = i;
			old1 = nominal1[ i ];
		}
		if ( nominal2[ i ] != 0 )
		{
			combo2 = i;
			old2 = nominal2[ i ];
		}
	}
	if ( ( combo1 == -1 ) && ( combo2 == -1 ) )
	{
		if ( oldest( copy1, copy2 ) == 1 )
			cout << "player1 выиграл!" << endl;
		else
			cout << "player2 выиграл!" << endl;
	}			
	else if ( combo1 > combo2 )
		cout << "player1 выиграл!" << endl;
	else if ( combo2 > combo1 )
		cout << "player2 выиграл!" << endl;
	else if ( combo1 == combo2 )
	{
		if ( old1 > old2 )
			cout << "player1 выиграл!" << endl;
		else if ( old2 > old1 )	
			cout << "player2 выиграл!" << endl;
		else if ( old2 == old1 )
			cout << "Ничья!" << endl;	
	}
			
}
		

void DeckOfCards::deal()
{
	// инициализировать массив мастей
	static const char *suit[ 4 ] = { "Hearts", "Diamonds", "Clubs", "Sprades" };
	
	// инициализировать массив номиналов
	static const char *face[ 13 ] =
		{ "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight",
		"Nine", "Ten", "Jack", "Queen", "King" };

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
				}
			}
	}
}

int DeckOfCards::oldest ( int x[], int y[] )
{
	for ( int count = 0; count < 10; count++ )
		for ( int i = 1; i < 5; i++ )
		{
			int clone = x[ i ];
			int j = i - 1;
				if ( x[ i ] < x[ j ] )
				{
					x[ i ] = x[ j ];
					x[ j ] = clone;
				}
		}	
	for ( int count = 0; count < 10; count++ )
		for ( int i = 1; i < 5; i++ )
		{
			int clone = y[ i ];
			int j = i - 1;
				if ( y[ i ] < y[ j ] )
				{
					y[ i ] = y[ j ];
					y[ j ] = clone;
				}
		}	
	for ( int i = 4; i >= 0; i-- )
	{
		if ( x[ i ] > y[ i ] )
			return 1;
		else if ( y[ i ] > x[ i ] )
			return 2;
	}
}



















