//m.cpp Тараканов М.А. 23.09.2015 18.57
//исполняющий файл, использующий заголовочный файл h#

#include <iostream>
using std::cout;
using std::cin;

#include "h.h"

int main()
{
	GradeBook gradeBook1( "CS101 C++ Programming" );
	GradeBook gradeBook2( "CS102 C++ data strecturies" );

	cout << "Исходное название журнала: " << gradeBook1.getCourseName()
		  << endl;
	cout << "Исходное название журнала: " << gradeBook2.getCourseName()
		  << endl;

	return 0;
}
