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
	do
	{
		cout << "Enter number of players( 2 - 6 ): " << endl;
		cin >> number;
	}
	while ( ( number < 2 ) || ( number > 6 ) );

	switch ( number )
	{
		case 2:
			int player[ 2 ][ 5 ];
			int *p1 = &player[ 0 ][ 0 ];
			int *p2 = &player[ 1 ][ 0 ];
			break;
		case 2:
			int player[ 3 ][ 5 ];
			int *p1 = &player[ 0 ][ 0 ];
			int *p2 = &player[ 1 ][ 0 ];
			int *p3 = &player[ 2 ][ 0 ];
			break;
		case 2:
			int player[ 4 ][ 5 ];
			int *p1 = &player[ 0 ][ 0 ];
			int *p2 = &player[ 1 ][ 0 ];
			int *p3 = &player[ 2 ][ 0 ];
			int *p4 = &player[ 3 ][ 0 ];
			break;
		case 2:
			int player[ 5 ][ 5 ];
			int *p1 = &player[ 0 ][ 0 ];
			int *p2 = &player[ 1 ][ 0 ];
			int *p3 = &player[ 2 ][ 0 ];
			int *p4 = &player[ 3 ][ 0 ];
			int *p5 = &player[ 4 ][ 0 ];
			break;
		case 2:
			int player[ 6 ][ 5 ];
			int *p1 = &player[ 0 ][ 0 ];
			int *p2 = &player[ 1 ][ 0 ];
			int *p3 = &player[ 2 ][ 0 ];
			int *p4 = &player[ 3 ][ 0 ];
			int *p5 = &player[ 4 ][ 0 ];
			int *p6 = &player[ 5 ][ 0 ];
			break;
		default:
			cout << "Incorrect";
	}

	for ( int i = 0; i < number; i++ )
	{
		for ( int j = 0; j < 5; j++ )
			players[ i ][ j ] = 1;
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

void DeckOfCards::dealP()
{
	// инициализировать массив мастей
	static const char *suit[ 4 ] = { "Hearts", "Diamonds", "Clubs", "Sprades" };	
	// инициализировать массив номиналов
	static const char *face[ 13 ] =
		{ "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight",
		"Nine", "Ten", "Jack", "Queen", "King" };
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


















