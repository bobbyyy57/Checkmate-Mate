#ifndef __BOARD_H__
#define __BOARD_H__
#include "Menu.h"

using namespace std;
struct Positions{
    private:
        Piece type;
        int row;
        char column;
        int color;
	bool firstMove;
	bool empty;
    public:
	Positions(int r, char c, Piece kind, int paint, bool first, bool emp){
		row = r;
		column = c;
		color = paint;
		type = kind;
		firstMove = first;
		empty = emp;
	}
	char SetRow(char x) { row = x; }
	Piece GetPiece() { return type; };
	string GetColor() { return color; };
        void SetColumn(int col){ column = col; } 
        char GetRow(){ return row; }
};

class Board{
   protected:
	Positions initialBoard[8][8];
	Positions throwawayBoard[8][8];
   public:
	void setInitialBoard{

		initialBoard[0][0].setPieceAndColor(new Rook(), 0);
		initialBoard[1][0].setPieceAndColor(new Knight(), 0);
		initialBoard[2][0].setPieceAndColor(new Bishop(), 0);
		initialBoard[3][0].setPieceAndColor(new Queen(), 0);
		initialBoard[4][0].setPieceAndColor(new King(), 0);
		initialBoard[5][0].setPieceAndColor(new Bishop(), 0);
		initialBoard[6][0].setPieceAndColor(new Knight(), 0);
		initialBoard[7][0].setPieceAndColor(new Rook(), 0);

		initialBoard[0][7].setPieceAndColor(new Rook(), 1);
		initialBoard[1][7].setPieceAndColor(new Knight(), 1);
		initialBoard[2][7].setPieceAndColor(new Bishop(), 1);
		initialBoard[3][7].setPieceAndColor(new Queen(), 1);
		initialBoard[4][7].setPieceAndColor(new King(), 1);
		initialBoard[5][7].setPieceAndColor(new Bishop(), 1);
		initialBoard[6][7].setPieceAndColor(new Knight(), 1);
		initialBoard[7][7].setPieceAndColor(new Rook(), 1);

		initialBoard[0][1].setPieceAndColor(new Pawn(), 0);
		initialBoard[1][1].setPieceAndColor(new Pawn(), 0);
		initialBoard[2][1].setPieceAndColor(new Pawn(), 0);
		initialBoard[3][1].setPieceAndColor(new Pawn(), 0);
		initialBoard[4][1].setPieceAndColor(new Pawn(), 0);
		initialBoard[5][1].setPieceAndColor(new Pawn(), 0);
		initialBoard[6][1].setPieceAndColor(new Pawn(), 0);		
		initialBoard[7][1].setPieceAndColor(new Pawn(), 0);

		initialBoard[0][6].setPieceAndColor(new Pawn(), 1);
		initialBoard[1][6].setPieceAndColor(new Pawn(), 1);
		initialBoard[1][6].setPieceAndColor(new Pawn(), 1);
		initialBoard[1][6].setPieceAndColor(new Pawn(), 1);
		initialBoard[1][6].setPieceAndColor(new Pawn(), 1);
		initialBoard[1][6].setPieceAndColor(new Pawn(), 1);
		initialBoard[1][6].setPieceAndColor(new Pawn(), 1);
		initialBoard[1][6].setPieceAndColor(new Pawn(), 1);
	
		for (int i = 0; i < 8; i++){
			initialBoard[i][1].setPieceAndColor(new Pawn(), 0);
			initialBoard[i][6].setPieceAndColor(new Pawn(), 1);
		}

		for (int i = 2; i < 6; i++){
			for (int j = 0; j < 8; j++)
				initialBoard[j][i].setEmpty();
		}
	
		for (int i = 0; i < 8; i++)
			for (int j = 0; j < 8; j++){
				int colAscii = 65 + i;
				char col = colAscii;
				initialBoard[i][j].setColumn(col);
				initialBoard[i][j].setRow(j);
			}
		}
};





#endif
