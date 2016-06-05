// GradeBook.cpp Тараканов М.А 24.09.2015 11:58
// Определения элемент-функций GradeBook. Файл содержит
// реализацию функций, прототипы которых объявлены в GradeBook.h.
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::fixed; // Гарантирует вывод десятичной точки

#include <iomanip> // параметризованные манипуляторы потока
using std::setprecision; // устанавливает точность вывода чисел

#include "GradeBook.h" // включить определение класса GradeBook

// конструктор инициализирует courseName переданной строкой
GradeBook::GradeBook( string name, string tname )
{
setCourseName( name ); // инициализировать вызовом set-функции
setTeacherName( tname );
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
	  	  << "!\n" "This course is present by: " << getTeacherName()
		  << endl;
	}


	void GradeBook::setTeacherName( string name )
	{
	teacherName = name;
	}

	string GradeBook::getTeacherName()
	{
	return teacherName;
	}

	// определить среднее по группе, исходя из 10 введенных оценок
	void GradeBook::determineClassAverage()
	{
		int total; // сумма оценок, введенных пользователем
		int gradeCounter; // номер следующей вводимой оценки
		int grade; // значение введенной пользователем оценки
		int average; // средняя оценка

		// этап инициализации
		total = 0; // инициализировать сумму
		gradeCounter = 1; // инициализировать счетцик цикла
	
		// этап обработки
		while ( gradeCounter <= 10 ) // повторять 10 раз
		{
			cout << " Enter grade: "; // запросить ввод
			cin >> grade; // ввести следующую оценку
			total = total + grade; // прибавить оценку к total
			gradeCounter = gradeCounter + 1; // увеличить счетчик на 1
		} // конец while

		// этап завершения
		average = total / 10; // целое деление дает целый результат
		
		// вывести сумму и среднее значение оценок
		cout << "\nTotal of all grades is " << total << endl;
		cout << "Class average is " << average << endl;
	} // Конец фуекции determineClassAverage

	void GradeBook::determineCAC()
	{
		int total; // sum of grades;
		int gradeCounter; // counter of grades
		int grade; // value of grade
		double average; // число с десятичной точкой для среднего

		// этап инициализации
		total = 0; // инициализировать сумму
		gradeCounter = 0; // инициализировать счетцик цикла
	
		// этап обработки
		// запросить ввод и прочитать введенную пользователем оценку
		cout << " Enter grade or -1 to quit: ";
		cin >> grade; // ввести оценку или контрольное значение

		// цикл, пока не будет прочитано контрольное значение
		while ( grade != -1 ) // пока grade не равна -1
		{
			total = total + grade; // прибавить оценку к total
			gradeCounter = gradeCounter + 1; // увеличить счетчик

			// запросить ввод и прочитать следующую оценку пользователя
			cout << " Enter next grade or -1 to quit: " << endl;
			cin >> grade; // ввести оценку или контрольное значение
		} // конец while

		// этап завершения
		if ( gradeCounter != 0)
		{
			// вычислить среднее по всем введенным оценкам
			average = static_cast< double >( total ) / gradeCounter;

			// вывести сумму и среднее (с двумя цифрами точности)
			cout << "\n Total of all " << gradeCounter
				  << " grades is " << total << endl;
			cout << " Class average is : " << setprecision( 2 ) << fixed
				  << average << endl;
		} // конец if
		else // ничего не введено, вывести соответствующее сообщение
		cout << " No grades were entered!" << endl;
	} // конец функции determineCAC

























