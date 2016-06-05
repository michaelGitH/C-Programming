#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;

#include <ctime>
using std::time;

#include <cstdlib>
using std::rand;
using std::srand;

#include <iomanip>
using std::setw;
using std::setprecision;

int rollDice(); // бросает кости, вычисляет и выводит сумму

int main()
{
	// перечисление с константами, представляющими состояние игры
	enum Status { CONTINUE, WON, LOST };
	
	int myPoint; // "очко" (игра не выиграна и не проиграна сразу)
	Status gameStatus; // может содержать CONTINUE, WON или LOST

	// засеять генератор случайных чисел текущим временем
	srand( time( 0 ) );

	const int size = 22;
	int win[ size ] = { 0 };
	int los[ size ] = { 0 };
	
	for ( int count = 0; count < 1000; count++ )
	{
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

	int counter = 1;
	// пока игра не закончена
	while ( gameStatus == CONTINUE ) // не WON или LOST
	{
		sumOfDice = rollDice(); // бросить кости снова

		// determine game status
		if ( sumOfDice == myPoint ) // выигрыш броском очка
			gameStatus = WON;
		else if ( sumOfDice == 7 ) // проигрыш броском 7
			gameStatus = LOST;
		counter++;
	}

	// вывести сообщение о выигрыше или проигрыше
	if ( gameStatus == WON )
	{
		cout << "Player wins" << endl;
		if ( counter <= 20 )
			win[ counter ]++;
		else
			win[ 21 ]++;
	}
	else
	{
		cout << "Player loses" << endl;
		if ( counter <= 20 )
			los[ counter ]++;
		else
			los[ 21 ]++;
	}
	}

	for ( int count = 1; count < 21; count++ )
		cout << "Won the " << count << " time is " << win[ count ] << endl;
	cout << "Won the more 20 times is " << win[ 21 ] << endl << endl;
	for ( int count = 1; count < 21; count++ )
		cout << "Lost the " << count << " time is " << los[ count ] << endl;
	cout << "Lost the more 20 times is " << los[ 21 ] << endl << endl;
	int tcw = 0;


	for ( int count = 1; count <= 21; count++ )
		tcw += win[ count ];
	cout << "Total win is " << tcw << endl;
	int tcl = 0;
	for ( int count = 1; count <= 21; count++ )
		tcl += los[ count ];
	cout << "Total los is " << tcl << endl;
			
	
	double total = 0, totalWin = 0;
	for ( int count = 0; count < size; count++ )
	{
		totalWin += win[ count ];
		total += ( win[ count ] + los[ count ] );
	}
	double chance = static_cast< double >( totalWin ) / static_cast< double >( total ) * 100;
	cout << fixed << setprecision( 2 ) << "Chances to win are " << chance << " percents." << endl;
		
	double average = 0;

		

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















