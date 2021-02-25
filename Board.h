#ifndef __BOARD_H__
#define __BOARD_H__
#include "Menu.h"

using namespace std;
struct Positions{
    private:
        Piece type;
        char row;
        int column;
        string color;
    public:
        void SetColumn(int col){ column = col; } 
        char GetRow(){return row;}
}


#endif
