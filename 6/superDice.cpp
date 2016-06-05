#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;

int main()
{
	int frequency1 = 0; // счетчик выброшенных 1
	int frequency2 = 0;
	int frequency3 = 0;
	int frequency4 = 0;
	int frequency5 = 0;
	int frequency6 = 0;

	int face; // хранит последнее выброшенное значение

	// подытожить результаты 6 000 000 бросаний кости
	for ( int roll = 1; roll <= 6000000; roll++ )
	{
		face = 1 + rand() % 6; // случайное число от 1 до 6
		
		// определить значение face ( 1-6) и увеличить нужный счетчик
		switch ( face )
		{
			case 1:
				frequency1++;
				break;
			case 2:
				frequency2++;
				break;
			case 3:
				frequency3++;
				break;
			case 4:
				frequency4++;
				break;
			case 5:
				frequency5++;
				break;
			case 6:
				frequency6++;
				break;
			default:
				cout << "Program should never get here!";
		}
	}
	cout << setw( 13 ) << "Frequency" << endl; // заголовки
	cout << "	1" << setw( 13 ) << frequency1
	     << "\n 	2" << setw( 13 ) << frequency2
	     << "\n 	3" << setw( 13 ) << frequency3
	     << "\n 	4" << setw( 13 ) << frequency4
	     << "\n 	5" << setw( 13 ) << frequency5
	     << "\n 	6" << setw( 13 ) << frequency6 << endl;


	return 0;
}