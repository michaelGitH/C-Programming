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
int accessibility[8][8];
int horizontal[8], vertical[8]; // расположение всех возможных ходов
int row = 0, column = 0; // начальная позиция
int count = 2; // счетчик следующего хода

void declarate(); // инициализация начальных данных
void priority(int &, int&);
bool check(int, int, int); // проверка выхода за границы
void print(); // вывод текущего состояния доски
void printAccess();
int checkAccess(int, int); // проверка доступности клетки
void accessCorrect(); // корректировка доступности всех клеток доски
void prior(int &r, int&c);

void horse() {
	declarate();
	accessCorrect();
	for (int i = 0; i < 63; i++) {
		priority(row, column);
		board[row][column] = count++;
		cout << "print board:\n";
		print();
		//cout << "\nprint accessibility:\n";
		accessCorrect();
	}
}


void priority(int &r, int &c){
	int good = 8, rm = r, cm = c;
	int rb = r, cb = c;
	for (int i = 0; i < 8; i++) {
		if (check(r, c, i)) {
			rm = r + vertical[i],
				cm = c + horizontal[i];
			if (accessibility[rm][cm] < good) {
				good = accessibility[rm][cm];
				rb = rm, cb = cm;
			}
			else if (accessibility[rm][cm] == good) {
				int goodwin = 8;
				int rbb = rb, cbb = cb;
				for (int j = 0; j < 8; j++) {
					if (check(rb, cb, j)) {
						int rbc = rbb + vertical[j];
						int cbc = cbb + horizontal[j];
						if (accessibility[rbc][cbc] < goodwin) {
							goodwin = accessibility[rbc][cbc];
							rb = rbb, cb = cbb;
						}
					}
					if (check(rm, cm, j)) {
						int rbc = rm + vertical[j];
						int cbc = cm + horizontal[j];
						if (accessibility[rbc][cbc] < goodwin) {
							goodwin = accessibility[rbc][cbc];
							rb = rm, cb = cm;
						}
					}
				}
			}
		}
	}
	r = rb, c = cb;
}

void prior(int &r, int&c) { // !!!!!ЗАКЛАДКА!!!!!
	int good = 8, rm = r, cm = c;
	int rb = r, cb = c;
	for (int i = 0; i < 8; i++) {
		if (check(r, c, i)) {
			rm = r + vertical[i],
				cm = c + horizontal[i];
			if (accessibility[rm][cm] < good) {
				good = accessibility[rm][cm];
				rb = rm, cb = cm;
			}
		}
	}
	r = rb, c = cb;
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

void printAccess() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
			cout << setw(3) << accessibility[i][j];
		cout << '\n';
	}
	cout << "\n";
}

int checkAccess(int c, int r) {
	int counter = 0;
	for (int i = 0; i < 8; i++) {
		if (check(c, r, i)) {
			counter++;
		}
	}
	return counter;
}

void accessCorrect() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[i][j] != 0)
				accessibility[i][j] = 0;
			else
				accessibility[i][j] = checkAccess(i, j);
		}
	}
}

void declarate() {
	srand(time(0));
	row = rand() % 8;
	column = rand() % 8;

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			board[i][j] = 0;
	board[row][column] = 1;

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




/*
bool corner(int &r, int&c, int&m) { // !!!!!ЗАКЛАДКА!!!!!
	int x = r, y = c;
	if (checkBeyond(x, y, m)) {
		if ((r + vertical[m] == 7 && c + horizontal[m] == 0) ||
			(r + vertical[m] == 0 && c + horizontal[m] == 7) ||
			(r + vertical[m] == 7 && c + horizontal[m] == 7))
		{
			r += vertical[m], c += horizontal[m];
			return true;
		}
		else if ((r + vertical[m] == 1 && c + horizontal[m] == 0) ||
			(r + vertical[m] == 0 && c + horizontal[m] == 1) ||
			(r + vertical[m] == 0 && c + horizontal[m] == 6) ||
			(r + vertical[m] == 1 && c + horizontal[m] == 7) ||
			(r + vertical[m] == 6 && c + horizontal[m] == 0) ||
			(r + vertical[m] == 7 && c + horizontal[m] == 1) ||
			(r + vertical[m] == 6 && c + horizontal[m] == 7) ||
			(r + vertical[m] == 7 && c + horizontal[m] == 6))
		{
			r += vertical[m], c += horizontal[m];
			return true;
		}
	}
	return false;
}

bool checkBeyond(int &r, int &c, int &m) {
	//cout << "v:" << vertical[m] << " h:" << horizontal[m] << "\n";
	if (r + vertical[m] >= 0 && r + vertical[m] <= 7
		&& c + horizontal[m] >= 0 && c + horizontal[m] <= 7
		&& board[r + vertical[m]][c + horizontal[m]] == 0) {
		r += vertical[m];
		c += horizontal[m];
		return true;
	}
	else
		return false;
}

bool checkCorner() {
for (int i = 0; i < 8; i++) {
int r1 = row, c1 = column;
if (corner(r1, c1, i)) { // !!!!!ЗАКЛАДКА!!!!!
row = r1, column = c1;
board[row][column] = count++;
return true;
}
else if (checkBeyond(r1, c1, i)) {
for (int j = 0; j < 8; j++) {
int r2 = r1, c2 = c1;
if (corner(r2, c2, j)) {
row = r2, column = c2;
board[r1][c1] = count++;
board[row][column] = count++;
return true;
}
else if (checkBeyond(r2, c2, j)) {
for (int k = 0; k < 8; k++) {
int r3 = r2, c3 = c2;
if (corner(r3, c3, k)) {
row = r3, column = c3;
board[r1][c1] = count++;
board[r2][c2] = count++;
board[row][column] = count++;
return true;
}
}
}

}
}
}
return false;
}

void move(int r, int c) {
for (int i = 0; i < 8; i++) {
int r1 = r, c1 = c;
if (checkBeyond(r1, c1, i)) {
board[r1][c1] = 99;
for (int j = 0; j < 8; j++) {
int r2 = r1, c2 = c1;
if (checkBeyond(r2, c2, j)) {
board[r2][c2] = 99;
for (int k = 0; k < 8; k++) {
int r3 = r2, c3 = c2;
if (checkBeyond(r3, c3, k)) {
row = r3, column = c3;
board[r1][c1] = count++;
board[r2][c2] = count++;
board[row][column] = count++;
i = 8, j = 8, k = 8;
}
else if (k == 7) {
row = r2, column = c2;
board[r1][c1] = count++;
board[row][column] = count++;
i = 8, j = 8, k = 8;
}
}
}
else if (j == 7) {
row = r1, column = c1;
board[row][column] = count++;
i = 8, j = 8;
}
}
}
}
clean();
}

void clean() {
for (int i = 0; i < 8; i++)
for (int j = 0; j < 8; j++)
if (board[i][j] == 99)
board[i][j] = 0;
}
*/