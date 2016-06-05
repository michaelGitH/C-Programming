//setget.cpp Тараканов Михаил Александрович 22.09.2015 16:22
//создание класса GradeBook с функциями setCourseName и getCourseName
//И тестирование программы, использующей класс GradeBook
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

class GradeBook
{
	public:
	// функция устанавливающая название курса
	void setCourseName ( string name )
	{
	   courseName = name;// сохранить название курса в объекте
	}  // конец функции setCourseName

	// функция, получающая название курса
	string getCourseName()
	{
	   return courseName;// возвратить courseName объекта
	} // конец функции getCourseName
	
	// функция, выводящая сообщение-приветствие
	void displayMessage()
	{
	   // этот оператор вызывает getCourseName, чтобы получить
	   // название курса, представленного данным GradeBook   
	   cout << "Welcome to the grade book for\n" << getCourseName()
	        << "!" << endl;
	} // конец функции displayMessage

	private:
	string courseName; // название курса для данного GradeBook
}; // конец класса GradeBook

// функция main начинает исполнение программы
int main()
{
	string nameOfCourse; // строка для хранения названия курса
	GradeBook myGradeBook; // создать GradeBook с именем myGradeBook

	// вывести исходное значение courseName
	cout << "Initial course name is: " << myGradeBook.getCourseName()
		  << endl;

	// запросить, ввести и установить название курса
	cout << "Please enter the course name: " << endl;
	getline( cin, nameOfCourse ); // прочитать название с пробелами
	myGradeBook.setCourseName( nameOfCourse ); // установить название
	cout << endl; // выводит пустую строку

	myGradeBook.displayMessage(); // вывести новое название курса
	return 0; // показывает успешное завершение
} // конец main



	
	












