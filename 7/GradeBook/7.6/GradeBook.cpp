// GradeBook.cpp Тараканов М.А 24.09.2015 11:58
// Определения элемент-функций GradeBook. Файл содержит
// реализацию функций, прототипы которых объявлены в GradeBook.h.
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::fixed;

#include <iomanip>
using std::setw;
using std::setprecision;

#include "GradeBook.h" // включить определение класса GradeBook

#include <stdio.h>

// конструктор инициализирует courseName переданной строкой;
// инициализирует элементы данных - счетчики оценок - нулями
GradeBook::GradeBook( string name, const int gradesArray[] )
{
	setCourseName( name ); // инициализировать вызовом set-функции
	// копировать оценки из gradeArray в элемент данных grades
	for ( int student = 0; student < students; student++ )
		grades[ student ] = gradesArray[ student ];
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

// произвести над данными различные операции
void GradeBook::processGrades()
{
	// вывести массив оценок
	outputGrades();

	// вызвать функции getMinimum и getMaximum
	cout << "Lowest grade is " << getMinimum()
		<< "\nHighest grade is " << getMaximum() << endl;

	// вызвать outputBarChart для печати диаграммы распределения
	outputBarChart();
} // конец функции processGrades

// найти минимальную оценку
int GradeBook::getMinimum()
{
	int lowGrade = 100;
	// цикл по массиву grades
	for ( int student = 0; student < students; student++ )
	{
		// если текущая оценка меньше lowGrade, присвоить ее lowGrade
		if ( grades[ student ] < lowGrade )
				lowGrade = grades[ student ];
		}
	}
	return lowGrade;	
}

int GradeBook::getMaximum()
{
	int highGrade = 0;
	for ( int student = 0; student < students; student++ )
	{
		if ( grades[ student ] > highGrade )
			highGrade = grades[ student ];
	}
	return highGrade;	
}

// определить среднюю оценку за экзамен
double GradeBook::getAverage( const int setOfGrades[], const int grades )
{
	int total = 0;
	for ( int grade = 0; grade < grades; grade++ )
		total += setOfGrades[ grade ];
	return static_cast< double >( total ) / grades;
} // конец функции getAverage

	// вывести столбцовую диаграмму, показывающую распределение оценок
	void GradeBook::outputBarChart()
	{
		cout << "\nOverall grade distribution:" << endl;
		// хранит частоты для каждого из диапазонов по 10 оценок
		const int frequencySize = 11;
		int frequency[ frequencySize ] = { 0 };
		// для каждой оценки увеличить соответствующую частоту
		for ( int grade = 0; grade < students; grade++ )
			for ( int test = 0; test < tests; test++ )
				++frequency[ grades[ grade ][ test ] / 10 ];
		// для каждой частоты вывести столбец диаграммы
		for ( int count = 0; count < frequencySize; count++ )
		{
			if ( count == 0 )
				cout << "  0-9: ";
			else if ( count == 10 )
				cout << "  100: ";
			else
				cout << count * 10 << "-" << count * 10 + 9 << ": ";

			for ( int stars = 0; stars < frequency[ count ]; stars++ )
				cout << "*";
			cout << endl;
		} // конец внешнего for
	} // конец функции outputBarChart

	// вывести содержимое массива оценок
	void GradeBook::outputGrades()
	{
		cout << "\nThe grades are:\n\n";
		cout << " 	          "; // выровнять заголовки колонок
		// создать заголовки колонок для каждой из контрольных
		for ( int test = 0; test < tests; test++ )
			cout << "test " << test + 1 << "  ";
		cout << "Average" << endl; // заголовок для средних оценок
	
		// создать строки/столбцы текста, представляющие массив grades
		for ( int student = 0; student < students; student++ )
		{
			cout << "Student " << setw( 2 ) << student + 1 << ": ";
			double average;
			// вывести оценки студента
			for ( int test = 0; test < tests; test++ )
				cout << setw( 8 ) << grades[ student ][ test ];
			// вызвать getAverage для получения средней оценки студента;
			// передать в аргументах строку оценок и число контрольных
			average = getAverage( grades[ student ], tests );
			cout << setw( 11 ) << setprecision( 2 ) << fixed << average << endl;
		}
	}
	
		
	

























