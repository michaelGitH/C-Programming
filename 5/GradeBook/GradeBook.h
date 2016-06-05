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
private:
	string courseName; // название курса для данного GradeBook
	int aCount; // число оценок А
	int bCount; // число оценок В
	int cCount; // число оценок С
	int dCount; // число оценок D
	int fCount; // число оценок F
	double average;
}; // конец класса GradeBook
	
