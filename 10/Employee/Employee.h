#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
public:
	Employee(const char* const, const char* const);
	~Employee();
	const char *getFirstName() const; // возвратить имя 
	const char *getLastName() const; // возвратить фамилию 

	// статическая элемент-функция 
	static int getCount(); // возвратить число созданных объектов 
private:
	char *firstName;
	char *lastName;

	// static data 
	static int count; // число созданных объектов 
};

#endif
