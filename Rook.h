#ifndef ROOK_H
#define ROOK_H

#include <iostream> 
#include "Piece.h"

using namespace std;

class Rook : public Piece {
        public:
                virtual bool isValid(Position start, Position end){
			int colDifference = start.GetColumn() - end.GetColumn();
                        int rowDifference = start.GetRow() - end.GetRow();
			
			

			if(color == start.GetColor()){
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
			
			else if (colDifference > 1 && rowDifference > 1)  {
                                cout << "ERROR: Out of Rook's ability!" << endl;
				return false;
                        }

			else if (colDifference < -1 && rowDifference <-1){
				cout << "ERROR: Out of Rook's ability!" << endl;
				return false;
			}

			else if (colDifference > 1 && rowDifference < -1)  {
                                cout << "ERROR: Out of Rook's ability!" << endl;
				return false;
                        }

			else if (colDifference < -1 && rowDifference > 1)  {
                                cout << "ERROR: Out of Rook's ability!" << endl;
                                return false;
                        }

			
			for(int i = start.GetRow() + 1; i < end.GetRow(); ++i) {
                                if (throw_away[i][start.GetColumn()]->isEmpty() == false) {
                                       cout << "ERROR: Path is not clear!" << endl;
                                       return false;
                                }
                        }
                        for(int i = start.GetColumn() + 1; i < end.GetColumn(); ++i) {
                                if (throw_away[start.GetRow][i]->isEmpty() == false) {
                                        cout << "ERROR: Path is not clear!" << endl;
                                       return false;
                                }
                        }

                        return true;
                }
};

#endif
