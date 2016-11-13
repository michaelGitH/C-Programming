#include<iostream>
using std::cout;
#include<iomanip>
using std::setw;
#include<cstdlib>
using::rand;
using::srand;
#include<ctime>
using std::time;

int board[8][8]; // достка
int horizontal[8], vertical[8]; // расположение всех возможных ходов
int row, column; // начальная позиция
int count; // счетчик следующего хода

const int size = 65;
int longs[size];

void declarate(); // инициализация начальных данных
bool check(int, int, int); // проверка выхода за границы
void print(); // вывод текущего состояния доски
void clean();

void horse() {
	for (int i = 0; i < 65; i++)
		longs[i] = 0;
	srand(time(0));

	int biggest = 0;

	while (longs[64] == 0) {
		declarate();
		int counter = 1;
		for (int j = 0; j < 150; j++) {
			int move = rand() % 8;
			if (check(row, column, move)) {
				row += vertical[move];
				column += horizontal[move];
				board[row][column] = count++;
				counter++;
			}
		}
		longs[counter]++;
		for (int i = 0; i < 64; i++) {
			if (i > biggest && longs[i] > 0) {
				biggest = i;
				print();
				cout << "now biggest is: " << biggest << "\n\n";
			}
		}	
	}
	cout << "\n\n";
	for (int i = 1; i < 65; i++) {
		cout << i << ": " << longs[i] << '\n';
	}
}

bool check(int r, int c, int m) {
	if (r + vertical[m] >= 0 && r + vertical[m] <= 7
		&& c + horizontal[m] >= 0 && c + horizontal[m] <= 7
		&& board[r + vertical[m]][c + horizontal[m]] == 0) {
		return true;
	}
	else
		return false;
}

void print() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
			cout << setw(3) << board[i][j];
		cout << '\n';
	}
	cout << "\n";
}

void clean() {
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			board[i][j] = 0;
}

void declarate() {
	//srand(time(0));
	//row = rand() % 8;
	//column = rand() % 8;

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			board[i][j] = 0;
	row = 0, column = 0;
	board[row][column] = 1;
	count = 2;

	horizontal[0] = 2;
	horizontal[1] = 1;
	horizontal[2] = -1;
	horizontal[3] = -2;
	horizontal[4] = -2;
	horizontal[5] = -1;
	horizontal[6] = 1;
	horizontal[7] = 2;

	vertical[0] = -1;
	vertical[1] = -2;
	vertical[2] = -2;
	vertical[3] = -1;
	vertical[4] = 1;
	vertical[5] = 2;
	vertical[6] = 2;
	vertical[7] = 1;
}
