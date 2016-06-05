// GradeBook.cpp Тараканов М.А 24.09.2015 11:58
// Определения элемент-функций GradeBook. Файл содержит
// реализацию функций, прототипы которых объявлены в GradeBook.h.
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "GradeBook.h" // включить определение класса GradeBook

#include <stdio.h>

// конструктор инициализирует courseName переданной строкой;
// инициализирует элементы данных - счетчики оценок - нулями
GradeBook::GradeBook( string name)
{
setCourseName( name ); // инициализировать вызовом set-функции
maximumGrade = 0;
} // конец конструктора GradeBook

	// функция для установки названия курса
	// гарантирует, что название курса содержит не более 25 символов
	void GradeBook::setCourseName( string name )
	{
	if( name.length() <= 25 ) // если не более 25 символов
		courseName = name; // сохранить название курса в объекте
	else // если более 25 символов
		{
		// записать в courseName первые 25 символов параметра name
		courseName = name.substr( 0, 25 ); // начать с 0, длина 25
		cout << "Name \"" << name << "\" exceeds maximum length.\n"
			 "Limiting courseName to first 25 characters.\n" << endl;
		}//конец if...else
	}//Конец setCourseName

	// функция для получения названия курса
	string GradeBook::getCourseName()
	{
	return courseName; //возвратить courseName объекта
	}

	// вывести сообщение-приветствие пользователю GradeBook
	void GradeBook::displayMessage()
	{
	// вызвать getCourseName для получения courseName
	cout << "Wellcome to the grade book for\n" << getCourseName()
	  	  << "!" << endl;
	}

	// ввести произвольное число оценок; обновить счетчик оценок
	void GradeBook::inputGrades()
	{
		int grade1;
		int grade2;
		int grade3;

		cout << "Enter three integer grades: ";
		cin >> grade1 >> grade2>> grade3;

		// сохранить максимум в элементе maximumGrade;
		maximumGrade = maximum( grade1, grade2, grade3 );
	} // конец функции inputGrades

	// возвращает наибольший из трех своих параметров
	int GradeBook::maximum( int x, int y, int z )
	{
		int maximumValue = x; // предположить, что х - наибольший
		if ( y >= maximumValue ) // определить, не является ли у большим maximumValue
			maximumValue = y; //сделать у новым maximumValue
		if ( z >= maximumValue )
			maximumValue = z;
		return maximumValue;
	} // конец функции maximum

	// вывести отчет по оценкам, введенным пользователем
	void GradeBook::displayGradeReport()
	{
		// вывести максимум введенных оценок
		cout << "Maximum of grades entered: " << maximumGrade << endl;		
	} // конец функции displayGradeReport
 
	

























