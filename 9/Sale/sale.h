// sale.h
// Определение класса Salesperson.
// Элемент-функции определяются в Salesperson.срр.
#ifndef SALESP_H
#define SALESP_H

class SalesPerson
{
public:
	SalesPerson(); 
	void getSalesFromUser(); // ввести с клавиатуры суммы продаж
	void setSales( int, double ); // установить сумму для # месяца
	void printAnnualSales(); // подытожить и напечатать суммы продаж
private:
	double totalAnnualSales(); // прототип вспомогательной функции
	double sales[ 12 ]; // 12 сумм месячных продаж
};

#endif

















