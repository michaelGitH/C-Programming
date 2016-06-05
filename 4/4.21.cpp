// Упражнение 4.22: ех04_22.срр
// Что печатает эта программа?
#include <iostream>
using std::cout;
using std::endl;

int main()
{
 	int row =10; // инициализировать row
 	int column; // объявить column

 	while ( row >= 1 ) // цикл, пока row не станет меньше 1
 	{
 		column = 1; // установить в начале итерации column равной 1

 		while ( column <= 10 ) // повторить 10 раз
 		{
 			cout << ( row % 2 ? "<" : ">" ); // вывод
 			column++; // увеличить column
 		} // конец внутреннего while

 		row--; // уменьшить row
 		cout << endl; // начать новую строку вывода
 	} // конец внешнего while

 	return 0; // показывает успешное завершение
} // конец main
