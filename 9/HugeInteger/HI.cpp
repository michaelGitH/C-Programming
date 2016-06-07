#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<cstring>
using std::strlen;

#include "Huge.h"

HugeInteger::HugeInteger()
{
	hi[0] = 0;
	stop = 1;
}

void HugeInteger::input()
{
	char hic[41];
	cin >> hic;
	for (stop = 0; (hic[stop] != '\0' && stop < 41); stop++);
	if (stop >= 41 && hic[stop] != '\0') {
		cout << "Число не должно превышать 40 знаков, попробуйте еще раз!" << endl;
		input();
	}
	else {
		for (int j = 0; j < stop; j++) {
			hi[j] = static_cast<int>(hic[j]) - 48;
		}
	}
}

void HugeInteger::output() {
	for (int i = 0; i < stop; i++) {
		cout << hi[i];
	}
	cout << endl;
}

void HugeInteger::add( char x[] ) {
	int duble[41];
	for (int i = 0; i < stop; i++) {
		duble[i] = hi[i];
	}

	int count = strlen(x);
	cout << count << " " << x[count] << endl;

	if (count > 40) {
		cout << "Попытка прибавить недопустимое значение!" << endl;
	}
	else {
		for (int i = 1; i < count + 1; i++) {
			cout << duble[stop - i] << " + " << static_cast<int>(x[count - i]) - 48;
			duble[stop - i] += static_cast<int>(x[count - i]) - 48;
			cout << " = " << duble[stop - i] << endl;
			if (duble[stop - i] >= 10) {
				duble[stop - i] -= 10;
				duble[stop - i - 1]++;
			}		
			if (duble[0] > 9) {
				if (stop >= 41) {
					cout << "Ошибка!Полученная сумма превышает допустимое значение!" << endl;
				}
				else {
					stop++;
					for (int i = stop - 2; i > 0; i--) {
						duble[i + 1] = duble[ i ];
					}
					duble[0] = 1;
				}
			}
		}
		for (int i = 0; i < stop; i++)
			hi[i] = duble[i];
		for (int i = 0; i < stop; i++)
			cout << hi[i] << endl;
	}
}