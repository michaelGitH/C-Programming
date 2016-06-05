// Определение класса DeckOfCards, представляющего
// колоду игральных карт.

class DeckOfCards
{
public:
	DeckOfCards(); //конструктор инициализирует колоду
	void shuffle(); // тасует карты в колоде
	void show();// cдает по 5 карт для игры в покер
	void deal(); // сдает карты
	void pock ( int [][ 5 ], int[] );
	void flash ( int[][ 5 ], int[] );
	int oldest ( int x[], int y[] );
private:
	int nominal1[ 6 ];
	int nominal2[ 6 ];
	int player1[ 5 ];
	int player2[ 5 ];
	int deck[ 4 ][ 13 ]; // представляет колоду карт
}; // конец класса DeckOfCards
