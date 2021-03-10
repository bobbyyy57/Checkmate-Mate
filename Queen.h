#ifndef QUEEN_H
#define QUEEN_H

#include "Piece.h"
#include "Board.h"

using namespace std;

class Queen : public Piece {
	virtual string getType() { return "Queen"; }
        virtual bool isValid(Position start, Position end) {
                return false; 
        }

};





#endif

