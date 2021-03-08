
#ifndef BOARD_H
#define BOARD_H

#include "button.hpp"
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


class Board {
        public:
		void printBoard();
};

struct Position {

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

	

};

#endif
