#ifndef BISHOP_H
#define BISHOP_H

#include "Board.h"
#include "Piece.h"

using namespace std;

class Bishop : public Piece {

	virtual string getType() { return "Bishop"; }
        virtual bool isValid(Position start, Position end) {
                return false;
        }

};





#endif
