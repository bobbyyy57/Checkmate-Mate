#ifndef __MOVE_HPP__
#define __MOVE_HPP__

#include "button.hpp"
#include "Menu.h"

class Move : public Button {
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
        		//printBoard(); (still need to implement)
			printGameMenu();
		}
};
