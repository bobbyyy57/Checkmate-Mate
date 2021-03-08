#ifndef __BOARD_H__
#define __BOARD_H__
#include "Menu.h"

using namespace std;
struct Positions{
    private:
        Piece type;
        char row;
        int column;
        string color;
    public:
	char SetRow(string x) { row = x; }
	Piece GetPiece() { return type; };
	string GetColor() { return color; };
        void SetColumn(int col){ column = col; } 
        char GetRow(){return row;}
}

class Board{
   protected:
	const char initialBoard[8][8] = {
       		{ 'R',  'N',  'B',  'Q',  'K',  'B',  'N',  'R' },
      		{ 'P',  'P',  'P',  'P',  'P',  'P',  'P',  'P' },
      		{ 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
      		{ 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
      		{ 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
      		{ 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
      		{ 'p',  'p',  'p',  'p',  'p',  'p',  'p',  'p' },
      		{ 'r',  'n',  'b',  'q',  'k',  'b',  'n',  'r' },
	};
	char throwawayBoard[8][8];
   public:
	void printSituation
};





#endif
