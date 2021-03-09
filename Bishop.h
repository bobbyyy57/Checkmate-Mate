#ifndef __BISHOP_H__
#define __BISHOP_H__

#include <iostream>
#include "Piece.h"
#include <cmath>
#include <cstdlib>
using namespace std;


class Bishop: public Piece{
	
	public:
		bool isValid(Position*start, Position* end){
			//CHECKING IF PLAYER IS MOVING THE CORRECT PIECE
			if(start->GetColor() != throwawayBoard->GetTurn()){
				std::cout << "ERROR: Wrong color!" << std::endl;
				return false;
			}

			//CHECKING IF PLAYER IS TRYING TO EAT THEMSELVES
			if(end->GetColor() == start->GetColor()){
				std::cout <<"ERROR: You cant eat your own, have decency and only eat the oponent!" << std::endl;
				return false;
			}
			//CHECKING IF PLAYER IS ACTUALLY MOVING
			if((start->GetRow() == end->GetRow()) && (end->GetColumn == start->GetColumn())){
				std::cout <<"ERROR: You can stay in the same position!"<<std::endl;
			}

			//CHECKING IF THE PATH IS CLEAR FOR THE PIECE TO MOVE
			
			bool flag = false;
			int bishopR = start->GetRow();
			int bishopC = start->GetColumn();
			int finishR = end->GetRow();
			int finishC = end->GetColumn();

			if(abs(bishopR - finishR) == abs(bishopC - finishC)){
				int increment_r = (finishR - bishopR) / (abs(finishR - bishopR));
				int increment_c = (finishC - bishopC) / (abs(finishC - bishopC));
				//FOR LOOP WALKS THE PATH SET FOR THE PIECE
				for(unsigned i = 1; i <abs(bishopR - finishR); i++){
					std::cout << "testting testing" << std::endl;
				//CHECKING IF THERE IS ANY PIECES IN THE WAY
				if(thorwawayBoard[bishopR + increment_r * i][bishopC + increment_c *i]->isEmpty() != false ){
					return false;
				}
			}
		}
		else{
			return false;
		}
		
		if(flag == false){return true;}
	}
};

#endif
