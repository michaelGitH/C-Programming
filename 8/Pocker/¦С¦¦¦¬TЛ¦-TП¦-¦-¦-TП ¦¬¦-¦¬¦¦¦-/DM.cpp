// Программа тасования и сдачи карт.
#include <cstdlib> // Для работы с функцией system()
#include"DOC.h"

int main()
{
	DeckOfCards deckOfCards; // создать объект DeckOfCards
	deckOfCards.shuffle(); // перетасовать карты колоды
	deckOfCards.deals(); // сдать карты колоды
	system("pause");
	return 0;
}

