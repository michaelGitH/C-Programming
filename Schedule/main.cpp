#include"Employee.h"
#include<windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int size = 30, hours = 167;
	Employee Mihail(hours, size); /*Evgeny(hours, size),
		Dmitry(hours, size), Pavel(hours, size);*/

	int i;

	cout << "\nГрафик по умолчанию:\n";
	cout << Mihail.get10() << ' ' << Mihail.get11() << endl;
	cout << Mihail << endl;

	Mihail.workSch(true, 31, 31);
	//Evgeny.workSch(30, 31);
	//Dmitry.workSch(31, 31);
	//Pavel.workSch(30, 31);

	cout << "\nГрафик после изменений:\n";
	cout << left << setw(10) << "Михаил: " << Mihail << endl;
	//cout << endl;
	//cout << "\nГрафик после изменений:\n";
	//cout << left << setw(10) << "Евгений: " << Evgeny << endl << setw(10) <<  "Павел: " << Pavel
	//	<< endl << setw(10) << "Дмитрий: " << Dmitry << endl << setw(10) << "Михаил: " << Mihail << endl;


	cin.clear();
	cin.get();
	cin.get();
	return 0;
}