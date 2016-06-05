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


void DeckOfCards::shuffleAndDeal()
{
	// инициализировать массив мастей
	static const char *suit[ 4 ] = { "Hearts", "Diamonds", "Clubs", "Sprades" };
	
	// инициализировать массив номиналов
	static const char *face[ 13 ] =
		{ "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight",
		"Nine", "Ten", "Jack", "Queen", "King" };
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

	int *copy = &deck[ 0 ][ 0 ];
	for( int card = 1; card <= 52; card++ )
		for ( int i = 0; i < 52; i++ )
			if ( *( copy + i ) == card )
				cout << setw( 5 ) << right << face[ i % 13 ] << " of "
					  << setw( 8 ) << left << suit[ i / 13 ] 
					  << ( card % 2 == 0 ? '\n' : '\t' );
			
}


// сдать карты
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
					row = 4;
					column = 13;
				}
			}
	}

	cout << endl;
}


















