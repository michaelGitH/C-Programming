// Определение класса DeckOfCards, представляющего
// колоду игральных карт.

class DeckOfCards
{
public:
	DeckOfCards(); //конструктор инициализирует колоду
	void shuffle(); // тасует карты в колоде
	void deal(); // сдает карты
	void shuffleAndDeal();
private:
	int deck[ 4 ][ 13 ]; // представляет колоду карт
}; // конец класса DeckOfCards
