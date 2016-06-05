// test.cpp
// Демонстрация вспомогательной функции.
// Компилируйте эту программу с Salesperson.срр

// включить определение класса Salesperson из Salesperson.h
#include "sale.h"

int main()
{
	SalesPerson s; // создать объект s класса Salesperson
	
	s.getSalesFromUser(); // обратите внимание на простую структуру;
	s.printAnnualSales(); // в main нет управляющих операторов
	return 0;
}
