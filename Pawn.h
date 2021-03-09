#ifndef PAWN_H
#define PAWN_H

#include <iostream> 
#include "Piece.h"
#include "Board.h"

using namespace std;


class Pawn : public Piece {
        public:
		Pawn() {};
                virtual bool isValid(Position start, Position end) {

                        int colDifference = start.GetColumn() - end.GetColumn();
                        int rowDifference = start.GetRow() - end.GetRow();
			
			 if (turn != start.GetColor()) {
                                cout << "ERROR: Wrong color!" << endl;
                                return false;
                        }

			 if (start.GetColor() == end.GetColor()) {
                                cout << "ERROR: Destination is occupied by a piece of your color!" << endl;
                                return false;
                        }

			if (colDifference == 0 || rowDifference == 0 ) {
                                cout << "ERROR: Same position!" << endl;
                                return false;
                        }

			 for(int i = start.GetRow() + 1; i < end.GetRow(); ++i) {
                                if (throwawayBoard[i][start.GetColumn()].isEmpty() == false) {
                                        cout << "ERROR: Path is not clear!" << endl;
                                        return false;
                                }
                        }

			if (start.GetFirst() == true) {
                                if (start.GetColumn() == end.GetColumn() &&
                                    start.GetRow() + 2 == end.GetRow()) {
                                        return true;
                                }
                                else {
                                        cout << "ERROR: Out of Pawn's ability!" << endl;
                                        return false;
                                }
                        }
                        else {
				 if ( (colDifference == 1 || colDifference == -1) &&
                                    (rowDifference == 1 || rowDifference == -1) &&
                                     start.GetColor() != end.GetColor() &&
                                     end.isEmpty() == false )
                                {
                                        return true;
                                }
				if (colDifference > 1 || colDifference < -1 ||
                                    rowDifference > 1 || rowDifference < -1 ) {
                                        cout << "ERROR: Out of Pawn's ability!" << endl;
                                        return false;
                                }
                        }

                        return true;
                }
};

#endif
