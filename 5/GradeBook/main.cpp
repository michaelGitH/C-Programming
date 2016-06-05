// Создать объект GradeBook, ввести оценки и вывести отчет.
#include "GradeBook.h" // включить определение класса GradeBook

int main()
{
	// создать объект GradeBook
	GradeBook myGradeBook ( "CS101 C++ Programming" );
	
	myGradeBook.displayMessage(); // вывести приветственное сообщение
	myGradeBook.inputGrades(); // прочитать вводимые оценки
	myGradeBook.displayGradeReport(); // вывести отчет по оценкам
	
	return 0;
}
	
