#ifndef EMPTY_H
#define EMPTY_H

#include <iostream>
#include "Piece.h"
#include "Board.h"

using namespace std;


class Empty : public Piece {
        public:
              
                virtual string getType() { return "Empty"; }
                virtual bool isValid(Position start, Position end, Board b) {
                        return true;
                }

};

#endif

