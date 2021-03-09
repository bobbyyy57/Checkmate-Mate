
#ifndef BOARD_H
#define BOARD_H

#include "button.hpp"
#include "Menu.h"

using namespace std;

struct Positions{
    private:
   //     Piece* type;
        int row;
        char column;
        int color;
	bool firstMove;
	bool empty;
    public:
	Positions(){
//		type = nullptr;
		empty = true;
		color = -1;
		firstMove = true;
	}
	void SetRow(int x) { row = x; }
//	Piece GetPiece() { return type; };
	int GetColor() { return color; };
        void SetColumn(int col){ column = col; } 
	void SetFirst(bool x) { firstMove = x; }
        int GetRow(){ return row; }
	bool isEmpty() { return empty; }

};

class Board{
   protected:
	Positions initialBoard[8][8];
	Positions throwawayBoard[8][8];
   public:
	void printBoard();
	void setInitialBoard();
	Position* getPosition(int x, int y) {
		return &throwawayboard[x][y];
	}
	string printP(Position curr);
};

#endif
