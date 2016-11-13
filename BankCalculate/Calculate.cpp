#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "¬ведите сумму кредита: ";
	double credit; cin >> credit;
	cout << "¬ведите срок кредита в мес€цах: ";
	int time; cin >> time;
	cout << "¬ведите шодовую ставку по кредиту: ";
	double per; cin >> per;
	per /= 100;

	credit = credit*(1 + per*double(time / 12));
	cout << "—умма с переплатой: " << credit << endl;
	

	system("pause");
}