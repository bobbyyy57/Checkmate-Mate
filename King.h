#ifndef KING_H
#define KING_H

#include "Piece.h"
#include "Board.h"


using namespace std;

class King : public Piece {
	virtual string getType() { return "King"; }
	virtual bool isValid(Position start, Position end) {
		return false;
	}
};





#endif
