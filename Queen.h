#ifndef QUEEN_H
#define QUEEN_H

#include "Piece.h"
#include "Board.h"

using namespace std;

class Queen : public Piece {
	virtual string getType() { return "Queen"; }
        virtual bool isValid(Position start, Position end, Board b) {
                int colDifference = start.GetColumn() - end.GetColumn();
                        int rowDifference = start.GetRow() - end.GetRow();

                        if(b.getTurn() == start.GetColor()){
                                std::cout << "ERROR: Wrong color!" << std::endl;
                                return false;
                        }


                        if (start.GetColor() == end.GetColor()){
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
				
			if (colDifference == 0 && rowDifference == 0) {
                                std::cout << "ERROR: Same position!" << std::endl;
                                return false;
                        }

			for(int i = start.GetRow() + 1; i < end.GetRow(); ++i) {
                                if (throwawayBoard[i][start.GetColumn()].isEmpty() == false) {
                                std::cout << "ERROR: Path is not clear!" << std::endl;
                                return false;
                                }
                        }

                        for(int i = start.GetColumn() + 1; i < end.GetColumn(); ++i) {
                                if (throwawayBoard[start.GetRow()][i].isEmpty() == false) {
                                std::cout << "ERROR: Path is not clear!" << std::endl;
                                return false;
                                }
                        }

                        return true;
        }

};





#endif

