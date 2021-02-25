#ifndef BOARD_H
#define BOARD_H

#include "button.hpp"
#include "Menu.h"

using namespace std;

class Board {
        public:
		void printBoard();
};

struct Position {

	private: 
		string row; 
		string column;
		string color;
		Piece type;
	public: 
		string SetRow(string x) { row = x; }
		Piece GetPiece() { return type; };
		string GetColor() { return color; };

	

};

#endif
