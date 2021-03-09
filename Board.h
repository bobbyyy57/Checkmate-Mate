#ifndef BOARD_H
#define BOARD_H

#include "Menu.h"
#include <string>

using namespace std;

struct Position {

	private: 
		int row; 
		int column;
		int color;
		bool empty;
		bool firstMove;
//		Piece* type;
	public: 

		Position() {
//			type = nullptr;
			color = -1;
			empty = true;
			firstMove = true;
		}
		void SetRow(int x) { row = x; }
//		Piece GetPiece() { return type; };
		int GetColor() { return color; }
		void SetFirst(bool x) { firstMove = x; }
		bool GetFirst() { return firstMove; }
		bool isEmpty() { return empty; }
};

class Board {
        protected:
                Position throwawayBoard[8][8];
        public:
                void printBoard();
                string printP(Position curr);
};



#endif
