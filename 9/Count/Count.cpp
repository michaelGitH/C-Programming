// Рис. 9.4: fig09_04.cpp
// Демонстрация операций доступа к элементам . и ->.
#include <iostream>
using std::cout;
using std::endl;

// определение класса Count
class Count
{
public: // открытые данные опасны
// устанавливает значение закрытого элемента данных х
void setX( int value )
{
	x = value;
} // конец функции setX

// печатает значение закрытого элемента данных х
void print()
{
	cout << x << endl;
} // конец функции print

private:
	int x;
}; // конец класса Count

int main()
{
	Count counter; // создать объект counter
	Count *counterPtr = &counter; // создать указатель на counter
	Count &counterRef = counter; // создать ссылку на counterКлассы: часть I


	cout << "Set x to 1 and print using the object's name: ";
	counter.setX( 1 ); // установить элемент данных х в 1
	counter.print(); // вызвать элемент-функцию print

	cout << "Set x to 2 and print using a reference to an object: ";
	counterRef.setX( 2 ); // установить элемент данных х в 2
	counterRef.print(); // вызвать элемент-функцию print

	cout << "Set x to 3 and print using a pointer to an object: ";
	counterPtr->setX( 3 ); // установить элемент данных х в 3
	counterPtr->print(); // вызвать элемент-функцию print
	return 0;
} // конец main
