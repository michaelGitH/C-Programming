#pragma warning(disable:4996)
#include<iostream>
using std::cerr;
using std::cout;
using std::endl;

#include<iomanip>
using std::setw;

#include<cstring>
using std::strcmp;
using std::strcpy;
using std::strcat;

#include<cstdlib>
using std::exit;

#include"String.h"

// конструктор преобразовани€ (и по умолчанию) char* в String 
String::String(const char *s)
	: length( ( s != 0 ) ? strlen( s ) : 0 )
{
	cout << "Conversion ( and default ) constructor: " << s << endl;
	setString(s); // call utility function 
}

// конструктор копии 
String::String(const String &copy)
	: length(copy.length)
{
	cout << "Copy constructor: " << copy.sPtr << endl;
	setString(copy.sPtr); // call utility function
}

// деструктор 
String::~String()
{
	cout << "Destructor: " << sPtr << endl;
	delete[] sPtr; // освободить строку, представленную указателем 
}

// перегруженна€ операци€ =; предотвращает самоприсваивание 
const String &String::operator=(const String &right) {
	cout << "operator= called" << endl;
	if (&right != this) {
		delete[] sPtr;
		length = right.length;
		setString(right.sPtr); // вызвать вспомогательную функцию 
	}
	else
		cout << "Attemted assigment of a String to itself" << endl;

	return *this;
}

const String &String::operator+=(const String &right) {
	size_t newLength = length + right.length; // нова€ длина 
	char *tempPtr = new char[newLength + 1]; // выделить пам€ть 

	strcpy(tempPtr, sPtr); // копировать sPtr 
	strcpy(tempPtr + length, right.sPtr); // копировать right.sPtr 
	delete[] sPtr; // освободить старый массив 
	sPtr = tempPtr; // присвоить sPtr новый массив 
	length = newLength; // присвоить length новую длину 
	return *this;
}

// ѕуста ли строка? 
bool String::operator!() const {
	return length == 0;
}

// –авна ли данна€ строка правой строке? 
bool String::operator==(const String &right) const {
	return strcmp(sPtr, right.sPtr) == 0;
}

// ћеньше ли данна€ строка правой строке? 
bool String::operator<(const String &right) const {
	return strcmp(sPtr, right.sPtr) < 0;
}

// возвратить ссылку на символ строки как модифицируемое lvalue 
char &String::operator[](int subscript) {
	// проверить на выход индекса из диапазона 
	if (subscript < 0 || subscript >= length) {
		cerr << "Error: Subscript " << subscript
			<< "out of range!" << endl;
		exit( 1 );
	}
	return sPtr[subscript];
}

// возвратить ссылку на символ строки как rvalue 
char String::operator[](int subscript) const {
	// проверить на выход индекса из диапазона 
	if (subscript < 0 || subscript >= length) {
		cerr << "Error: Subscript " << subscript
			<< "out of range!" << endl;
		exit(1);
	}
	return sPtr[subscript];
}

// возвратить подстроку, начинающуюс€ с index и длиной subLength 
String String::operator()(int index, int sublength) const {
	// если индекс вне диапазона или длина строки < 0, 
	// возвратить пустоцй объект String 
	if (index < 0 || index >= length || sublength < 0)
		return "";

	// определить длину подстроки 
	int len;

	if (sublength == 0 || index + sublength > length)
		len = length - index;
	else
		len = sublength;

	// выделить временный массив дл€ подстроки 
	//и завершающего нулевого символа 
	char *tempPtr = new char[len + 1];

	// копировать строку в массив и завершить строку 
	strncpy(tempPtr, &sPtr[index], len);
	tempPtr[len] = '\0';

	// создать временный объект String, содержащий подстроку 
	String tempString(tempPtr);
	delete[] tempPtr;
	return tempString; // возвратить копию временного объекта String 
}

// возвратить длину строки 
int String::getLength() const {
	return length;
}

// вспомогательна€ функци€, вызываема€ конструкторами и operator= 
void String::setString(const char *string2) {
	sPtr = new char[length + 1]; // выделить пам€ть 
	if (string2 != 0) // если string2 - не NULL, копировать 	
		strcpy(sPtr, string2); // литерал в объект 
	else // если string2 - NULL, сделать this пустой строкой 
		sPtr[0] = '\0'; // пуста€ строка
}

// перегруженна€ операци€ вывода 
ostream &operator<<(ostream &output, const String &s) {
	output << s.sPtr;
	return output; // разрешает каскадирование 
}

// перегруженна€ операци€ ввода 
istream &operator >> (istream &input, String &s) {
	char temp[100]; // буфер дл€ хранени€ ввода 
	input >> setw(100) >> temp;
	s = temp; // использовать операцию присваивани€ класса String 
	return input; // разрешает каскадирование 
}

