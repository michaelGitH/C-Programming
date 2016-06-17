#pragma warning(disable: 4996)
#include<iostream>
using std::cout;
using std::endl;
#include<ctime>
using std::ctime;
using std::time;
#include<cstring>
using std::strcmp;

#include "Employee.h"
#include "Date.h"

int main() {
	long d = 205;
	Date date1( d , 1949 );
	Date date2(3, 12, 1988);
	Date date3("November", 15, 1992);
	Date date4('s');

	date1.print();
	date1.print1();
	date1.print2();
	cout << endl;
	date2.fullPrint();
	cout << endl;
	date3.fullPrint();
	cout << endl;
	date4.fullPrint();
	
	system("pause");
	return 0;
}
