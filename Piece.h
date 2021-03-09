#ifndef PIECE_H
#define PIECE_H

#include "Board.h"

using namespace std;
class Piece : public Board {
    public:    
        virtual bool isValid() = 0;
};

#endif
