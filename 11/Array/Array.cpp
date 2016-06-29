#include<iostream>
using std::cerr;
using std::cout;
using std::cin;
using std::endl;

#include<iomanip>
using std::setw;

#include<cstdlib>
using std::exit;

#include"Array.h"

// конструктор Array по умолчанию (размер по умолчанию 10) 
Array::Array(int arraySize)
{
	size = (arraySize > 0 ? arraySize : 10);
	ptr = new int[size]; // выделить пространство для массива 

	for (int i = 0; i < size; i++) 
		ptr[i] = 0; // установить элемент массива-указателя 	
}

// конструктор копии для класса Array; 
// для предотвращения бесконечной рекурсии должен возвращать ссылку 
Array::Array(const Array &arrayToCopy)
	: size(arrayToCopy.size)
{
	ptr = new int[size];
	for (int i = 0; i < size; i++)
		ptr[i] = arrayToCopy.ptr[i]; // копировать в объект 
}

Array::~Array()
{
	delete[] ptr; // освободить пространство массива 
}

// возвратить число элементов Array 
int Array::getSize() const {
	return size;
}

// перегруженная операция присваивания; 
// возвращаемая константа предотвращает: ( al = а2 ) = аЗ 
const Array &Array::operator=(const Array &right) {
	if (&right != this) { // избегать самоприсваивания 
		// для массивов разного размера освободить исходный массив
		//в левой части, затем выделить новый массив для левой части 
		if (size != right.size) {
			delete[] ptr;
			size = right.size;
			ptr = new int[size];
		}
		for (int i = 0; i < size; i++)
			ptr[i] = right.ptr[i];
	}
	return *this; // позволяет писать, например, х = у = z 
}

// определить, равны ли два массива, если равны, 
// возвратить true, в противном случае возвратить false 
bool Array::operator==(const Array &right) const {
	if (size != right.size)
		return false;

	for (int i = 0; i < size; i++)
		if (ptr[i] != right.ptr[i])
			return false;

	return true; // массивы равны 
}

// перегруженная операция индексации для неконстантных массивов; 
// возврат ссылки создает модифицируемое lvalue 
int &Array::operator[](int subscript) {
	// проверить индекс на выход за пределы массива 
	if (subscript < 0 || subscript >= size) {
		cerr << "\nError: Subscript " << subscript <<
			" out of range." << endl;
		exit(1); // завершить программу; индекс вне диапазона 
	}

	return ptr[subscript]; // возврат ссылки 
}

// перегруженная операция индексации для константных массивов; 
// возврат константной ссылки создает rvalue 
int Array::operator[](int subscript) const {
	// проверить индекс на выход за пределы массива 
	if (subscript < 0 || subscript >= size) {
		cerr << "\nError: Subscript " << subscript <<
			" out of range." << endl;
		exit(1); // завершить программу; индекс вне диапазона 
	}
	return ptr[subscript]; // возвращает копию элемента 
}

// перегруженная операция ввода для класса Array; 
// вводит значения для всего массива 
istream &operator >> (istream &input, Array &a) {
	for (int i = 0; i < a.size; i++)
		input >> a.ptr[i];
	return input; // enables cin » x » y; 
}

// перегруженная операция вывода для класса Array 
ostream &operator<<(ostream &output, const Array &a) {
	int i;

	// вывести закрытый массив, адресуемый указателем 
	for (i = 0; i < a.size; i++) {
		output << setw(12) << a.ptr[i];
		if ((i + 1) % 4 == 0)
			output << endl;
	}

	if (i % 4 == 0)
		output << endl;

	return output; // позволяет писать cout « x « y; 
}



