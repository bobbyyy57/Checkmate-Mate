#ifndef QUEEN_H
#define QUEEN_H

#include "Piece.h"
#include "Board.h"
#include <cmath>
#include <cstdlib>

using namespace std;

class Queen : public Piece {
        virtual string getType() { return "Queen"; }


virtual bool isValid(Position* start, Position* end, Board b){
                int queenR = start->GetRow();
                int queenC = start->GetColumn();
                int colDifference = start->GetColumn() - end->GetColumn();
                        int rowDifference = start->GetRow() - end->GetRow();
                int finishR = end->GetRow();
                int finishC = end->GetColumn();
                std::cout << "this";
                int incrementRow;
                int incrementColumn;

                cout << endl;
                cout << "QUEEN TEST: color 1, " << start->GetColor()<< " || color 2, " << end->GetColor() << endl;
                cout << "StartCol: " << start->GetColumn() << endl;
                        cout << "EndCol: " << end->GetColumn() << endl;
                        cout << "StartRow: " << start->GetRow() << endl;
                        cout << "EndROw: " << end->GetRow() << endl;
             

                        if(b.getTurn() != start->GetColor()){
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
                                        return false;
                                }
                        }
                        if (colDifference > 0 && rowDifference < 0) {
                                if((colDifference*-1) != rowDifference){
                                        std::cout << "ERROR: Out of Queen's ability!" << std::endl;
                                        return false;
                                }
                        }
                        if (colDifference < 0 && rowDifference > 0) {
                                if((colDifference*-1) != rowDifference){
                                        std::cout << "ERROR: Out of Queen's ability!" << std::endl;
                                        return false;
                                }
                        }
                        if (colDifference < 0 && rowDifference < 0) {
                                if(colDifference != rowDifference){
                                        std::cout << "ERROR: Out of Queen's ability!" << std::endl;
                                        return false;
                                }
                        }

                        if (colDifference == 0 && rowDifference == 0) {
                                std::cout << "ERROR: Same position!" << std::endl;
                                return false;
                        }
				 if (queenR != finishR || queenC != finishC){
                        if (queenR == finishR){
                                incrementColumn = (finishC - queenC) / (abs(finishC - queenC));
                                for (int i = queenC + incrementColumn; i != finishC; i += incrementColumn){
                                        if (b.getPosition(finishR,i)->isEmpty() == false){
                                                std::cout << "first" << std::endl;
                                                return false;
                                        }
                                }
                        }
                        else{
                                if (queenR == finishC){
                                        incrementRow = (finishR - queenR) / (abs(finishR - queenR));
                                        for (int i = queenR + incrementRow; i != finishR; i += incrementRow){
                                                if (b.getPosition(i,finishC)->isEmpty() == false){
                                                        std::cout << "first" << std::endl;
                                                        return false;
                                                }
                                        }
                                }
                                else{
                                        if (abs(queenR - finishR) == abs(queenC - finishC)){
                                                incrementRow = (finishR - queenR) / (abs(finishR - queenR));
                                                incrementColumn = (finishC - queenC) / (abs(finishC - queenC));
                                                for (int i = 1; i < abs(queenR - finishR); i++){
                                                        std::cout << "testing" << std::endl;
                                                        if (b.getPosition(queenR + incrementRow*i,queenC + incrementColumn*i)->isEmpty() == false)
                                                        return false;

                                                }
                                        }
                                }
                        }
                }
 for(int i = queenR + 1; i < finishR; ++i) {
                                if (b.getPosition(i, queenC)->isEmpty() == false) {
                                std::cout << "ERROR: Path is not clear!" << std::endl;
                                return false;
                                }
                }

                for(int i = queenC + 1; i < finishC; ++i) {
                                if (b.getPosition(queenR, i)->isEmpty() == false) {
                                std::cout << "ERROR: Path is not clear!" << std::endl;
                                return false;
                                }
                }                                                                                                                                                                         
                return true;
        }
};

#endif
