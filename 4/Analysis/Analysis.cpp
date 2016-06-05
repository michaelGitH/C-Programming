// Analysis.cpp Тараканов М.А. 28.09.2015 15:38
// Определения элемент-функции класса Analysis,
// который анализирует результаты экзаменов.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// включить определение класса Analysis из Analysis.h
#include "Analysis.h"

// обработать экзаменационные результаты 10 студентов
void Analysis::processExamResults()
{
	// инициализация переменных при объявлении
	int passes = 0; // число сдавших
	int failures = 0; // число не сдавших
	int studentCounter = 1; // общее число студентов
	int result; // один результат экзамена (1 = сдал, 2 = не сдал)

	// обработать 10 студентов, используя цикл по счетчику
	while ( studentCounter <= 10 )
	{
		// запросить у пользователя и ввести значение
		cout << "Enter result (1 = pass, 2 = fail)";
		cin >> result; // ввести результат

		// if...else, вложенный в while		
		if ( result == 1 )		    // если result равен 1,
			passes = passes + 1;     // увеличить passes;
		else if ( result == 2 )		 // в противном случае result не 1,						  
			failures = failures + 1; // поэтому увеличить failures
		else
		{
			cout << "You entered wrong value!" << endl;
			studentCounter--;
		}

		// увеличить studentCounter, чтобы цикл мог закончиться
		studentCounter = studentCounter + 1;
	} // конец while

	// этап завершения; вывести число сдавших и не сдавших
	cout << "Pssed " << passes << "\nFailed " << failures << endl;
	// определить, прошло ли более восьми студентов
	if ( passes > 8 )
		cout << "Raise tuition" << endl;
} // конец функции











