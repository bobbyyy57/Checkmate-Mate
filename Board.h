#ifndef BOARD_H
#define BOARD_H

//#include "Position.h"
class Menu;
//struct Position;
class Piece;
#include <string>
#include <vector>
#include <string.h>

using namespace std;

struct Position {

	private: 
		int row; 
		int column;
		int color;
		bool empty;
		bool firstMove;
		Piece* type;
	public: 
/*
		Position() {
			type = nullptr;
			color = -1;
			empty = true;
			firstMove = true;
		}
*/	
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

class Board {
        protected:
                Position throwawayBoard[8][8];
//		Position initialBoard[8][8];
		int turn;
		vector<string>MovesLog;
	public:               
  		void printBoard();
		Position* getPosition(int x, int y) {
			return &throwawayBoard[x][y];
		}
                string printP(Position curr);
		void setInitialBoard();
		void setTurn(int x) {turn = x; }
		void changeTurn(int x) {turn = x;}
		int getTurn() { return turn; }
		void MoveLog(string start, string end){
			MovesLog.push_back(start);
			MovesLog.push_back(end);
		}
/*		void copyBoard() {
			memcpy(throwawayBoard, initialBoard, sizeof(Position) * 8 * 8);
		}
*/};



#endif
