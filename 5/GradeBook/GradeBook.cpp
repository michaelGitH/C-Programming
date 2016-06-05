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
aCount = 0; // инициализировать нулем счетчик оценок А
bCount = 0;
cCount = 0;
dCount = 0;
fCount = 0;
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
		int grade;
		cout << "Enter the letter grades." << endl
		 	 << "Enter the EOF character to end input." << endl;

		// цикл, пока пользователь не введет комбинацию для конца файла
		while ( ( grade = cin.get() ) != EOF )
		{
			// определить, какая введена оценка
			switch ( grade ) // оператор switch, вложенный в while
			{
				case 'A':// оценка А в верхнем регистре
				case 'a':// или а в нижнем регистре
					aCount++; // увеличить aCount
					break; // необходим для выхода из switenswitch
			
				case 'B':
				case 'b':
					bCount++;
					break;
		
				case 'C':
				case 'c':
					cCount++;
					break;
	
				case 'D':
				case 'd':
					dCount++;
					break;

				case 'F':
				case 'f':
					fCount++;
					break;

				case '\n': // игнорировать вводимые символы новой строки,
				case '\t': // табуляции
				case ' ': // и пробела
					break; // выход из switch

				default: // перехватывает все остальные символы
					cout << "Incorrect letter grade entered."
						<< "Enter a new grade." << endl;
					break; // не обязателен; выход из switch в любом случае
			} // конец switch
		} // конец while
	} // конец функции inputGrades

	// вывести отчет по оценкам, введенным пользователем
	
	void GradeBook::displayGradeReport()
	{
		// вывести сводку результатов
		cout << "\n\nNumbers of students who received each letter grade:"
			<< "\nA: " << aCount // вывести число оценок А
			<< "\nB: " << bCount 
			<< "\nC: " << cCount 
			<< "\nD: " << dCount
			<< "\nF: " << fCount
			<< endl;

			average = ( ( static_cast< double >( aCount ) * 4 ) + ( static_cast< double >( bCount ) * 3 )
			+ ( static_cast< double >( cCount ) * 2 ) + ( static_cast< double >( dCount ) * 1 )
			+ ( static_cast< double >( fCount ) * 0 ) ) / static_cast< double >( aCount + bCount + cCount + dCount + fCount );
			cout << "Average grade is :" << average << endl;
	} // конец функции displayGradeReport
 
	

























