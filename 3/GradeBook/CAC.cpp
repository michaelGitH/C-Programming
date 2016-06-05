// CAC.cpp Тараканов Михаил 28.09.2015 14:08
// Создать GradeBook и вызвать его функцию determinedassAverage.
#include "GradeBook.h"

int main()
{
	// создать объект myGradeBook класса GradeBook
	//и передать конструктору название курса
	GradeBook myGradeBook ( "CSC101 C++ Programming", "Mr. Mihail Tarakanov" );
	
	myGradeBook.displayMessage();
	myGradeBook.determineCAC();

	return 0;
}
