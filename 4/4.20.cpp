// Упракжнение 4.21: ех04_21.срр
// Что печатает эта программа?
#include <iostream>
using std::cout;
using std::endl;

int main ()
 {
  	int count = 1; // инициализировать count

  	while ( count <= 10 ) // повторить 10 pad
  	{
  		// вывести строку текста
  		cout << ( count % 2 ? "****" : "++++++++" ) << endl;
  		count++; // увеличить count
  	} // конец while
 
  	return 0; // показывает успешное завершение
} // конец main
