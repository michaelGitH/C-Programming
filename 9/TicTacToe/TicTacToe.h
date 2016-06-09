#ifndef TICTACTOE_H
#define TICTACTOE_H


class TicTacToe {
public:
	TicTacToe();
	int winOfLos();
	void play();
	void print();
private:
	int xo[3][3];
};

#endif // !TICTACTOE_H








