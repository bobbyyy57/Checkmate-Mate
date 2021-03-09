#ifndef __BOARD_H__
#define __BOARD_H__
#include <map>
//#include "Position.h"
class Menu;
//struct Position;
class Piece;

#include <string>

using namespace std;

struct Position {
	protected:
		int row; 
		char column;
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
		void setEmpty() { empty = true; }
		void setPieceAndColor(Piece* curr, int PieceColor) {
			type = curr;
			color = PieceColor;
		}
  
  
		//GETTERS
		int GetColumn() { 
      int columnNum = ColumnToNum(column);
		  return columnNum; 
    }
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
	  int PlayerColor;
	  int CurrentTurn = 0;
    Position throwawayBoard[8][8];
	  Position initialBoard[8][8];

	public:               
  	void printBoard();
    string printP(Position curr);
		void setInitialBoard();
    void changeTurn(int currentTurn){
	//white's turn is denoted by int 0
	//black pieces' turn is denoted by 1
 		  if(currentTurn == 0){
 			  CurrentTurn = 1;
		  }
		  else{
			  CurreentTurn = 0;	
		    }
  	 }
	int GetTurn(){
		return CurrenTurn;
	}

};



#endif // __BOARD_H__
