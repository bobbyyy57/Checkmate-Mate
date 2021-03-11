#ifndef ROOK_H
#define ROOK_H

#include "Board.h"
#include "Piece.h"
#include <cmath>
#include <ctsdlib>


using namespace std;

class Rook: public Piece{
	public:
	virtual string getType() { return "Rook"; }
        virtual bool isValid(Position* start, Position* end, Board b) {
		if(start->GetColor() != b.getTurn()){
                std::cout << "ERROR: Wrong color!" << std::endl;
                        return false;
                }

                if(start->GetColor() == end->GetColor()){
                std::cout <<"ERROR: You cant eat your own, have decency and only eat the oponent!" << std::endl;
                        return false;
                }

                if((start->GetRow() == end->GetRow()) && (end->GetColumn() == start->GetColumn())){
                std::cout <<"ERROR: You can stay in the same position!"<<std::endl;
                }	

		bool flag = false;
                int RookR = start->GetRow();
                int RookC = start->GetColumn();
                int finishR = end->GetRow();
                int finishC = end->GetColumn();
		
		if(RookR != finishR || RookC != finish C){
		if(RookR == finshR){
			int increment_c = (finishC - RookC) / (abs(finishC - RookC));

			for(int i = RookC + increment_c; i != finishC; i + increment_c){
				if(throwawayBoard[RookR][i].isEmpty() != true){
					return false;
				}
			}
	
		}
		else if(RookC == finishC){
			int increment_r = (finishR - bishopR) / (abs(finishR - bishopR));
			
			for (int i = RookR + increment_r; i != finishR; i += increment_r){
					if (square[i][finishC].isEmpty() != true ){
						return false;
					}
				}
		}
		}
	if(flag == false){return true;}

	else{
		std::cout << "That is an invalid move for rook";
		return false;
	}
	}

};

#endif /
