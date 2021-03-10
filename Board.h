
#ifndef BOARD_H
#define BOARD_H

//#include "Position.h"
class Menu;
//struct Position;
class Piece;
#include <string>
#include <string.h>

struct Position {

	private: 
		int row; 
		int column;
		int color;
		bool empty;
		bool firstMove;
		Piece* type;
	public: 

		Position() {
			type = nullptr;
			color = -1;
			empty = true;
			firstMove = true;
		}
	
		//SETTERS
		void setColumn(char col) { column = ColumnToNum(col); }
		void setRow(int x) { row = x; }
		void SetFirst(bool x) { firstMove = x; }
		void setEmpty(bool x) { empty = x; }
		void set(Piece* curr, int PieceColor, bool mtee, bool first) {
			type = curr;
			color = PieceColor;
			empty = mtee;
			firstMove = first;
		}

		//GETTERS
		int GetColumn() { return column; }
		int GetRow(){ return row; }
		Piece* GetPiece() { return type; }
		int GetColor() { return color; }
		bool GetFirst() { return firstMove; }
		bool isEmpty() { return empty; }
	
		//HELPERS
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
	Position throwawayBoard[8][8];
	int turn = 0;
	vector<string> MovesLog;
   public:
	void printBoard();
	void setInitialBoard();
	Position* getPosition(int x, int y) {
		return &throwawayboard[x][y];
	}
	string printP(Position curr);
	void changeTurn(int turn){
		if(turn == 0){
			turn = 1;
		}
		else{
			turn = 0;
		}
	}
	int getTurn(){
		return turn;
	}
	void MoveLog(string start, string end){ MovesLog.push_back(start); )
    void copyBoard() {
			memcpy(throwawayBoard, initialBoard, sizeof(Position) * 8 * 8);
		}
     void setTurn(int x) { turn = x; }

};



#endif
