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
	GradeBook( string, string ); // конструктор, инициализирующий courseName
	void setCourseName( string ); // устанавливает courseName
	string getCourseName(); // получает название курса
	void displayMessage(); // выводит сообщение-приветствие

	void setTeacherName( string );
	string getTeacherName();

	void determineClassAverage();// усредняет введенные оценки
	void determineCAC(); // Усреднение оценок с контрольным параметром
private:
	string courseName; // название курса для данного GradeBook
	string teacherName; // Имя предподавателя
}; // конец класса GradeBook
	
