// Рис. 3.1: fig03_01.cpp
// Определить класс GradeBook с элемент-функцией displayMessage;
// создать объект GradeBook и вызвать его функцию displayMessage.
#include <iostream>
using std::cout;
using std::endl;

// определение класса GradeBook
class GradeBook
{
public:
// функция, выводящая приветствие пользователю GradeBook
void displayMessage()
{
cout << "Welcome to the Grade Book!" << endl;
} // конец функции displayMessage
}; // конец класса GradeBook

// функция main начинает исполнение программы
int main()
{
GradeBook myGradeBook; // создать GradeBook с именем myGradeBook
myGradeBook.displayMessage(); // вызвать displayMessage объекта
return 0; // показывает успешное завершение
} // конец main
