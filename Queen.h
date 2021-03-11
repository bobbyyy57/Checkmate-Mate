#ifndef QUEEN_H
#define QUEEN_H

#include "Piece.h"
#include "Board.h"
#include <cmath>
#include <cstdlib>

using namespace std;

class Queen : public Piece {
	virtual string getType() { return "Queen"; }
        virtual bool isValid(Position* start, Position* end, Board b) {
				
                	int colDifference = start->GetColumn() - end->GetColumn();
                 	int rowDifference = start->GetRow() - end->GetRow();
			bool flag = false;
			int QueenR = start->GetRow();
			int QueenC = start->GetColumn();
			int finishR = end->GetRow();
			int finishC = end->GetColumn();

			cout << endl;
                        cout << "QUEEN TEST: color 1, " << start->GetColor()<< " || color 2, " << end->GetColor() << endl;
                        cout << "StartCol: " << start->GetColumn() << endl;
                        cout << "EndCol: " << end->GetColumn() << endl;
                        cout << "StartRow: " << start->GetRow() << endl;
                        cout << "EndROw: " << end->GetRow() << endl;
                        cout << "colDiff: " << colDifference << endl;
                        cout << "rowDiff: " << rowDifference << endl;

 			if(b.getTurn() == start->GetColor()){
                                std::cout << "ERROR: Wrong color!" << std::endl;
                                return false;
                        }
                        if (start->GetColor() == end->GetColor()){
                                std::cout << "ERROR: Destination is occupied by a piece of your color!" << std::endl;
                                return false;
                        }
                        if (colDifference > 0 && rowDifference > 0) {
                                if(colDifference != rowDifference){
					std::cout << "ERROR: Out of Queen's ability!" << std::endl; 
				}
                        }
			if (colDifference > 0 && rowDifference < 0) {
                                if((colDifference*-1) != rowDifference){ 
                                        std::cout << "ERROR: Out of Queen's ability!" << std::endl;
                                }
                        }
			if (colDifference < 0 && rowDifference > 0) {
                                if((colDifference*-1) != rowDifference){
                                        std::cout << "ERROR: Out of Queen's ability!" << std::endl;
                                }
                        }
			if (colDifference < 0 && rowDifference < 0) {
                                if(colDifference != rowDifference){
                                        std::cout << "ERROR: Out of Queen's ability!" << std::endl;
                                }
                        }
				
			if (colDifference == 0 && rowDifference == 0) {
                                std::cout << "ERROR: Same position!" << std::endl;
                                return false;
                        }

			//path not clear
			//VERTICAL
			for(int i = QueenR + 1; i < finishR; ++i) {
                                if (b.getPosition(i, QueenC)->isEmpty() == false) {
                                std::cout << "ERROR: Path is not clear!" << std::endl;
                                return false;
                                }
                        }

			//HORIZONTAL
                        for(int i = QueenC + 1; i < finishC; ++i) {
                                if (b.getPosition(QueenR, i)->isEmpty() == false) {
                                std::cout << "ERROR: Path is not clear!" << std::endl;
                                return false;
                                }
                        }

			//DIAGONAL
			if(abs(QueenR - finishR) == abs(QueenC - finishC)){
				int increment_r = (finishR - QueenR) / (abs(finishR - QueenR));
				int increment_c = (finishC - QueenC) / (abs(finishC - QueenC));
				for(unsigned i = 1; i <abs(QueenR - finishR); i++){
					if(b.getPosition(QueenR + increment_r * i, QueenC + increment_c *i)->isEmpty() != false){
						std::cout << "ERROR: Path is not clear!" << std::endl;
						return false;
					}
				}
			}
			else{
				return false;
			}
		
			if(flag == false){return true;}

                        return true;
			}

};





#endif

