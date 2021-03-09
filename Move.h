#ifndef __MOVE_H__
#define __MOVE_H__

#include "Operation.h"
#include "Menu.h"
#include <string>
#include <iostream>

using namespace std;
class Move : public Operation {
        public:

                void operation(){
                        //called from main when user chooses M or m
                        string pos1;
                        string pos2;
                        cout << "Which piece would you like to move?: ";
                        cin >> pos1;
                        cout << "Where would you like to move it?: "
                        cin >> pos2;



                        //movePiece(pos1, pos2, castling(), enpassant(), promotion()); (still need to implement)
                        printBoard();
			printGameMenu();
                }
};

#endif

