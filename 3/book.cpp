// book.cpp Тараканов Михаил Александрович 23.09.2015 12:30
// Создание нескольких объектов класса GradeBook и использование
// конструктора GradeBook для спецификации названия курса
// при создании каждого из объектов GradeBook.

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

class GradeBook
{
public:
	// конструктор инициализирует courseName переданной строкой
	GradeBook( string name )
	{
	setCourseName( name );// инициализировать вызовом set-функции
	} // конец конструктора GradeBook

	// функция для установки названия курса
	void setCourseName( string name )
	{
	courseName = name; // сохранить название курса в объекте
	}

	// функция для получения названия курса
	string getCourseName()
	{
	return courseName; //возвратить courseName объекта
	}

	// вывести сообщение-приветствие пользователю GradeBook
	void displayMessage()
	{
	cout << "Welcome to the grade book for\n"
		  << getCourseName() << "!" << endl;
	}

private:
	string courseName; // название курса для данного GradeBook
};

int main()
{
	// создать два объекта GradeBook
	GradeBook myGradeBook1( "CS101 C++ programming" );
	GradeBook myGradeBook2( "C++ data scripting" );

	// вывести исходное значение courseName для каждого GradeBook
	cout << "gradeBook1 created for: " << myGradeBook1.getCourseName();
	cout << "\ngradeBook2 created for: " << myGradeBook2.getCourseName()
		  << endl;

	return 0;
}






