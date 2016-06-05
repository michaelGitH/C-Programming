// main.cpp Тараканов М.А. 24.09.2015 12:24
// Демонстрация класса GradeBook после отделения
// его интерфейса от реализации.
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" // включить определение класса GradeBook

int main()
{
	// создать два объекта GradeBook;
   // исходное имя курса для gradeBookl слишком длинное
	GradeBook gradeBook1 ( "CS101 Introduction to Programming in C++", "Mr. Mihail Tarakanov" );
	GradeBook gradeBook2 ( "CS102 C++ Data Structures", "Ms. Julia Kubashevskaya" );

	// вывести исходное значение courseName для каждого GradeBook
	cout << "gradeBook1 created for: " << gradeBook1.getCourseName()
		  << "\npresented by: " << gradeBook1.getTeacherName()
		  << endl;
	cout << "gradeBook2 created for: " << gradeBook2.getCourseName()
		  << "\npresented by: " << gradeBook2.getTeacherName()
		  << endl;

	// модифицировать courseName для gradeBook1 (корректной строкой)
	gradeBook1.setCourseName( "CS101 C++ Programming" );

	// вывести courseName каждого GradeBook
	cout << "\ngradeBook1's course name is: " << gradeBook1.getCourseName()
		  << "\ngradeBook2's course name is: " << gradeBook2.getCourseName()
		  << endl << endl;

	gradeBook1.displayMessage();
	cout << endl;
	gradeBook2.displayMessage();

	return 0;
}

