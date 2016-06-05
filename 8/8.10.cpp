#include<iostream>
#include<iomanip>
using namespace std;

//Выполните следующие задания, написав для каждого по одному оператору. 
//Считайте, что переменные value1 и value2 типа long определены и переменной
//value1 присвоено значение 200000.

int main()
{
	long value1 = 200000, value2;
//a) Объявите указатель lPtr на объект данных типа long.
	long *lPtr;
//b) Присвойте значение адреса переменной value1 указателю lPtr.
	lPtr = &value1;
//c) Выведите значение объекта, на который ссылается указатель lPtr.
	cout << *lPtr << endl;
//d) Присвойте значение объекта, на который ссылается lPtr, переменной value2.
	value2 = *lPtr;
//e) Выведите значение value2.
	cout << value2 << endl;
//f) Выведите адрес valuel.
	cout << &value1 << endl;
//g) Выведите значение адреса, находящееся в lPtr. Совпадает ли выведенное 
//значение с адресом valuel?
	cout << lPtr << endl;
// Yes.

	return 0;
}
