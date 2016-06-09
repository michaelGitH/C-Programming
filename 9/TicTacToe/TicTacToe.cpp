#include<iostream>
#include<cstring>
using namespace std;

#include "TicTacToe.h"

TicTacToe::TicTacToe() {
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			xo[i][j] = 0;
}

void TicTacToe::play() {
	int player = 1;
	int finish = 0;
	char choice[3];
	int wl;
	while (finish == 0) {
		cout << "Move of the " << player << " player: ";
		cin >> choice;
		if (choice[2] != '\0' || choice[0] < '0' || choice[0] > '1' || choice[1] < '0' || choice[1] > '1')
			cout << "Incorrect move, pleas try again!";
		else {
			int row = ( static_cast<int>(choice[0] - 48 ));
			int column = ( static_cast<int>(choice[1] - 48 ));
			xo[row][column] = player;
			print();
			wl = winOfLos();

			if (wl == 1) {
				cout << "Player 1 won!" << endl;
				finish = 1;
			}
			else if ( wl == 2 ) {
				cout << "Player 2 won!" << endl;
				finish = 1;
			}
			else if (wl == 3) {
				cout << "Drow!" << endl;
				finish = 1;
			}

			if (player == 1)
				player = 2;
			else
				player = 1;
		}
	}
}

int TicTacToe::winOfLos() {
	int player;
	for (int i = 0; i < 3; i++) {		
		if ( (xo[i][0] == xo[i][1] == xo[i][2] ) && xo[i][0] != 0) {
			player = xo[i][0];
			return player;
		}
	}
	for (int i = 0; i < 3; i++) {
		if ( (xo[0][i] == xo[1][i] == xo[2][i] ) && xo[0][i] != 0) {
			player = xo[0][i];
			return player;
		}
	}
	if ( (xo[0][0] == xo[1][1] == xo[2][2]) && xo[0][0] != 0 ) {
		player = xo[0][0];
		return player;
	}
	else if ( (xo[2][0] == xo[1][1] == xo[0][2]) && xo[1][1] != 0) {
		player = xo[1][1];
		return player;
	}
	else {
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				if (xo[i][j] == 0)
					return 0;
		return 3;
	}
}

void TicTacToe::print() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (xo[i][j] == 0)
				cout << "|" << i << j << "|";
			else if (xo[i][j] == 1)
				cout << "|X|";
			else if (xo[i][j] == 2)
				cout << "|0|";
		}
		cout << endl;
	}
}