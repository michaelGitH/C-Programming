// Упражнение 4.12: ех04_12.срр
// Что печатает эта программа?
finclude <iostream>
using etd::cout;
using etd::endl;

int main()
{
int у; // обЧивить у
int x = 1; // инициализировать х
int total =0; // инициализировать total

while ( x <= 10 ) // повторить 10 раз
{
 у » x * x; // произвести вычисление
 cout « у « endl; // вывести результат
 total += у; // прибавить у к total
 х++; // увеличить счетчик х
 } // конец while

 cout « "Total is " « total « endl; // display result
 return 0; // показывает успешное завершение
} // конец main
