#ifndef PIECE_H
#define PIECE_H

#include "Board.h"

using namespace std;

class Piece : public Board {
	public: 
     	   virtual bool isValid(Position, Position, Board) = 0;
	   virtual string getType() = 0;
 
};

#endif
