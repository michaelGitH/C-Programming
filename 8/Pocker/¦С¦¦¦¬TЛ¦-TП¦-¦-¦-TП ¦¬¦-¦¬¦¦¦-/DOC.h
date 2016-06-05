// Определение класса DeckOfCards, представляющего
// колоду игральных карт.

class DeckOfCards
{
public:
	DeckOfCards(); //конструктор инициализирует колоду
	void shuffle(); // тасует карты в колоде
	void deal(); // сдает карты
	void deals();
	int combo ( int [][ 5 ], int [], int[] );
	void change ( int p[], int *n );
	int play ( int[], int[] );
private:
	int deck[ 4 ][ 13 ]; // представляет колоду карт
	int player1[ 5 ];
	int player2[ 5 ];
	int number;
}; // конец класса DeckOfCards
