#ifndef QUEEN_H
#define QUEEN_H

#include <iostream> 
#include "Piece.h"
#include "Board.h"

using namespace std;

class Queen : public Piece {
	public:
                virtual string getType() { return "Queen"; }
                virtual bool isValid(Position start, Position end){
                        int colDifference = start.GetColumn() - end.GetColumn();
                        int rowDifference = start.GetRow() - end.GetRow();

                        if(turn == start.GetColor()){
                                cout << "ERROR: Wrong color!" << endl;
                                return false;
                        }


                        if (start.GetColor() == end.GetColor()){
                                cout << "ERROR: Destination is occupied by a piece of your color!" << endl;
                                return false;
                        }


                        if (colDifference == 0 && rowDifference == 0) {
                                cout << "ERROR: Same position!" << endl;
                                return false;
                        }
		

			for(int i = start.GetRow() + 1; i < end.GetRow(); ++i) {
                                if (throwawayBoard[i][start.GetColumn()]->isEmpty() == false) {
                                       cout << "ERROR: Path is not clear!" << endl;
                                       return false;
                                }
                        }
                        for(int i = start.GetColumn() + 1; i < end.GetColumn(); ++i) {
                                if (throwawayBoard[start.GetRow][i]->isEmpty() == false) {
                                        cout << "ERROR: Path is not clear!" << endl;
                                       return false;
                                }
                        }

                        return true;
                }
};

#endif
