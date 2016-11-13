#include<iostream>
using std::cout;
using std::cin;
#include<iomanip>
using std::setw;

int accessibility[8][8];
int board[8][8];
int row, column;
int count = 1;

void declarate(); // начальные данные
void accessCorrect(); // проверка эвристики доступности доски
bool check(int r, int c); // проверка границ
void printAccess(); // печать эфвристики доступности
void print();
int checkAccess(int r, int c); // проверка доступности клетки
void boarding(); // Поиск наилучшей клетки
void boarding2();
void handmade( int, int );
void clean( int, int );

void queens() {
	for (int i = 0; i < 8; i++) {
		accessCorrect();
		printAccess();
		cout << "\n";
		boarding();
		print();
		cout << "\n";
	}

}

bool check(int r, int c) {
	if (r >= 0 && r <= 7
		&& c >= 0 && c <= 7
		&& board[r][c] == 0) {
		return true;
	}
	else
		return false;
}

void printAccess() {
	cout << "Access\n";
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
			accessibility[i][j] != 99 ? cout << setw(3) << accessibility[i][j]
			: cout << setw( 3 ) << 0;
		cout << '\n';
	}
	cout << "\n";
}

void print() {
	cout << "Board\n";
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
			cout << setw(3) << board[i][j];
		cout << '\n';
	}
	cout << "\n";
}

int checkAccess(int r, int c) {
	int counter = 0;
	int rr = r, cc = c ;
	for (int i = 0; i < 8; i++)
		check(++rr, ++cc) ? counter++ : counter;
	rr = r, cc = c;
	for (int i = 0; i < 8; i++)
		check(--rr, --cc) ? counter++ : counter;
	rr = r, cc = c;
	for (int i = 0; i < 8; i++)
		check(++rr, --cc) ? counter++ : counter;
	rr = r, cc = c;
	for (int i = 0; i < 8; i++)
		check(--rr, ++cc) ? counter++ : counter;
	rr = r, cc = c;

	for (int i = 0; i < 8; i++)
		check(++rr, cc) ? counter++ : counter;
	rr = r, cc = c;
	for (int i = 0; i < 8; i++)
		check(--rr, cc) ? counter++ : counter;
	rr = r, cc = c;
	for (int i = 0; i < 8; i++)
		check(rr, ++cc) ? counter++ : counter;
	rr = r, cc = c;
	for (int i = 0; i < 8; i++)
		check(rr, --cc) ? counter++ : counter;
	rr = r, cc = c;

	counter++;

	return counter;
}

void accessCorrect() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[i][j] != 0)
				accessibility[i][j] = 99;
			else
				accessibility[i][j] = checkAccess(i, j);
		}
	}
}

void declarate() {
	srand(time(0));
	row = 0;// rand() % 8;
	column = 0;// rand() % 8;

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			board[i][j] = 0;
	board[row][column];
}

void boarding() {
	int lessen = 99, lrow = 0, lcolumn = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (check(i, j) && accessibility[i][j] < lessen) {
				lessen = accessibility[i][j];
				lrow = i, lcolumn = j;
			}
		}
	}
	cout << "lessen: " << lessen << "\n\n";
	if (lessen < 99)
		board[lrow][lcolumn] = count * 10 + count;

	int rr = lrow, cc = lcolumn;
	for (int i = 0; i < 8; i++)
		check(++rr, ++cc) ? board[rr][cc] = count: count;
	rr = lrow, cc = lcolumn;
	for (int i = 0; i < 8; i++)
		check(--rr, --cc) ? board[rr][cc] = count : count;
	rr = lrow, cc = lcolumn;
	for (int i = 0; i < 8; i++)
		check(++rr, --cc) ? board[rr][cc] = count : count;
	rr = lrow, cc = lcolumn;
	for (int i = 0; i < 8; i++)
		check(--rr, ++cc) ? board[rr][cc] = count : count;
	rr = lrow, cc = lcolumn;

	for (int i = 0; i < 8; i++)
		check(++rr, cc) ? board[rr][cc] = count : count;
	rr = lrow, cc = lcolumn;
	for (int i = 0; i < 8; i++)
		check(--rr, cc) ? board[rr][cc] = count : count;
	rr = lrow, cc = lcolumn;
	for (int i = 0; i < 8; i++)
		check(rr, ++cc) ? board[rr][cc] = count : count;
	rr = lrow, cc = lcolumn;
	for (int i = 0; i < 8; i++)
		check(rr, --cc) ? board[rr][cc] = count : count;
	count++;
}

void clean(int i, int j) {
	board[i][j] = 0;

	int rr = i, cc = j;
	for (int i = 0; i < 8; i++)
		check(++rr, ++cc) ? board[rr][cc] = 0 : board[rr][cc] = 0;
	rr = i, cc = j;
	for (int i = 0; i < 8; i++)
		check(--rr, --cc) ? board[rr][cc] = 0 : board[rr][cc] = 0;
	rr = i, cc = j;
	for (int i = 0; i < 8; i++)
		check(++rr, --cc) ? board[rr][cc] = 0 : board[rr][cc] = 0;
	rr = i, cc = j;
	for (int i = 0; i < 8; i++)
		check(--rr, ++cc) ? board[rr][cc] = 0 : board[rr][cc] = 0;
	rr = i, cc = j;

	for (int i = 0; i < 8; i++)
		check(++rr, cc) ? board[rr][cc] = 0 : board[rr][cc] = 0;
	rr = i, cc = j;
	for (int i = 0; i < 8; i++)
		check(--rr, cc) ? board[rr][cc] = 0 : board[rr][cc] = 0;
	rr = i, cc = j;
	for (int i = 0; i < 8; i++)
		check(rr, ++cc) ? board[rr][cc] = 0 : board[rr][cc] = 0;
	rr = i, cc = j;
	for (int i = 0; i < 8; i++)
		check(rr, --cc) ? board[rr][cc] = 0 : board[rr][cc] = 0;
	count--;
}

void handmade( int i, int j) {
	board[i][j] = count * 10 + count;

	int rr = i, cc = j;
	for (int i = 0; i < 8; i++)
		check(++rr, ++cc) ? board[rr][cc] = count : count;
	rr = i, cc = j;
	for (int i = 0; i < 8; i++)
		check(--rr, --cc) ? board[rr][cc] = count : count;
	rr = i, cc = j;
	for (int i = 0; i < 8; i++)
		check(++rr, --cc) ? board[rr][cc] = count : count;
	rr = i, cc = j;
	for (int i = 0; i < 8; i++)
		check(--rr, ++cc) ? board[rr][cc] = count : count;
	rr = i, cc = j;

	for (int i = 0; i < 8; i++)
		check(++rr, cc) ? board[rr][cc] = count : count;
	rr = i, cc = j;
	for (int i = 0; i < 8; i++)
		check(--rr, cc) ? board[rr][cc] = count : count;
	rr = i, cc = j;
	for (int i = 0; i < 8; i++)
		check(rr, ++cc) ? board[rr][cc] = count : count;
	rr = i, cc = j;
	for (int i = 0; i < 8; i++)
		check(rr, --cc) ? board[rr][cc] = count : count;
	count++;
}

void boarding2() {
	int lessen = 99, lrow = 0, lcolumn = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (check(i, j) && accessibility[i][j] < lessen) {
				lessen = accessibility[i][j];
				lrow = i, lcolumn = j;
			}
			else if (check(i, j) && accessibility[i][j] == lessen) {
				handmade(i, j);
				accessCorrect();
				//printAccess();
				//print();
				int lowAccess = 100, lowLess = 100;
				for (int x = 0; x < 8; x++)
					for (int y = 0; y < 8; y++)
						if (accessibility[x][y] < lowAccess)
							lowAccess = accessibility[x][y];
				clean(i, j);
				accessCorrect();
				//printAccess();
				//print();

				handmade(lrow, lcolumn);
				accessCorrect();
				for (int x = 0; x < 8; x++)
					for (int y = 0; y < 8; y++)
						if (accessibility[x][y] < lowLess)
							lowLess = accessibility[x][y];
				clean(lrow, lcolumn);
				accessCorrect();
				if (lowAccess < lowLess)
					lrow = i, lcolumn = j;
				//cout << "lowAccess: " << lowAccess
				//	<< "\nlowLess: " << lowLess << "\n\n";
			}
		}
	}
	cout << "lessen: " << lessen << "\n\n";
	if (lessen < 99)
		board[lrow][lcolumn] = count * 10 + count;

	int rr = lrow, cc = lcolumn;
	for (int i = 0; i < 8; i++)
		check(++rr, ++cc) ? board[rr][cc] = count : count;
	rr = lrow, cc = lcolumn;
	for (int i = 0; i < 8; i++)
		check(--rr, --cc) ? board[rr][cc] = count : count;
	rr = lrow, cc = lcolumn;
	for (int i = 0; i < 8; i++)
		check(++rr, --cc) ? board[rr][cc] = count : count;
	rr = lrow, cc = lcolumn;
	for (int i = 0; i < 8; i++)
		check(--rr, ++cc) ? board[rr][cc] = count : count;
	rr = lrow, cc = lcolumn;

	for (int i = 0; i < 8; i++)
		check(++rr, cc) ? board[rr][cc] = count : count;
	rr = lrow, cc = lcolumn;
	for (int i = 0; i < 8; i++)
		check(--rr, cc) ? board[rr][cc] = count : count;
	rr = lrow, cc = lcolumn;
	for (int i = 0; i < 8; i++)
		check(rr, ++cc) ? board[rr][cc] = count : count;
	rr = lrow, cc = lcolumn;
	for (int i = 0; i < 8; i++)
		check(rr, --cc) ? board[rr][cc] = count : count;
	count++;
}

			