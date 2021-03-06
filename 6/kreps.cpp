#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <ctime>
using std::time;

#include <cstdlib>
using std::rand;
using std::srand;

#include <iomanip>
using std::setw;

int rollDice(); // бросает кости, вычисляет и выводит сумму

int main()
{
	// перечисление с константами, представляющими состояние игры
	enum Status { CONTINUE, WON, LOST };
	
	int myPoint; // "очко" (игра не выиграна и не проиграна сразу)
	Status gameStatus; // может содержать CONTINUE, WON или LOST

	// засеять генератор случайных чисел текущим временем
	srand( time( 0 ) );

	int sumOfDice = rollDice(); // Первый бросок костей
	
	// определить по первому броску состояние игры и "очко"
	switch ( sumOfDice )
	{
		case 7: // выигрыш - 7 при первом броске
		case 11: // выигрыш - 11 при первом броске
			gameStatus = WON;
			break;
		case 2: // проигрыш - 2 при первом броске
		case 3: // проигрыш - 3 при первом броске
		case 12: // проигрыш - 12 при первом броске
			gameStatus = LOST;
			break;
		default: // не выигрыш и не проигрыш, запомнить очко
			gameStatus = CONTINUE; // игра не окончена
			myPoint = sumOfDice; // запомнить пункт
			cout << "Point is " << myPoint << endl;
	}

	// пока игра не закончена
	while ( gameStatus == CONTINUE ) // не WON или LOST
	{
		sumOfDice = rollDice(); // бросить кости снова

		// determine game status
		if ( sumOfDice == myPoint ) // выигрыш броском очка
			gameStatus = WON;
		else if ( sumOfDice == 7 ) // проигрыш броском 7
			gameStatus = LOST;
	}

	// вывести сообщение о выигрыше или проигрыше
	if ( gameStatus == WON )
		cout << "Player wins" << endl;
	else
		cout << "Player loses" << endl;

	return 0;
}

// бросить кости, вычислить сумму и показать результаты
int rollDice()
{
	// получить случайные значения для костей
	int die1 = 1 + rand() % 6; // бросок первой кости
	int die2 = 1 + rand() % 6; // бросок второй кости

	int sum = die1 + die2; // вычислить сумму костей

	// показать результаты данного броска
	cout << "Player rolled " << die1 << " + " << die2
	<< " = " << sum << endl;
	return sum; // возвратить сумму костей
}






















