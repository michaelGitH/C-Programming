#pragma once
#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<ctime>
using namespace std;

//srand(time(0));
int N;
int a[100];
int i;
int j, x;


void begin();
void arrays1();
void arrays2();
void arrays3();
void arrays6();
void inversion();
void truncatedAverage();

void begin() {
	N = j = -1;
	while (N < 0)
	{
		cout << "Задайте размер масива(положительное целое): "; cin >> N;
	}
	for (i = 0; i < N; i++)
		a[i] = 1 + rand() % 100;
	cout << "Задан масив:\n";
	for (i = 0; i < N; i++)
		cout << a[i] << ' ';
	cout << endl;
}

void arrays1() {
	begin();

	//Вставить в указанную позицию число и увеличить элементы масива на 1
	while (j < 0 || j > N - 1) {
		cout << "Укажите элемент для вставки от " << 0 << " до "
			<< N - 1 << ": "; cin >> j;
	}
	cout << "Введите число, которое нужно вставить: "; cin >> x;
	//******************************
	/**/a[N++] = a[j], a[j] = x;/**/
								//*****************************
	cout << "Новый масив:\n";
	for (i = 0; i < N; i++)
		cout << a[i] << ' ';
	cout << endl;
}

void arrays2() {
	begin();
	//Определить наличие в масиве заданного значения и его порядквый номер
	cout << "Какое число будем искать в масиве? "; cin >> x;
	//***********************************
	/**/for (i = 0; i < N; ++i)/********/
	/**/	if (a[i] == x) j = i;//break;
	//***********************************
	if(j!=-1) cout << "Число найдено в элементе " << j << endl;
	else cout << "Число не найдено" << endl;
}

void arrays3() {
	begin();
	while (j < 0 || j > N - 1) {
		cout << "Укажите элемент для удаления из масива(от " << 0 << " до "
			<< N - 1 << "): "; cin >> j;
	}
	//Удалить элемент с сохранением порядка
	for (i = j; i < N - 1; ++i)
		a[i] = a[i + 1]; --N;
	cout << "Новый масив:\n";
	for (i = 0; i < N; i++)
		cout << a[i] << ' ';
	cout << endl;
}

void arrays6() {
	begin();
	//Перестановка элементов масива в обратном порядке
	for (i = 0, j = N - 1; i <= N / 2 - 1; ++i, --j) {
		a[i] = a[i] + a[j];
		a[j] = a[i] - a[j];
		a[i] = a[i] - a[j];
	}
	for (i = 0; i < N; i++)
		cout << a[i] << ' ';
	cout << endl;
}

void inversion() {
	arrays6();
}

void truncatedAverage() {
	begin();
	int max, min, count = N; double sum = 0;
	max = min = a[0];
	for (i = 1; i < N; ++i)
		if (a[i] < min) min = a[i];
		else if (a[i] > max) max = a[i];

	cout << "\nДанные для подсчета:\n";
	for (i = 0; i != N; ++i) {
		if (a[i] != min && a[i] != max) {
			sum += a[i]; cout << a[i] << ' ';
		}
		else  --count;
	}
	cout << "Среднее усеченное: " << sum << '/' << count
		<< " = " << sum / count << endl;
}


