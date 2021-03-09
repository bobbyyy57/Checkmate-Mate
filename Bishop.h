#ifndef __BISHOP_HPP__
#define __BISHOP_HPP__

#include <iostream>
#include "Piece.h"
using namespace std;


class Bishop: public Piece{
	
	public:
	bool isValid(Position*start, Position* end){
		if(start->GetColor() != throwawayBoard->GetTurn()){
		std::cout << "Not your turn" << std::endl;
		return false;
		}
		if(end->GetColor() != -1){
		std::cout <<"Space not empty" << endl;
		return false;
		}

		int bishopR = start->GetRow();
		char bishop = start->GteColumn();
		
	}
};

#endif
