#pragma warning(disable:4996)
#include<iostream>
using std::cout;
using std::endl;

#include<cstring>
using std::strlen;
using std::strcpy;

#include "Employee.h"

// определить и инициализировать статический элемент данных 
int Employee::count = 0;

// определить статическую элемент-функцию, возвращающую число 
// созданных объектов Employee (объ€влена static в Employee.h) 
int Employee::getCount() {
	return count;
}

// конструктор динамически выдел€ет пам€ть дл€ имени и фамилии 
//и вызывает strcpy дл€ копировани€ имени и фамилии в объект 
Employee::Employee(const char* const first, const char* const last) {
	firstName = new char[strlen(first) + 1];
	strcpy(firstName, first);

	lastName = new char[strlen(last) + 1];
	strcpy(lastName, last);

	count++; // увеличить статический счетчик служащих 

	cout << "Employee constructor for " << firstName << ' ' <<
		lastName << " called." << endl;
}

// деструктор освобождает динамически выделенную пам€ть 
Employee::~Employee() {
	cout << "Employee destructor called for " << firstName << ' ' <<
		lastName << "." << endl;
	delete [] firstName;
	delete [] lastName;
	count--;
}

// возвратить им€ служащего 
const char *Employee::getFirstName() const {
	// const перед возвращаемым типом не дает клиенту модифицировать 
	// закрытые данные; клиент должен скопировать строку, прежде чем 
	// деструктор освободит пам€ть и указатель станет неопределенным 
	return firstName;
}

// возвратить фамилию служащего 
const char *Employee::getLastName() const {
	return lastName;
}

