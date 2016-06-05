// GradeBook.h Тараканов М.А. 24.09.2015 11:48
// Определение класса GradeBook. Файл представляет собой открытый
// интерфейс GradeBook, не раскрывая реализации элемент-функций
// класса, которые определяются в GradeBook.срр.

#include <string>
using std::string;

// определение класса GradeBook
class GradeBook
{
public:
	// константа - число студентов, сдававших экзамен
	const static int students = 10; // заметьте: public-данные
	const static int tests = 3; // число контрольных
	// конструктор инициализирует название курса и массив оценок
	GradeBook( string, const int[][ tests ] ); 
	void setCourseName( string ); // устанавливает courseName
	string getCourseName(); // получает название курса
	void displayMessage(); // выводит сообщение-приветствие
	void processGrades(); // различные действия над оценками
	int getMinimum(); // найти минимальную оценку за контрольную 
	int getMaximum(); // найти максимальную оценку за контрольную	
	double getAverage( const int[], const int ); // определить среднюю оценку за контрольную
	void outputBarChart(); // вывести диаграмму распределения оценок
	void outputGrades(); // вывести содержимое массива оценок
private:
	string courseName; // название курса для данного GradeBook
	int grades[ students ][ tests ]; // массив оценок студентов
}; // конец класса GradeBook
	
