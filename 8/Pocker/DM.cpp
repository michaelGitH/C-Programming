// Программа тасования и сдачи карт.
#include"DOC.h"

int main()
{
	DeckOfCards deckOfCards; // создать объект DeckOfCards

	deckOfCards.shuffle(); // перетасовать карты колоды
	deckOfCards.show(); 
	return 0;
}

