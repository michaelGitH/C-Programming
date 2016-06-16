#include<iostream>
using std::cout;
using std::endl;

#include "Employee.h"
#include "Date.h"

int main() {
	long d = 205;
	Date date1( d , 1949 );
	Date date2(3, 12, 1988);
	Date date3("November", 15, 1992);

	date1.print();
	date1.print1();
	date1.print2();
	cout << endl;
	date2.fullPrint();
	cout << endl;
	date3.fullPrint();
	
	system("pause");
	return 0;
}
