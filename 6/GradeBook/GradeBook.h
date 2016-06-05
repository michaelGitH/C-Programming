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
	GradeBook( string ); // конструктор, инициализирующий courseName
	void setCourseName( string ); // устанавливает courseName
	string getCourseName(); // получает название курса
	void displayMessage(); // выводит сообщение-приветствие
	void inputGrades(); // ввести произвольное число оценок
	void displayGradeReport(); // вывести отчет по введенным оценкам
	int maximum( int, int, int ); // определить максимум из 3 целых
private:
	string courseName; // название курса для данного GradeBook
	int maximumGrade; // максимум из 3 значений
}; // конец класса GradeBook
	
