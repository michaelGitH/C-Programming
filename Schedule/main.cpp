#include"Employee.h"
#include<windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int size = 30, hours = 167;
	Employee Mihail(hours, size); /*Evgeny(hours, size),
		Dmitry(hours, size), Pavel(hours, size);*/

	int i;

	cout << "\n������ �� ���������:\n";
	cout << Mihail.get10() << ' ' << Mihail.get11() << endl;
	cout << Mihail << endl;

	Mihail.workSch(true, 31, 31);
	//Evgeny.workSch(30, 31);
	//Dmitry.workSch(31, 31);
	//Pavel.workSch(30, 31);

	cout << "\n������ ����� ���������:\n";
	cout << left << setw(10) << "������: " << Mihail << endl;
	//cout << endl;
	//cout << "\n������ ����� ���������:\n";
	//cout << left << setw(10) << "�������: " << Evgeny << endl << setw(10) <<  "�����: " << Pavel
	//	<< endl << setw(10) << "�������: " << Dmitry << endl << setw(10) << "������: " << Mihail << endl;


	cin.clear();
	cin.get();
	cin.get();
	return 0;
}