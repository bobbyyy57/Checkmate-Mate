
#ifndef BOARD_H
#define BOARD_H

//#include "Piece.h"
//#include "Operation.h"
//#include "Menu.h"
#include <string>

class Menu;

class Piece;

using namespace std;
struct Position{
    private:
   	Piece* type;
        int row;
        char column;
        int color;
	bool firstMove;
	bool empty;
    public:
	Position(){
		type = nullptr;
		color = -1;
		empty = true;
		firstMove = true;
	}
	
	//setters
	void setColumn(char col) { column = ColumnToNum(col); }
	void setRow(int x) { row = x; }
	void SetFirst(bool x) { firstMove = x; }
	void setEmpty() { empty = true; }
	void setPieceAndColor(Piece* curr, int PieceColor) {
		type = curr;
		color = PieceColor;
	}

	//getters
	int GetColumn() { return column; }
	int GetRow(){ return row; }
	Piece* GetPiece() { return type; }
	int GetColor() { return color; }
	bool GetFirst() { return firstMove; }
	bool isEmpty() { return empty; }

	//helpers
	int ColumnToNum(char column){
		if(column == 'a' || column == 'A'){
			return 0;
		}
		else if(column == 'b' || column == 'B'){
			return 1;
		}
		else if(column == 'c' || column == 'C'){
			return 2;
               	}
		else if(column == 'd' || column == 'D'){
			return 3;
               	}
		else if(column == 'e' || column == 'E'){
			return 4;
               	}
		else if(column == 'f' || column == 'F'){
			return 5;
               	}
		else if(column == 'g' || column == 'G'){
			return 6;
               	}
		else if(column == 'h' || column == 'H'){
			return 7;
               	}
	}

};

class Board{
   protected:
	Position initialBoard[8][8];
	Position throwawayBoard[8][8];
   public:
	void printBoard();
	void setInitialBoard();
	//Positions* getPosition(int x, int y) {
	//	return &throwawayboard[x][y];
	//}
	string printP(Position curr);
};

#endif
