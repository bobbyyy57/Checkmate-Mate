#ifndef BISHOP_H
#define BISHOP_H

#include "Board.h"
#include "Piece.h"

using namespace std;

class Bishop : public Piece {

	virtual string getType() { return "Bishop"; }
        virtual bool isValid(Position start, Position end, Board b) {
                if(start.GetColor() != b.getTurn()){
		std::cout << "ERROR: Wrong color!" << std::endl;
			return false;
		}

		if(end.GetColor() == start.GetColor()){
		std::cout <<"ERROR: You cant eat your own, have decency and only eat the oponent!" << std::endl;
			return false;
		}

		if((start.GetRow() == end.GetRow()) && (end.GetColumn() == start.GetColumn())){
		std::cout <<"ERROR: You can stay in the same position!"<<std::endl;
		}

		bool flag = false;
		int bishopR = start.GetRow();
		int bishopC = start.GetColumn();
		int finishR = end.GetRow();
		int finishC = end.GetColumn();

		if(abs(bishopR - finishR) == abs(bishopC - finishC)){
			int increment_r = (finishR - bishopR) / (abs(finishR - bishopR));
			int increment_c = (finishC - bishopC) / (abs(finishC - bishopC));
			for(unsigned i = 1; i <abs(bishopR - finishR); i++){
				std::cout << "testting testing" << std::endl;
				if(throwawayBoard[bishopR + increment_r * i][bishopC + increment_c *i].isEmpty() != false ){
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
