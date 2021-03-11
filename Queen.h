#ifndef QUEEN_H
#define QUEEN_H

#include <iostream> 
#include "Piece.h"
#include "Board.h"

using namespace std;

class Queen : public Piece {

	public:
		virtual string getType() { return "Queen"; }
                virtual bool isValid(Position* start, Position* end, Board b){
                     return true;
        }

};





#endif

