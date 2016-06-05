// Averages.cpp Тараканов Михаил. 28.09.2015 12:51
// Создать GradeBook и вызвать его функцию determineClassAverage.
#include "GradeBook.h"

int main()
{
	// создать объект myGradeBook класса GradeBook
	//и передать конструктору название курса и имя предподавателя
	GradeBook myGradeBook ( "CS101 C++ Programming", "mr. Mihail Tarakanov" );
	
	myGradeBook.displayMessage(); // вывести приветствие
	myGradeBook.determineClassAverage(); // найти среднее 10 оценок

	return 0;
}

